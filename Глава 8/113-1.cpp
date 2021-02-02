/*
 * test3.cpp
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


// array - это массив, в котором мы проводим поиски.
// target - это искомое значение.
// min - это индекс минимальной границы массива, в котором мы осуществляем поиск.
// max - это индекс максимальной границы массива, в котором мы осуществляем поиск.
// Функция binarySearch() должна возвращать индекс искомого значения, если он обнаружен. В противном случае, возвращаем -1

class Numbers
{
    public:
    int m_n1;
    int m_n2;
    
    void set (int x, int y)
    {
        m_n1 = x;
        m_n2 = y;
    }
    
    void print()
    {
        std::cout << "Numbers(" << m_n1 << ", " << m_n2 << ")" << std::endl;
        
    }
};
 

int main()
{
	Numbers n1;
	n1.set(3, 3); // инициализируем объект n1 значениями 3 и 3
	
	Numbers n2{ 4, 4 }; // инициализируем объект n2 значениями 4 и 4
 
	n1.print();
	n2.print();
 
	return 0;
}
