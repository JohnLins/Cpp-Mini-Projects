#include <iostream>

using namespace std;

int main() {

  int numofrows;
  std::cout << "How many rows: " << std::endl;
  std::cin >> numofrows;

  int whitespace = numofrows;

  int printimes = numofrows * numofrows - 1;

  int divided = 0;
  int incmt = 3;

  for (int i = 0; i <= printimes; i++) {

    cout << "*";

    if (i == divided) {
      divided += incmt;
      incmt += 2;

      cout << endl;
    }

  }

  return 0;
}
