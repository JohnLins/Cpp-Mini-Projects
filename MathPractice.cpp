#include <iostream>
#include <ctime>
#include <cstdlib>

#define COUT(output) std::cout << output << std::endl;

void pracadd();
void pracmult();
void exitfunc();

int main()
{
    char moa;
    do{
    COUT("Would You Like To Practice Addition Or Multiplication? [A/M]:");
    std::cin >> moa;
    switch(moa){
        case 'A':
        pracadd();
        break;
        case 'M':
        pracmult();
        break;
        default:
        COUT("ERROR TRY AGAIN");
    }

    }while(moa != 'A' || 'M');

    return 0;
}

void pracadd()
{
    srand(time(0));

    int input;
    for(int i = 0; i < 20; i++){
    int num1 = rand() % 40;
    int num2 = rand() % 40;;

    COUT("Answer, " << num1 << " + " << num2  << "    Your Answer: ");
    std::cin >> input;

    if(input == (num1 + num2)){
        COUT("YOU DID IT!")
    }
    else{
        COUT("No, try another one.");
    }
    }
    exitfunc();
}

void pracmult()
{
    srand(time(0));

    int input;
    for(int i = 0; i < 20; i++){
    int num1 = rand() % 40;
    int num2 = rand() % 40;;

    COUT("Answer, " << num1 << " X " << num2  << "    Your Answer: ");
    std::cin >> input;

    if(input == (num1 * num2)){
        COUT("YOU DID IT!")
    }
    else{
        COUT("No, try another one.");
    }
    }
    exitfunc();
}

void exitfunc()
{       
    //EXIT CODE
    char exit_t;
    COUT(std::endl << std::endl);
    COUT("Please press \"E\" to leave")
    std::cin >> exit_t;

    if(exit_t == 'E' || exit_t == 'e'){
        std::exit(0);
    }
//EXIT END
}
