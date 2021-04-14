#pragma once

#include <iostream>

template<typename T>
void	iter(T array[], size_t size, void (*func)(T &)){
	for (size_t i = 0; i < size; i++)
		func(array[i]);	
}