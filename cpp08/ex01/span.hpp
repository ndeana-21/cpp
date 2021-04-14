#pragma once

#include <set>
#include <stdexcept>

class Span {
	public:
		Span();
		Span(unsigned int count);
		Span(const Span &span);
		~Span();
		Span &operator=(const Span &span);
		
		void addNumber(int num);
		
		template<typename T>
		void addNumber(T start, T finish);
		unsigned int shortestSpan();
		unsigned int longestSpan();
	private:
		unsigned int reserve;
		std::multiset<int> set;
};

template<typename T>
void Span::addNumber(T start, T finish) {
	typename T::difference_type distance = std::distance(start, finish);
	if (distance + set.size() <= reserve) {
		set.insert(start, finish);
	}
	else {
		throw std::logic_error("Can't append this range of elements");
	}
}