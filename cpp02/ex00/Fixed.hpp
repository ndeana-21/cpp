#pragma once

# include <iostream>

class Fixed {
	public:
		Fixed(const Fixed &src);
		Fixed(void);
		~Fixed(void);
		Fixed &operator=(const Fixed &rhs);

		int getRawBits(void) const;
		void setRawBits(const int raw);

	private:
		int _fixedPointValue;
		static const int _fractionSize;
};