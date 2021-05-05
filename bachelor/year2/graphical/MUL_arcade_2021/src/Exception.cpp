/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** Exception
*/

#include "Exception.hpp"

arcade::Error::Error(std::string const &message) throw()
{
    _message = message;
}

const char *arcade::Error::Error::what(void) const throw() {
    return (_message.data());
}

arcade::Error::~Error() throw()
{
}