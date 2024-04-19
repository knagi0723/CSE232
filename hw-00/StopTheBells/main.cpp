// FREEZE CODE BEGIN
#include <iostream>

void RingTheBells() {
  std::cout << "Ring! Ring! Ring!" << std::endl;
}

int main() {
  std::cout << "Before the bells are rung" << std::endl;
  // FREEZE CODE END
  
  // FREEZE CODE BEGIN
  RingTheBells();
  // FREEZE CODE END

  // FREEZE CODE BEGIN
  std::cout << "After the bells are rung" << std::endl;
  return 0;
}
// FREEZE CODE END

