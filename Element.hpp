/*
 *	Filename: 	Package.h
 * 	Author:		Denis Coady
 * 	Revision:
 */
#ifndef __INCLUDE_PACKAGE_H_
#define __INCLUDE_PACKAGE_H_

#include <iostream>
#include <map>
#include <vector>

#include <sstream>
#include <string>

#include "ubjson_exception.hpp"



/* Number Types */
typedef unsigned char	byte;
typedef short           int16;
typedef long            int32;
typedef long long       int64;
typedef std::string     huge;



class Element {
public:

	static Element* unpack(std::string* data);
	static Element* unpack(std::string::iterator& it);

	virtual const std::string pack() const = 0;

	virtual const std::string to_string() const = 0;
};




#endif
