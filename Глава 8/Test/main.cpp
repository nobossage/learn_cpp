/*
 * main.cpp
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
#include <cmath>

class Point
{
    private:
        double m_a;
        double m_b;
        
    public:
    Point(double a = 0.0, double b = 0.0) : m_a(a), m_b(b) 
    {
    }
        
    void print()
    {
        std::cout << "Point(" << m_a << ", " << m_b << ")" << std::endl;
    }
    friend double distanceFrom(const Point &p1, const Point &p2);

};

double distanceFrom(const Point &p1, const Point &p2)
{
    return std::sqrt( (p1.m_a - p2.m_a) * (p1.m_a - p2.m_a) + (p1.m_b - p2.m_b) * (p1.m_b - p2.m_b));
}


int main(int argc, char **argv)
{
    Point first;
    Point second(2.0, 5.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
 
	return 0;
}

