#include "serialize.hpp"

void	print_data(const Data *data) {
	std::cout << "s1 : " << data->str_one << \
	"\nn  : " << data->n << \
	"\ns2 : " << data->str_two << std::endl;
}

void	*serialize(void) {
	const char		symbols[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	Data			*data = new Data;

	for (int i = 0 ; i < 8 ; i++) {
		data->str_one += symbols[std::rand() % 62];
		data->str_two += symbols[std::rand() % 62];
	}
	data->n = std::rand();

	std::cout << "\nSerialized data:" << std::endl;
	print_data(data);
	return (reinterpret_cast<void *>(data));
}

Data	*deserialize(void *raw) {
	return (reinterpret_cast<Data *>(raw));
}

int main() {
	void	*raw;
	Data	*data;

	srand(time(0));

	raw = serialize();
	data = deserialize(raw);
	std::cout << "\nDeserialized data:" << std::endl;
	print_data(data);
	delete data;
	return (0);
}
