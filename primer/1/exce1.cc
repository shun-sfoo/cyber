#include <iostream>

// excecise 1.19
int main() {
  std::cout << "Enter two numbers" << std::endl;
  int minVal = 0, maxVal = 0;
  if (std::cin >> minVal) {
    if (std::cin >> maxVal) {
      if (minVal > maxVal) {
        std::cout << "number 1 must less then number 2" << std::endl;
      } else {
        for (int v = minVal; v < maxVal; ++v) {
          std::cout << v << ", ";
        }
        std::cout << maxVal << std::endl;
      }
    } else {
      std::cout << "number 2 must a integer" << std::endl;
    }
  } else {
    std::cout << "number 1 must a integer" << std::endl;
  }
  return 0;
}
