/*
 *	Filename: 	Float.cpp
 * 	Author:		Denis Coady
 * 	Revision:
 */

#include <Float.hpp>

Float::Float(float value) : ValueContainer(value)
{
}

const std::string Float::pack() const
{
	std::stringstream ss;
	ss << 'd' << number_string<float>(value_);

	return ss.str();
}

const std::string Float::to_string() const
{
	std::stringstream ss;
	ss << value_;
	return ss.str();
}
