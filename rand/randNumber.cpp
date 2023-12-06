# include <iostream>

int main() {

    // // srand(time(NULL));
    // srand(time(NULL));  // 获取当前时间戳作为随机种子，固定状态
    // int num = rand() % 6 + 1;   // rand()生成一个0-32767之间的随机数，取x的余数之后，会得到0-(x-1)的随机数
    // std::cout << num;   // 

    // return 0;

    srand(time(0));     // 获取当前时间戳作为随机种子，固定状态
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1/* constant-expression */:
        /* code */
        std::cout << "You win a bumper sticker!" << std::endl;
        break;
    case 2:
        std::cout << "You win a t-shirt!" << std::endl;
        break;
    case 3:
        std::cout << "You win a prize!" << std::endl;
        break;
    case 4:
        std::cout << "You win a gift card!" << std::endl;
        break;
    case 5:
        std::cout << "You win concert tickets!" << std::endl;
    default:
        break;
    }

    return 0;
}