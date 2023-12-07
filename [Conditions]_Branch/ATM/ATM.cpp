#include <iostream>
#include <iomanip>
void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main(){

    int choice = 0;
    double balance = 0;
    do{
    std::cout << "******************" << std::endl;
    std::cout << "Enter your choice:" << std::endl;
    std::cout << "******************" << std::endl;
    std::cout << "1. Show Balance" << std::endl;
    std::cout << "2. Deposit Money" << std::endl;
    std::cout << "3. Withdraw Money" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cin >> choice;

    std::cin.clear();   
    fflush(stdin);      
    /* 
        1. std::cin.clear()函数，用于清除 std::cin 的错误标志， std::cin 不再认为上一次的输入是无效的。
        2. fflush(stdin)函数，刷新 std::cin 的缓冲区，std::cin 立即将缓冲区中的内容发送到标准输出（通常是屏幕），从而避免用户输入的数据被缓存在缓冲区中
    */

        switch (choice)
        {
        case 1 /* constant-expression */:
            /* code */
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thank for visiting!";
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
        }
    }while(choice != 4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Your Balance is: $" << std::setprecision(2) << std::fixed << balance << std::endl; //设置显示精度
}
double deposit(){

    double amount = 0;
    std::cout << "Enter amount to be deposited:";
    std::cin >> amount;
    if (amount > 0){
        return amount;
    }
    else{
        std::cout << "That's not a valid amount: " << std::endl;
        return 0;
    }
}
double withdraw(double balance){

    double amount = 0;
    std::cout << " Enter amount to be withdrawed:";
    std::cin >> amount;

    if (amount > balance){
        std::cout << "Insufficient Funds"<< std::endl;
        return 0;
    }
    else if(amount < 0){
        std::cout << "That's an invalid number!"<<std::endl;
        return 0;
    }
    else{
        return amount;
    }
}