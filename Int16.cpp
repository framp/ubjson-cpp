/*
 *	Filename: 	Int16.cpp
 * 	Author:		Denis Coady
 * 	Revision:
 */

#include <Int16.hpp>

Int16::Int16(int16 value) : ValueContainer(value)
{
}

const std::string Int16::pack() const
{
	std::stringstream ss;
	ss << 'i' << number_string<int16>(value_);

	return ss.str();
}


const std::string Int16::to_string() const
{
	std::stringstream ss;
	ss << value_;
	return ss.str();
}
