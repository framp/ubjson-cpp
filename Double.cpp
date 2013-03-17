/*
 *	Filename: 	Double.cpp
 * 	Author:		Denis Coady
 * 	Revision:
 */

#include <Double.hpp>

Double::Double(double value) : ValueContainer(value)
{
}

const std::string Double::pack() const
{
	std::stringstream ss;
	ss << 'D' << number_string<double>(value_);

	return ss.str();
}

const std::string Double::to_string() const
{
	std::stringstream ss;
	ss << value_;
	return ss.str();
}
