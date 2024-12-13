//Программа является учебной
//Автор:Паньков Максим, КЭ-217, 6.12.2024
#include <iostream>
int main()
{
    int a, b;
    std::cout << "Enter A and B: ";
    std::cin >> a >> b;
    std::cout << "A + B = " << a + b << '\n'
        << "A - B = " << a - b << '\n'
        << "A * B = " << a * b << '\n'
        << "A : B = " << a / b << '\n';
    return 0;
}
