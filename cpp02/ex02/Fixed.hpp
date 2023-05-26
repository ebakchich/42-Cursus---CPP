#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <math.h>

class Fixed
{
	private:
		int value;
		static const int    fractional = 8;
	public:
		Fixed();
		Fixed(int const fnumber);
		Fixed(float const fnumber);
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed&                  operator=(const Fixed& assign);
		int                     getRawBits(void) const;
		void                    setRawBits(int const raw);
		float                   toFloat( void ) const;
		int                     toInt( void ) const;
		Fixed&					min(Fixed& a, Fixed& b);
		Fixed const&			min(Fixed const& a, Fixed const& b);
		Fixed&					max(Fixed& a, Fixed& b);
		Fixed const&			max(Fixed const& a, Fixed const& b);
		// The 6 comparison operators
		bool                    operator>(const Fixed& obj) const;
		bool                    operator<(const Fixed& obj) const;
		bool                    operator>=(const Fixed& obj) const;
		bool                    operator<=(const Fixed& obj) const;
		bool                    operator==(const Fixed& obj) const;
		bool                    operator!=(const Fixed& obj) const;
		// The 4 arithmetic operators
		Fixed					operator+(const Fixed& obj) const;
		Fixed					operator-(const Fixed& obj) const;
		Fixed					operator*(const Fixed& obj) const;
		Fixed					operator/(const Fixed& obj) const;
		// The 4 increment/decrement
		Fixed&					operator++(void); //pre-inc ++obj
		Fixed&					operator--(void); //pre-dec --obj
		Fixed					operator++(int); //post-dec obj++
		Fixed					operator--(int); //post-dec obj--
};
		// copy assignment operator
		std::ostream&    operator<<(std::ostream& os, const Fixed& obj);

#endif
