/*
 *	Filename: 	Array.h
 * 	Author:		Denis Coady
 * 	Revision:
 */
#ifndef __INCLUDE_ARRAY_H_
#define __INCLUDE_ARRAY_H_


#include "Element.hpp"
#include "ValueContainer.hpp"
#include "numeric_string.hpp"

class Array : public Element, public std::vector<Element*> {
public:

	static Array* unpack(std::string::iterator& it);

	virtual const std::string pack() const;

	virtual const std::string to_string() const;

    ~Array();
};



#endif
