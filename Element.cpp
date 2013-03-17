/*
 *	Filename: 	ubjson.cpp
 * 	Author:		Denis Coady
 * 	Revision:
 */
#include <Element.hpp>
/* Subtypes */
#include <Array.hpp>
#include <Boolean.hpp>
#include <Byte.hpp>
#include <Double.hpp>
#include <Float.hpp>
#include <Huge.hpp>
#include <Int16.hpp>
#include <Int32.hpp>
#include <Int64.hpp>
#include <Object.hpp>
#include <String.hpp>

Element* Element::unpack(std::string* data)
{
	std::string::iterator it = data->begin();
	return Element::unpack(it);
}

Element* Element::unpack(std::string::iterator& it)
{
	Element* e = NULL;

	switch(*it)
	{
		case 'o':
		case 'O':
			e = Object::unpack(it);
		break;

		case 'a':
		case 'A':
			e = Array::unpack(it);
		break;

		case 'T':
		case 'F':
			e = Boolean::unpack(it);
		break;

		case 's':
		case 'S':
			e = String::unpack(it);
		break;

		case 'B':
			e = Byte::unpack(it);
		break;

		case 'i':
			e = Int16::unpack(it);
		break;

		case 'I':
			e =  Int32::unpack(it);
		break;

		case 'L':
			e = Int64::unpack(it);
		break;

		default:
			std::stringstream ss;
			ss << "Unknown type encountered while unpacking " << std::endl;
			throw ubjson_exception(ss.str().c_str());
	}

	return e;
}