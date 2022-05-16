#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &object);
		Fixed &operator=(const Fixed &object);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int	_fp_nbr;
		static const int _fract = 8;
};
#endif
