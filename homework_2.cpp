л#include <iostream>
#include <limits>
#include <cmath>

int main() {
	long long a = 0;
	std::cout << "The equation: ax^2+bx+c" << std::endl;
  const int INT_MIN = std::numeric_limits<int>::min();
  const int INT_MAX = std::numeric_limits<int>::max();
	std::cout << "Entering the number: 'a'" << " it must be more then : " << INT_MIN << ", less then : " << INT_MAX << std::endl;
	std::cin >> a;

	if (a < std::INT_MIN) {
		while (true) {
			std::cout << "Wrong number, please, entering number more! then: " << INT_MIN << std::endl;
			std::cin >> a;

			if (a >= INT_MIN) {
				break;
			}
		}
	} else if (a > INT_MAX) {
		while (true) {
			std::cout << "Wrong number, please, entering number more! then: " << INT_MAX << std::endl;
			std::cin >> a;

			if (a <= INT_MAX) {
				break;
			}
		}
	}

	long long b = 0;

	std::cout << "Entering the number: 'b', " << " it must be more then: " << INT_MIN << ", and less then : " << INT_MAX << std::endl;
	std::cin >> b;

	if (b < INT_MIN) {
		while  (true) {
			std::cout << "Wrong number, please, entering number more! then: " << INT_MIN << std::endl;
			std::cin >> b;

			if (b >= INT_MIN) {
				break;
			}
		}
	} else if (b > INT_MAX) {
		while (true) {
			std::cout << "Wrong number, please, entering number less! then: " << INT_MAX << std::endl;
			std::cin >> b;

			if (b <= INT_MAX) {
				break;
			}
		}
	}

	long long c = 0;

	std::cout << "Entering the number: 'c'," << "  it must be more then: " << INT_MIN << ", and less then : " << INT_MAX << std::endl;
	std::cin >> c;

	if (c < INT_MIN) {
		while (true) {
			std::cout << "Wrong number, please, entering number more! then: " << INT_MIN << std::endl;
			std::cin >> c;

			if (c >= INT_MIN) {
				break;
			}
		}
	} else if (c > INT_MAX) {
		while (true) {
			std::cout << "Wrong number, please, entering number less! then: " << INT_MAX << std::endl;
			std::cin >> c;

			if (c > INT_MAX) {
				break;
			}
		}
	}
	const int TWO = 2;
	const int FOUR = 4;
	const long long DISCRIMINANT = (b * b) - (FOUR * a * c);
	const int TWO_A = TWO * a;
	double first_x = 0;
	double second_x = 0;
	if (DISCRIMINANT > 0) {
		if (a == 0) {
			double x = (-c) / (b + .0f);
			first_x = x;
			std::cout << "x1 = " << first_x << std::endl;
		} else {
			first_x = (-b + sqrt(DISCRIMINANT)) / (TWO_A);
			second_x = (-b - sqrt(DISCRIMINANT)) / (TWO_A);
			std::cout << "x1 = " << first_x << std::endl;
			std::cout << "x2 = " << second_x << std::endl;
		}
	} else {
			std::cout << "There is no roots \n";
		}

	return 0;
}
