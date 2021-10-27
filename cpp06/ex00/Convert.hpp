#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <limits>

/**
 ** cpp_convert.cpp
 **/

int	cpp_detected_char(std::string user);
int	cpp_detected_int(std::string user);
int     cpp_detected_float(std::string user);
int     cpp_detected_double(std::string user);

/**
 ** cpp_find.cpp
 **/

int	cpp_find_double(std::string user);
int	cpp_find_float(std::string user);
int	cpp_find_int(std::string user);

#endif
