#include <iostream>
#include <ctime>

//  Prints an introduction.
void PlayIntroduction(int Dificulty)
{
    //  std::cout -> "std" is a namespace, "::" is scope operator, "cout" is defined in std namespace       
    std::cout << "\n\nYou are a secret agent breaking into a LEVEL " << Dificulty;
    std::cout << " secure server room...\nEnter the correct code to continue...\n\n";
}

bool PlayGame(int Dificulty)
{
    //  const identifier allows us to never change the variable value.
    const int CodeA = (rand() % Dificulty) + Dificulty;
    const int CodeB = (rand() % Dificulty) + Dificulty;
    const int CodeC = (rand() % Dificulty) + Dificulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //  Store Player Guesses
    int GuessA;
    int GuessB;
    int GuessC;
    int GuessSum;
    int GuessProduct;

    PlayIntroduction(Dificulty);

    std::cout << "* There are 3 numbers in the code\n";
    std::cout << "* The codes add up to: " << CodeSum;
    std::cout << "\n* The code multiply to give: " << CodeProduct << "\n";

    std::cin >> GuessA >> GuessB >> GuessC;

    GuessSum = GuessA + GuessB + GuessC;
    GuessProduct = GuessA * GuessB * GuessC;

    //  Checks if the guesses are correct.
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nCorrect!!" << "\n\nINCREASING DIFICULTY";
        return true;
    }
    else
    {
        std::cout << "\nGame Over, they caught you hacking and captured you...";
        return false;
    }

    std::cin.get();
}

int main()
{
    srand(time(NULL));  //  Create new random sequence based on time of day

    int LevelDificulty = 1;
    int const MaxLevel = 5;

    while (LevelDificulty <= MaxLevel) // Loops game until aare levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDificulty);

        std::cin.clear(); // Clears any errors
        std::cin.ignore(); //   Discards the buffer

        if (bLevelComplete)
        {
            //  Increase the level dificulty
            LevelDificulty++;
        }
    }

    std::cout << "\n*****HACKING COMPLETE!!*****\n\n----- CONGRATULATIONS------";


}
