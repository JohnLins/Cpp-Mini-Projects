#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void PrintIntroduction(int Difficulty){
   //welcome message
    cout << "\n\n\nYou are a secret agent breaking into a level " << Difficulty;
    cout << " Enter the correct code to continue...\n\n";

}

bool PlayGame(int Difficulty){

    PrintIntroduction(Difficulty);

    //Define variables
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //output
    cout << "+ There are 3 numbers in the code" << endl;
    cout << "+ The codes add-up to: " << CodeSum << endl;
    cout << "+ The codes multiply to give: " << CodeProduct << endl;


    int GuessA, GuessB, GuessC;

    cout << "Enter your Guess: " << endl;

    cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //outcomes
    if(GuessSum == CodeSum && GuessProduct == CodeProduct){
        cout << "YOU WIN!" << endl;
        return true;
    }
    else{
        cout << "YOU FAIL :(" << endl;
        return false;
    }

}

int main(){
    srand(time(NULL));

    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;
    //loop until all done
    while(LevelDifficulty <= MaxDifficulty){

    bool bLevelComplete = PlayGame(LevelDifficulty);


    if(bLevelComplete){
    ++LevelDifficulty;

    }

}
    cout << "Great Work! You have hacked the server room." << endl;

    return 0;
}
