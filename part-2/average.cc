// Bryan Hoang
// bryanhoang873@csu.fullerton.edu
// @breachr2
// Partners: @jareddelacruz

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (!(arguments.size() > 1)) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  double result{};
  for (const std::string& value : arguments) {
    if (value == arguments.at(0)) {
      continue;
    }
    result += std::stod(value);
  }
  double average{result / static_cast<int>((arguments.size() - 1))};
  std::cout << "average = " << average << '\n';
  return 0;
}
