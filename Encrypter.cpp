#include <iostream>
#include <string>

using namespace std;

string convertToASCII(string letter) {
  for (int i = 0; i < letter.length(); i++) {
    char x = letter.at(i);
    cout << int(x);
  }
  return "     Is Your Encrypted Text";
}

string convertFromASCII(string input_text, int len) {
  int num = 0;
  for (int i = 0; i < len; i++) {

    num = num * 10 + (input_text[i] - '0');

    if (num >= 32 && num <= 122) {

      char ch = (char) num;
      cout << ch;

      num = 0;
    }
  }
  return "     Is Your Decoded Text";
}

void exitfunc()
{       
    char exit_t;
    cout<<endl;
    cout<<endl;
    cout << "Please press \"E\" to leave" << endl;
    std::cin >> exit_t;

    if(exit_t == 'E' || exit_t == 'e'){
        std::exit(0);
    }
}

int encp_in();

int encp_out();

int view_equon();

int main()
{
    char instruc;
    cout << "Decode Message[D] Encode Message[E] View Equation[V]:" << endl;
    cin >> instruc;

    switch(instruc)
    {
        case 'D':
            return encp_out();
        break;

        case 'd':
            return encp_out();
        break;

        case 'E':
            return encp_in();
        break;

        case 'e':
            return encp_in();
        break;

        case 'V':
            return view_equon();
        break;

        case 'v':
            return view_equon();
        break;

        default:
        cout << "ERROR" << main() << endl;
    }

        return 0;
}

int view_equon()
{
    cout << "_____EQUATION_____" << endl;

    cout << "ERROR" << endl;

    return 0;
}

int encp_out()
{
    string input_text;
    cout << "Please Enter The code You Would Like to Decode:" << endl;
    cin.ignore();
    getline(cin, input_text);
    
    int len = input_text.length();

    cout << "Your Encoded Message Reads:" << endl; 
     
    cout << convertFromASCII(input_text, len) << endl;
    exitfunc();
    return 0; 
}

int encp_in()
{
    string input_text;
    cout << "Please Enter The Text You Would Like to Encrypt:" << endl;
    cin.ignore();
    getline(cin, input_text);

    cout << "Your Encripted Message is:" << endl;
    cout << convertToASCII(input_text) << endl;
    exitfunc();
    return 0;
}
