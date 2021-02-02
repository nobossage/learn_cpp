#include <iostream>

int main()
{
   std::cout << "Enter a number: "; // просим пользователя ввести любое число
   int a = 0;
   std::cin >> a; // получаем пользовательское число и сохраняем его в переменную a
   std::cout << "You entered " << a << std::endl;
   return 0;
}
