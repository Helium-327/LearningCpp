#include <iostream>

int searchArray(std::string array[], int size, std::string element);
int main(){
    
    std::string foods[] = {"pizza", "hamburger", "hotdog"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string myfood;

    std::cout << "Enter element to search for: \n";
    std::cin >> myfood;

    index = searchArray(foods, size, myfood);
    if(index != -1){

        std::cout << myfood << " is at index "<< index << "\n";
    }
    else{
        std::cout << myfood << " is not in the array ! \n";  
    }
    

    return 0;
}

int searchArray(std::string array[], int size, std::string element){

    for(int i = 0; i < size; i++){
        if (array[i] == element){
            return i;
        }
    }
    return -1;
}