#include "span.hpp"
#include <stdexcept>
#include <cmath>

Span::Span(): reserve(0), set() {}
Span::Span(unsigned int count): reserve(count), set() {}
Span::Span(const Span &span): reserve(span.reserve), set(span.set) {}
Span::~Span() {}
Span &Span::operator=(const Span &span) {
	if (this != &span) {
		reserve = span.reserve;
		set = span.set;
	}
	return *this;
}

void Span::addNumber(int num) {
	if (set.size() < reserve) {
		set.insert(num);
	}
	else {
		throw std::logic_error("Reached the maxim elements count");
	}
}
unsigned int Span::shortestSpan() {
	unsigned int shortestSpan = longestSpan();

	std::multiset<int>::iterator it = set.begin();
	std::multiset<int>::iterator itNext = ++set.begin();
	for (; itNext != set.end(); ++it, ++itNext) {
		if (shortestSpan > static_cast<unsigned int>(llabs(static_cast<long long int>(*itNext) - static_cast<long long int>(*it)))) {
			shortestSpan = static_cast<unsigned int>(llabs(static_cast<long long int>(*itNext) - static_cast<long long int>(*it)));
		}
	}
	return shortestSpan;
}
unsigned int Span::longestSpan() {
	if (set.size() < 2)
		throw  std::logic_error("Not enough items to count");
	return static_cast<unsigned int>(llabs(static_cast<long long int>(*(--set.end())) - static_cast<long long int>(*set.begin())));
}
