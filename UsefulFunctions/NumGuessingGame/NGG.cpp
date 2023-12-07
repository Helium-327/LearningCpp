# include <iostream>

/*
    NUMBER GUESSING GAME
*/

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "******* NUMBER GUESSING GAME *******" << std::endl;

    do{
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> guess;
        tries++;

        if (guess > num){
            std::cout << "Too high!" << std::endl;
        }
        else if (guess < num){
            std::cout << "Too low!" << std::endl;
        }
        else{
            std::cout << "You got it!" << std::endl;
            std::cout << "You took " << std::endl;
        }

    }while(guess != num);
    std::cout << "************************************" << std::endl;
    return 0;
}