#include "Pony.hpp"

void ponyOnTheHeap(void) {
	Pony *HeapPony = new Pony("Hermit", "Blue", 1.5, 80, 10);
	HeapPony->ponyDoSomething();
	delete HeapPony;
	return ;
}

void ponyOnTheStack(void) {
	Pony StackPony = Pony("Sten", "White", 1.2, 65, 12);
	StackPony.ponyDoSomething();
	return ;
}

int main() {
	std::cout << "Pony on Heap" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl << "Pony on Stack" << std::endl;
	ponyOnTheStack();
	std::cout << std::endl;
	return (0);
}
