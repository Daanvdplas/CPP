#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		//constructors
		Fixed(void);
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &object);

		//Operators
		Fixed &operator=(const Fixed &object);
		Fixed operator+(const Fixed &object);
		Fixed operator-(const Fixed &object);
		Fixed operator*(const Fixed &object);
		Fixed operator/(const Fixed &object);
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);

	
		//Compare operators
		bool operator<(const Fixed &object);
		bool operator<=(const Fixed &object);
		bool operator>(const Fixed &object);
		bool operator>=(const Fixed &object);
		bool operator==(const Fixed &object);
		bool operator!=(const Fixed &object);

		//Destructor
		~Fixed(void);

		//Functions
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed &min(Fixed &object1, Fixed &object2);
		static const Fixed &min(const Fixed &object1, const Fixed &object2);
		static Fixed &max(Fixed &object1, Fixed &object2);
		static const Fixed &max(const Fixed &object1, const Fixed &object2);
	private:
		int	_fp_nbr;
		static const int _fract = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);
#endif
