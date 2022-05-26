#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &object);
		Fixed &operator=(const Fixed &object);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
	private:
		int	_fp_nbr;
		static const int _fract = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);
#endif
