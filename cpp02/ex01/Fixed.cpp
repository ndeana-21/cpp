#include "Fixed.hpp"

const int Fixed::_fractionSize = 8;

Fixed::Fixed() : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int num) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = num * (1 << Fixed::_fractionSize);
}
Fixed::Fixed(const float num) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = (int)std::roundf(num * (1 << Fixed::_fractionSize));
}
Fixed::Fixed(const Fixed &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &rhs) {
    std::cout << "Assignation operator called" << std::endl;

    if (this != &rhs) {
        this->_fixedPointValue = rhs.getRawBits();
    }
    return *this;
}
std::ostream &operator<<(std::ostream &ostr, const Fixed &fix) {
    ostr << fix.toFloat();
    return ostr;
}

int Fixed::getRawBits() const {
    return this->_fixedPointValue;
}
void Fixed::setRawBits(const int raw) {
    this->_fixedPointValue = raw;
}

float Fixed::toFloat() const {
    return ((float)this->_fixedPointValue / (1 << Fixed::_fractionSize));
}

int Fixed::toInt() const {
    return this->_fixedPointValue / (1 << Fixed::_fractionSize);
}
