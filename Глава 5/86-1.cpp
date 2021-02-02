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
#include <algorithm> // для std::swap. В C++11 используйте заголовок <utility>
//#include <string>

int getLengh()
{
    std::cout << "Сколько имен ждать? : ";
    int a;
    std::cin >> a;
    std::cin.ignore(32767, '\n'); 
    return a;
}

std::string getName(int count)
{
    std::cout << "Введите " <<  (count + 1) << " имя : ";
    std::string name;
    std::getline(std::cin, name);
    return name;
}

void sortArray(std::string *array, int length)
{
    for (int iteration = 0; iteration < length - 1; iteration ++)
    
    {
        for (int currentIndex = 0; currentIndex < length - 1; currentIndex++)
        {
            if (array[currentIndex] > array[currentIndex+1])
                std::swap(array[currentIndex], array[currentIndex + 1]);            
        } 
    }
    
}
int main()
{
    const int length = getLengh();
    std::string *crowd = new std::string[length];
    for (int count = 0; count < length; count++)
    {
        crowd[count] = getName(count);
    }
    sortArray(crowd, length);
    for (int count = 0; count < length; count++)
    {
        std::cout << crowd[count] << std::endl;
    }
    
		//std::cout << length << ' ';
    delete[] crowd;

	return 0;
}
