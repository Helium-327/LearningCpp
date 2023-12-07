#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void showResult(char player, char computer);

int main(){
    // char choice;
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice is :\n";
    showChoice(player);
    computer = getComputerChoice();
    std::cout << "Computer's choice is :\n";
    showChoice(computer);
    showResult(player, computer);
}

char getUserChoice(){

    char choice;
    do{
    std::cout << "************************* \n";
    std::cout << "Choose one the following: \n";
    std::cout << "************************* \n";
    std::cout << "'r' ===> 'Rock'\n";
    std::cout << "'s' ===> 'Scissors'\n";
    std::cout << "'p' ===> 'Paper'\n";
    std::cin >> choice;
    }while(choice != 'r' && choice != 's' && choice != 'p');

    return choice;  
}

char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;
    switch (num)
    {
    case 1 /* constant-expression */:
        /* code */
        return 's';
    case 2:
        return 'p';
    case 3:
        return 'r';
    default:
        std::cout << "That is an invalid input \n";
        break;
    }
}

void showChoice(char choice){

    switch (choice)
    {
    case 's' /* constant-expression */:
        /* code */
        std::cout << "Scissors \n";
        break;
    case 'r':
        std::cout << "Rock \n";
        break;
    case 'p':
        std::cout << "Paper \n";
        break;
    default:
        std::cout << "It's an Invalid input \n";
        break;
    }
}

void showResult(char player, char computer){
    switch (player)
    {
    case 'r' /* constant-expression */:
        /* code */
        if (computer == 'r'){
            std::cout << "It's a tie.";
        }
        else if(computer == 'p'){
            std::cout << "You lose!";
        }
        else{
            std::cout << "You win!";
        }
        break;
    case 's' /* constant-expression */:
        /* code */
        if (computer == 's'){
            std::cout << "It's a tie.";
        }
        else if(computer == 'r'){
            std::cout << "You lose";
        }
        else{
            std::cout << "You win";
        }
        break;
    case 'p' /* constant-expression */:
        /* code */
        if (computer == 'p'){
            std::cout << "It's a tie.";
        }
        else if(computer == 's'){
            std::cout << "You lose";
        }
        else{
            std::cout << "You win";
        }
        break;
    default:
        std::cout << "That is an invalid input \n";
        break;
    }

}
