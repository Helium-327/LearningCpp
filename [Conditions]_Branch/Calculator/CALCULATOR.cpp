# include <iostream>

/*

*/

int main() {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "****************** CALCULATOR ******************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch (op) {
        case '+'/* constant-expression */:
            /* code */
            result = num1 + num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '-'/* constant-expression */:
            /* code */
            result = num1 - num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '*'/* constant-expression */:
            /* code */
            result = num1 * num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '/'/* constant-expression */:
            /* code */
            result = num1 / num2;
            std::cout << "Result: " << result << std::endl;
            break;
        default:
            /* code */
            std::cout << "Invalid response" << std::endl;
            break;
        };
    
    std::cout << "*************************************************\n";
    return 0;
    
}
