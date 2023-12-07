#include <iostream>

int main(){

    std::string car[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};

    int rows = sizeof(car)/sizeof(car[0]);
    int columns = sizeof(car[0])/sizeof(car[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << car[i][j] << ' ';
        }
        std::cout << "\n";
    }
}