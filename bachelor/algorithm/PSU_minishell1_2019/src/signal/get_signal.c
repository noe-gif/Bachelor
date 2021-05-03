/*
** EPITECH PROJECT, 2020
** signal
** File description:
** shell
*/

#include "../../include/shell.h"
#include "../../include/my.h"
#include <stdio.h>
#include <signal.h>

void signal_handler(int sig)
{
    switch (sig) {
    case SIGINT:
        my_printf("\n");
        current_directory();
        break;
    }
}
