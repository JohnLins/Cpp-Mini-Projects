#include <iostream>

using namespace std;

bool palindromeChecker(string input);

int main()
{
    palindromeChecker("mom");

    return 0;
}

bool palindromeChecker(string input)
{
    bool output = true;
    int h = -1;
    int j = input.size();
  
  for(int b = 0; b <= input.size(); b++){
    h++;
    j--;
    if(input[j] != input[h]){
        output = false;
    }
  }
    if(output == true){
        cout << "Yes";
    } 
    else {
        cout << "no";
    }
    return output;
}
