/*
 * 117-1.cpp
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
#include <cstdint>

class RGBA
{

private:
    std::uint8_t m_red;
    std::uint8_t m_green;
    std::uint8_t m_blue;
    std::uint8_t m_alpha;
    
public:
    
    RGBA ( std::uint8_t value1 = 0, std::uint8_t value2 = 0, std::uint8_t value3 = 0, std::uint8_t value4 = 255 )
    : m_red(value1)
    , m_green(value2)
    , m_blue(value3)
    , m_alpha(value4)
    {}
    
    void print()
    {
        std::cout << "r=" << static_cast<int>(m_red) << " g=" << static_cast<int>(m_green) << " b=" << static_cast<int>(m_blue) << " a= " << static_cast<int>(m_alpha) << std::endl;
    }
     
};
int main(int argc, char **argv)
{
	RGBA color(0, 135, 135);
	color.print();
 
	return 0;
}

