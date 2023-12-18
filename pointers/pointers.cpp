#include <iostream>
/*
    一、指针
    -----------------
    pointers = variable that stores a memory addressof another variable
               sometimes it's easier to work with an address.

    & address-of operator
    * derefernce operator

    二、空指针
    -----------------
    Null value = a special value that means something has no value.
                 When a pointer is holding a null value,
                 that pointer is not pointing at anything (null pointers)
    nullpyr = keyword represents a null pointer literal
    nullptrsa are helpful when determining if an address
    was successfully assigned to a pointer

    三、指针很危险
    -----------------
    指针是一种变量，其值是另一个变量的内存地址。
    这意味着，通过指针，你可以间接地访问和操作这个地址所对应的变量。
    这使得指针变得很危险，因为它可以让你在不创建新变量的情况下操纵数据。
    指针的滥用可能导致以下问题：
    *1. 空指针：
        当指针没有被初始化为一个有效的内存地址时，它就是一个空指针。
        访问或操作空指针可能会导致程序崩溃或产生未定义的行为。

    *2. 悬挂指针：
        悬挂指针是指向已删除或未分配内存的指针。
        访问悬挂指针可能会导致程序崩溃或产生未定义的行为。

    *3. 指针越界：
        当指针访问了它不应该访问的内存区域时，就会发生指针越界。
        这可能导致程序崩溃或产生未定义的行为。

    *4. 数据损坏：
        当指针被用于修改数据时，如果指针没有正确地指向数据的内存地址，
        那么修改可能会影响到其他地方的变量。这可能导致数据损坏或程序崩溃。
    为了避免这些问题，你需要确保指针始终指向一个有效的内存地址，并在访问指针时进行适当的边界检查。
    
    四、如何避免危险
    -----------------
    为了避免指针的滥用和潜在的问题，你应该采取以下措施：

    *1. 初始化指针：
        在使用指针之前，确保将其初始化为一个有效的内存地址。可以使用new关键字为指针分配内存，或者使用nullptr表示指针为空。

    *2. 检查指针是否为空：
        在访问指针时，使用if语句检查指针是否为空。这样可以确保在指针为空时不会尝试进行解引用操作，从而避免编译错误。

    *3. 边界检查：
        在访问指针时，确保不要越界访问内存。可以使用指针的边界检查方法，如check_ptr()函数，确保指针不会访问不应该访问的内存区域。

    *4. 避免悬挂指针：
        尽量避免使用悬挂指针。当一个对象被删除时，它的指针应该被设置为nullptr，以避免悬挂指针。

    *5. 使用智能指针：
        使用智能指针（如std::unique_ptr和std::shared_ptr）可以自动管理指针的生命周期，从而避免指针的滥用和潜在问题。

    *6. 遵循最佳实践：
        遵循最佳实践，如使用const指针来避免修改数据，使用指针时进行适当的边界检查等，可以降低指针的风险。
*/

int main( ){
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "address was not assigned! \n";
    }
    else{
        std::cout << "address was assigned!\n";
        std::cout << "The address assigned is " << pointer << '\n';
        std::cout << "The content under the address is " << *pointer << '\n';
    }

}