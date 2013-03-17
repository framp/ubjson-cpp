/*
 *	Filename: 	Byte.cpp
 * 	Author:		Denis Coady
 * 	Revision:
 */

#include <Byte.hpp>

Byte::Byte(byte value) : ValueContainer(value)
{
}


const std::string Byte::pack() const
{
	std::stringstream ss;
	ss << 'B' << number_string<byte>(value_);

	return ss.str();
}

const std::string Byte::to_string() const
{
	std::stringstream ss;
	ss << value_;
	return ss.str();
}
