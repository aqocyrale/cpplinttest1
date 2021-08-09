#include <iostream>
#include <cstdlib>

auto main() -> int {
	std::cerr << "text\n";

	int unsafe_array[10];
	unsafe_array[11] = 0;

	return EXIT_SUCCESS;
}
