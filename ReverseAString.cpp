#include <iostream>

using namespace std;

void convert(string textInput);

int main() {
  string textInput;
  cout << "Enter a word" << endl;
  cin >> textInput;

  convert(textInput);

  return 0;
}

void convert(string textInput) {
  int textlength = (textInput.length());

  while (textlength >= 0) {
    textlength--;
    cout << textInput[textlength];
  }

}
