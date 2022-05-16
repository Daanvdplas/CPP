#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const Fixed &object)
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(object.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &object)
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(object.getRawBits());
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fp_nbr);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fp_nbr = raw;
}
