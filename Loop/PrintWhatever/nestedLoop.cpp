# include <iostream>

int main(){

    int row;
    int columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> row;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "What symbol?: ";
    std::cin >> symbol;

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= columns; j++){
            std::cout << symbol;
        }
        std::cout << std::endl;
    }
}