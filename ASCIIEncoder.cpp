#include <iostream>

using namespace std;

void func(char letter) {

  int asciinum = int(letter);

  while (asciinum <= 250) {

    asciinum++;

    char asciiencd = char(asciinum);

    cout << "Character: " << asciiencd << endl;
    cout << "ASCII CODE: " << asciinum << endl;
  }

}

int main() {

  char theletter;

  cout << "Enter Starting Character:" << endl;

  cin >> theletter;

  func(theletter);

  return 0;

}
