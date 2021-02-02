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
 
int main()
{
    const int length(9);
    int array[length] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
 
	// Перебираем каждый элемент массива (кроме последнего, он уже будет отсортирован к тому времени, когда мы до него доберемся)
	for (int startIndex = 0; startIndex < length ; ++startIndex)
	{
        if ( array[startIndex] > array[startIndex + 1] )
        {
            std::swap(array[startIndex], array[startIndex+1]);
            startIndex = -1;
        }
	}
 
	// Теперь, когда весь массив отсортирован - выводим его на экран
	for (int index = 0; index < length; ++index)
		std::cout << array[index] << ' ';
 
	return 0;
}
