#pragma once
#include <iostream>;

template<typename I, typename L, typename D>
L clamp(I min, L value, D max) {
	if (value < min) {
		return min;
	}
	else if (value > max) {
		return max;
	}
	else {
		return value;
	}
}

template<typename T>
T CheckInput(T choice)
{
	while (1) {
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "****************************************" << std::endl;
			std::cout << "Invalid Input Recieved, Please try Again" << std::endl;
			std::cout << "****************************************" << std::endl;
			std::cin >> choice;
		}
		if (!std::cin.fail()) {
			return choice;
			break;
		}
	}
}