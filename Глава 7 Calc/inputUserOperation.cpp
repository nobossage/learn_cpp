/*
 * inputUserOperation
 * 
 * Copyright 2021 noble <noble@terra>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>

char inputInteger()
{
    int a=0;
    std::cout << "Введите целое число:";
    std::cin >> a;
    std::cin.ignore(32767,'\n');
    return a;
    
}

char inputUserOperation()
{
    char operation = '0';

    do
    {
        std::cout << "Введите знак действия (+/-*:) :";
        std::cin >> operation;
    }
    while ((operation != '+') &&  (operation != '-') &&  (operation != ':') &&  (operation != '/') &&  (operation != '*'));
    std::cin.ignore(32767,'\n');
    //std::out << endl;
	return operation;
    
}
/*
int main()
{
    int x(0),y(0);
    x = inputInteger();
    y = inputInteger();
    char oper = inputUserOperation();
    std::cout << x << " " << oper << " " << y;
}
//*/

