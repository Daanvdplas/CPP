#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	_fp_nbr = nbr << _fract;
	//std::cout << _fp_nbr << std::endl;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	int i_part = (int)nbr;
	float f_part = nbr - i_part;
	_fp_nbr = (i_part << _fract) + roundf((f_part * (1 << _fract)));
}

int Fixed::toInt(void) const
{
	return (_fp_nbr >> _fract);
}

float Fixed::toFloat(void) const
{
	float i_part = _fp_nbr >> _fract;
	int help = ((int)i_part << _fract);
	float f_part = (float)(_fp_nbr - help) / (float)(1 << _fract);
	return (i_part + f_part);
}

Fixed::Fixed(const Fixed &object)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
}

Fixed &Fixed::operator=(const Fixed &object)
{
	std::cout << "Copy assignment operator called" << std::endl;
	//setRawBits(object.getRawBits());
	if (this != &object)
		this->_fp_nbr = object._fp_nbr;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

// Due to the const behind the function, this class function is not 
// allowed to change a member variable of the class.
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fp_nbr);
}

void Fixed::setRawBits(int const raw)
{
	_fp_nbr = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &object)
{
	out << object.toFloat();
	return (out);
}
