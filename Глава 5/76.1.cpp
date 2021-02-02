/*
 * 75-2.cpp
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
int getUser()
{
    int a = 100;
    do
    {
        
        std::cout << "Введите число от 1 до 9 :";
        std::cin >> a;
        if (std::cin.fail())
        {
            std::cin.clear(); 
            std::cin.ignore(32767, '\n'); 
        }
    }
    while(a > 9 || a < 1);
    return a;
}

int main(int argc, char **argv)
{
    int choice = getUser();
    int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
    int index_search = -1;
    int lenArray = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < lenArray; i++)
    {
        std::cout << array[i] << " ";
        if (choice == array[i])
            index_search = i;
    }
    std::cout << std::endl;
    std::cout << choice << " в массиве на " << index_search << " месте" << std::endl;
    
    
    return 0;
}

