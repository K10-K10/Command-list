#include <iostream>
#include <ctime>

int main() {
  time_t current_unix_time = time(nullptr);
  std::cout <<  current_unix_time << std::endl;
  return 0;
}
