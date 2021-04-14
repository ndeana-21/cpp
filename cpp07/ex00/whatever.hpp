#pragma once

template<typename T>
void swap(T & left, T & right) {
	T tmp = left;
	left = right;
	right = tmp;
}

template<typename T>
T &	min(T & left, T & right) {
	return left < right ? left : right;	
}

template<typename T>
T &	max(T & left, T & right) {
	return left > right ? left : right;
}