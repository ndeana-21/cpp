# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &src);
		~Fixed(void);

		Fixed &operator=(const Fixed &rhs);

		int getRawBits() const;
		void setRawBits(const int raw);
		float toFloat() const;
		int toInt() const;

	private:
		int _fixedPointValue;
		static const int _fractionSize;
};

std::ostream &operator<<(std::ostream &o,const Fixed &i);