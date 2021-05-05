/*
** EPITECH PROJECT, 2021
** bootrsap
** File description:
** arcade
*/

#ifndef DLLOADER_HPP
#define DLLOADER_HPP
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include <assert.h>
#include <unistd.h>
#include "Exception.hpp"

template <typename T>

class DLLoader {
    public :
        DLLoader(const char *namelib) : _handler(dlopen(namelib, RTLD_LAZY)) {
            // try exept de ce if
            if (!_handler) {
                // fprintf(stderr, "%s\n", dlerror());
                throw arcade::Error(dlerror());
            }
        };
        virtual ~DLLoader() {
            dlclose(_handler);
        };
        T &getMethod()
        {
            typedef T &(*entryPoint_t)(void);
            entryPoint_t entryPoint = (entryPoint_t) dlsym(_handler, "entryPoint");
            return entryPoint();
        };
    private:
        void *_handler;
};

#endif /* !DLLOADER_HPP */