#include "Fixed.hpp"
#include <cmath>

//Constructors
Fixed::Fixed(void)
{
	setRawBits(0);
}

Fixed::Fixed(const int nbr)
{
	_fp_nbr = nbr << _fract;
}

Fixed::Fixed(const float nbr)
{
	int i_part = (int)nbr;
	float f_part = nbr - i_part;
	_fp_nbr = (i_part << _fract) + roundf((f_part * (1 << _fract)));
}

Fixed::Fixed(const Fixed &object)
{
	*this = object;
}

Fixed::~Fixed(void)
{}

//Operators
Fixed &Fixed::operator=(const Fixed &object)
{
	if (this != &object)
		this->_fp_nbr = object._fp_nbr;
	return (*this);
}

Fixed Fixed::operator+(const Fixed &object)
{
	return (Fixed(this->toFloat() + object.toFloat()));
}

Fixed Fixed::operator-(const Fixed &object)
{
	return (Fixed(this->toFloat() - object.toFloat()));
}

Fixed Fixed::operator*(const Fixed &object)
{
	return (Fixed(this->toFloat() * object.toFloat()));
}

Fixed Fixed::operator/(const Fixed &object)
{
	return (Fixed(this->toFloat() / object.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	_fp_nbr++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	_fp_nbr++;
	return (old);
}

Fixed &Fixed::operator--(void)
{
	_fp_nbr--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	_fp_nbr--;
	return (old);
}

//Compare operators
bool Fixed::operator<(const Fixed &object)
{
	return (this->toFloat() < object.toFloat());
}
bool Fixed::operator<=(const Fixed &object)
{
	return (this->toFloat() <= object.toFloat());
}

bool Fixed::operator>(const Fixed &object)
{
	return (this->toFloat() > object.toFloat());
}

bool Fixed::operator>=(const Fixed &object)
{
	return (this->toFloat() >= object.toFloat());
}
bool Fixed::operator==(const Fixed &object)
{
	return (this->toFloat() == object.toFloat());
}

bool Fixed::operator!=(const Fixed &object)
{
	return (this->toFloat() != object.toFloat());
}

//Functions
void Fixed::setRawBits(int const raw)
{
	_fp_nbr = raw;
}

// Due to the const behind the function, this class function is not 
// allowed to change a member variable of the class.
int Fixed::getRawBits(void) const
{
	return (_fp_nbr);
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

Fixed &Fixed::min(Fixed &object1, Fixed &object2)
{
	if (object1.toFloat() < object2.toFloat())
		return (object1);
	else
		return (object2);
}

const Fixed &Fixed::min(const Fixed &object1, const Fixed &object2)
{
	if (object1.toFloat() < object2.toFloat())
		return (object1);
	else
		return (object2);
}

Fixed &Fixed::max(Fixed &object1, Fixed &object2)
{
	if (object1.toFloat() > object2.toFloat())
		return (object1);
	else
		return (object2);
}

const Fixed &Fixed::max(const Fixed &object1, const Fixed &object2)
{
	if (object1.toFloat() > object2.toFloat())
		return (object1);
	else
		return (object2);
}

std::ostream &operator<<(std::ostream &out, const Fixed &object)
{
	out << object.toFloat();
	return (out);
}
