#include <iostream>
#include <cmath>

using namespace std;

int Division();
int Muliplication();
int Power();
int Remainder();
int Subtraction();

int main()
{
//Multiplication func from mult.h
    Muliplication();
//Power func from powr.h
    Power();
//Substraction func from subt.h
    Subtraction();
//Division func from divn.h
    Division();
//Remainder func from remr.h
    Remainder();


    return 0;
}

int Division()
{
    cout << "_Division_" << endl;

    int numone_divn, numtwo_divn;

    cout << "Enter a number:" << endl;
    cin >> numone_divn;

    cout << "Enter another number" << endl;
    cin >> numtwo_divn;

    cout << "Your inputs quotient is..." << numone_divn / numtwo_divn << endl;

    return 0;
}

int Muliplication()
{
    cout << "__Multiplication__" << endl;

    int numone_mult, numtwo_mult;
    
    cout << "Enter a number:" << endl;
    cin >> numone_mult;

    cout << "Enter another number:" << endl;
    cin >> numtwo_mult;

    cout << "Your inputs multiply to..." << numone_mult * numtwo_mult << endl;

    return 0;
}

int Power()
{

    cout << "_To The Power Of_" << endl;

    int numone_powr, numtwo_powr;
    
    cout << "Enter a number:" << endl;
    cin >> numone_powr;

    cout << "Enter another number" << endl;
    cin >> numtwo_powr;

    cout << "The power of your inputs are..." << pow(numone_powr, numtwo_powr) << endl;

    return 0;
}

int Remainder()
{
    cout << "__Remainder__" << endl;

    int numone_remr, numtwo_remr;

    cout << "Enter a number:" << endl;
    cin >> numone_remr;

    cout << "Enter another number:" << endl;
    cin >> numtwo_remr;

    cout << "Your inputs remainder is..." << numone_remr % numtwo_remr << endl;

    return 0;
}

int Subtraction()
{
    cout << "_Subtraction_" << endl;

    int numone_subt, numtwo_subt;
    
    cout << "Enter a number" << endl;
    cin >> numone_subt;

    cout << "Enter a number" << endl;
    cin >> numtwo_subt;

    cout << "The diffrence of your inputs..." << numone_subt - numtwo_subt << endl;

    return 0;
}
