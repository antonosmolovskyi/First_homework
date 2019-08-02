#include <iostream>
#include <limits>
#include <cmath>

int main() {
  bool value = true;
  int x = 0;
  long long a = 0;
  std::cout << "The equation: ax^2+bx+c" << std::endl;
  std::cout << "Entering the number: 'a'" << " it must be more then : " << std::numeric_limits<int>::min() << ", less then : " << std::numeric_limits<int>::max() << std::endl;
  std::cin >> a;

  if (a < std::numeric_limits<int>::min()) {
    while (true) {
      std::cout << "Wrong number, please, entering number more! then: " << std::numeric_limits<int>::min() << std::endl;
      std::cin >> a;

      if (a >= std::numeric_limits<int>::min()) {
        break;
      }
    }
  } else if (a > std::numeric_limits<int>::max()) {
    while (value == true) {
      std::cout << "Wrong number, please, entering number more! then: " << std::numeric_limits<int>::max() << std::endl;
      std::cin >> a;

      if (a <= std::numeric_limits<int>::max()) {
        break;
      }
    }
  }

  long long b = 0;

  std::cout << "Entering the number: 'b', " << " it must be more then: " << std::numeric_limits<int>::min() << ", and less then : " << std::numeric_limits<int>::max() << std::endl;
  std::cin >> b;

  if (b < std::numeric_limits<int>::min()) {
    while (value == true) {
      std::cout << "Wrong number, please, entering number more! then: " << std::numeric_limits<int>::min() << std::endl;
      std::cin >> b;

      if (b >= std::numeric_limits<int>::min()) {
        break;
      }
    }
  } else if (b > std::numeric_limits<int>::max()) {
    while (value == true) {
      std::cout << "Wrong number, please, entering number less! then: " << std::numeric_limits<int>::max() << std::endl;
      std::cin >> b;

      if (b <= std::numeric_limits<int>::max()) {
        break;
      }
    }
  }

  long long c = 0;

  std::cout << "Entering the number: 'c'," << "  it must be more then: " << std::numeric_limits<int>::min() << ", and less then : " << std::numeric_limits<int>::max() << std::endl;
  std::cin >> c;

  if (c < std::numeric_limits<int>::min()) {
    while (value == true) {
      std::cout << "Wrong number, please, entering number more! then: " << std::numeric_limits<int>::min() << std::endl;
      std::cin >> c;

      if (c >= std::numeric_limits<int>::min()) {
        break;
      }
    }
  } else if (c > std::numeric_limits<int>::max()) {
    while (value == true) {
      std::cout << "Wrong number, please, entering number less! then: " << std::numeric_limits<int>::max() << std::endl;
      std::cin >> c;

      if (c > std::numeric_limits<int>::max()) {
        break;
      }
    }
  }
  
  const int TWO = 2;
  const int FOUR = 4;
  int DISCRIMINANT = 0;
  DISCRIMINANT = (b * b) - (FOUR * a * c);
  const int TWO_A = TWO * a;
  float first_x = 0;
  float second_x = 0;
  if (DISCRIMINANT > 0) {
    if (a == 0) {
      x = (-c) / b + .0f;
      first_x = second_x = x;
      std::cout << "x1 = " << first_x << std::endl;
    } else {
      first_x = (-b + sqrt(DISCRIMINANT)) / (TWO_A);
      second_x = (-b - sqrt(DISCRIMINANT)) / (TWO_A);
      std::cout << "x1 = " << first_x << std::endl;
      std::cout << "x2 = " << second_x << std::endl;
    }
  } else {
      std::cout << "There is no roots" << std::endl;
    }
  return 0;
}
