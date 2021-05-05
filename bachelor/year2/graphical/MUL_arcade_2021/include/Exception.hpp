/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** Exception
*/

#ifndef EXCEPTION_HPP_
#define EXCEPTION_HPP_

#include <exception>
#include <string>

namespace arcade
{
    class Error : public std::exception {
        public:
            Error(std::string const &message) throw();
            ~Error() throw();
            virtual const char *what(void) const throw();

            std::string _message;
        protected:
        private:
    };

}
#endif /* !EXCEPTION_HPP_ */