#include <iostream>
#include <string>

using std::cout;
using std::endl;

void cigen(std::string a_fname, std::string a_lname, std::string title, std::string full_date);
void cigen_end(std::string publisher, std::string link, std::string accessed);

int main()
{
    std::string a_fname;
    cout << "What is the authors first name: " << endl;
    std::cin >> a_fname;

    std::string a_lname;
    cout << "What is the authors last name: " << endl;
    std::cin >> a_lname;

    std::string title;
    cout << "What is the title: " << endl;
    std::cin.ignore(); 
    std::getline(std::cin, title);

    std::string full_date;
    cout << "What is the full date: " << endl;
    std::getline(std::cin, full_date);

    std::string publisher;
    cout << "What is the publisher: " << endl;
    std::getline(std::cin, publisher);

    std::string link;
    cout << "What is the link: " << endl;
    std::getline(std::cin, link);

    std::string accessed;
    cout << "What is the date accessed: " << endl;
    std::getline(std::cin, accessed);

    cigen(a_fname, a_lname, title, full_date);
    cigen_end(publisher, link, accessed);

    char exit_t;
    cout<<endl;
    cout<<endl;
    cout << "Please press \"E\" to leave" << endl;
    std::cin >> exit_t;

    if(exit_t == 'E' || exit_t == 'e'){
        std::exit(0);
    }
    

    return 0;
}

void cigen(std::string a_fname, std::string a_lname, std::string title, std::string full_date)
{
    char* a_lname_ptr;
    a_lname_ptr = &a_lname.at(0);
    cout<<endl;
    cout<<endl;
   cout << a_fname << ", " << *a_lname_ptr << ". " << "\"" << title << ".\" " << full_date << "." << endl;

    //int asciinum = int(a_lname_in);
    //if(a_lname_in <=)
}

void cigen_end(std::string publisher, std::string link, std::string accessed)
{
    cout << publisher << ", " << link << "." << " Accessed " << accessed << "." << endl;
}
