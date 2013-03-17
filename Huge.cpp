/*
 *	Filename: 	Huge.cpp
 * 	Author:		Denis Coady
 * 	Revision:
 */

#include <Huge.hpp>

Huge::Huge(huge value) : ValueContainer(value)
{
}

const std::string Huge::pack() const
{
	std::stringstream ss;
	int32 length = value_.length();
	if(length < 256)
	{
		ss << "h" << char(length);
	}
	else
	{
		ss << "H" << number_string<int32>(length);
	}
	
	ss << value_;
	return ss.str();
}

const std::string Huge::to_string() const
{
	std::stringstream ss;
	ss << value_;
	return ss.str();
}
