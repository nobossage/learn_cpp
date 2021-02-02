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
    int m_a;
    int m_b;
    int m_c;

public:
    
    void setValues (int x, int y, int z)
    {
        m_a = x;
        m_b = y;
        m_c = z;
    }
    
    void print()
    {
        std::cout << "<" << m_a << ", " << m_b << ", " << m_c << "> " << std::endl;
    }
    
    bool isEqual( const Numbers &other )
    {
        return other.m_a == m_a && other.m_b == m_b && other.m_c == m_c;
    }
};
 

int main()
{
    Numbers point1;
    point1.setValues(3.0, 4.0, 5.0);
 
    Numbers point2;
    point2.setValues(3.0, 4.0, 5.0);
 
    if (point1.isEqual(point2))
        std::cout << "point1 and point2 are equal\n";
    else
        std::cout << "point1 and point2 are not equal\n";
 
    Numbers point3;
    point3.setValues(7.0, 8.0, 9.0);
 
    if (point1.isEqual(point3))
        std::cout << "point1 and point3 are equal\n";
    else
        std::cout << "point1 and point3 are not equal\n";
 
}
