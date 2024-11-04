#include <iostream>

int main() {
	int num, num1;
	const int size = 5;
	int arr1[size][size], arr2[size][size];

	std::cout << "Enter yuor number: ";
	std::cin >> num;

	num1 = num;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr1[i][j] = num1;
			num1 = num1 * 2;
		}
	}

	num1 = num;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr2[i][j] = num1;
			num1 = num1 + 1;
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << arr1[i][j] << " ";
		}
		std::cout << "\n";
	}

	std::cout << "\n\n";

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << arr2[i][j] << " ";
		}
		std::cout << "\n";
	}

	return 0;
}