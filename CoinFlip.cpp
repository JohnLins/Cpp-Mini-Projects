#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

string flipcoin();

int main() {
  string flip;
  cout << "[Type \"flip\"] to flip the coin:" << endl;
  cin >> flip;

  if (flip == "flip" || flip == "Flip") {
    flipcoin();
  } else {
    cout << "ERROR" << endl;
  }

  return 0;
}

string flipcoin() {
    srand(time(0));
    int num = (rand() % 2);

    if (num == 1) {
      cout << "Heads" << endl;
      return "Heads";
    } else {
      cout << "Tails" << endl;

      return "Tails";

    }
}
