/*
 * 131.cpp
 * 
 * Copyright 2021 Viktor <gwl@linux-rbdr.site>
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

class Fraction
{
private:
    int m_numerator;
    int m_denominator;
    
    int nod(int a, int b)
    {
        return (b == 0) ? (a > 0 ? a : -a) : nod(b, a % b);
    }
    
public:
    Fraction(int a = 0, int b = 1) : m_numerator(a), m_denominator(b)
    {}
    
    void print()
    {
        reduce();
        std::cout << m_numerator << '/' << m_denominator << "\n";
    }
    
    friend Fraction operator* (Fraction drob, int x);
    friend Fraction operator* (int x, Fraction drob);
    friend Fraction operator* (Fraction drob1, Fraction drob2);
    
    void reduce()
    {
        int NOD = nod(m_numerator, m_denominator);
        m_numerator = m_numerator/NOD;
        m_denominator = m_denominator/NOD;
        
    }//*/
};

Fraction operator* (Fraction drob, int x)
{
    return Fraction(x * drob.m_numerator, drob.m_denominator);

}
Fraction operator* (int x, Fraction drob)
{
    return Fraction(x * drob.m_numerator, drob.m_denominator);

}

Fraction operator* (Fraction drob1, Fraction drob2)
{
    return Fraction(drob1.m_numerator * drob2.m_numerator, drob1.m_denominator * drob2.m_denominator);
}
int main(int argc, char **argv)
{
    Fraction f1(3, 4);
    f1.print();
 
    Fraction f2(2, 7);
    f2.print();
 
    Fraction f3 = f1 * f2;
    f3.print();
 
    Fraction f4 = f1 * 3;
    f4.print();
 
    Fraction f5 = 3 * f2;
    f5.print();
 
    Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
    f6.print();

    return 0;
}

