#pragma once

#include <iterator>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int search) {
	typename T::iterator it = std::find(container.begin(), container.end(), search);
	if (it == container.end())
		throw std::logic_error("Didn't find element in container");
	else
		return it;
}