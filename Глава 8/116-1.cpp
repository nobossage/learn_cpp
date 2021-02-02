/*
 * 116-1.cpp
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

class Ball
{
    std::string     m_color = "red";
    double          m_radius = 20.0;
    
public:
    //Ball (std::string color)                    {m_color = color;}
    Ball (double radius)                        {m_radius = radius;}
    Ball (const std::string &color = "red", double radius = 20.0)     {m_color = color; m_radius = radius;}
    //Ball ()                                     {m_color = "red"; m_radius = 20.0;}
    
    void print()
    {
        std::cout << "Ball color:" << m_color << ", radius:" << m_radius << ".\n";
    }
};

int main(int argc, char **argv)
{
    Ball def;
    def.print();
 
	Ball black("black");
	black.print();
	
	Ball thirty(30.0);
	thirty.print();
	
	Ball blackThirty("black", 30.0);
	blackThirty.print();
 
	return 0;
}

