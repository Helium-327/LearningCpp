# include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "****** Temperature Conversion ******" << std::endl;
    std::cout << "F = Fahrenheit \n ";
    std::cout << "C = Celsius \n ";
    std::cout << "What unit would you like to convert to? ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        /* data */
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "The temperature is: " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "The temperature is: " << temp << "C\n";
    }
    else{
        std::cout << "Please enter in only C or F\n" << "\n";
    }
    std::cout << "************************************" << std::endl;

    return 0;
}