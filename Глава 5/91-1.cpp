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

std::string getName()
{
    std::cout << "Введите имя : ";
    std::string name;
    std::getline(std::cin, name);
    return name;
}


int main()
{
    std::string names[8]
                {
                    "Sasha", 
                    "Ivan", 
                    "John", 
                    "Orlando", 
                    "Leonardo", 
                    "Nina", 
                    "Anton",
                    "Molly"
                };
    std::string userName = "0";
    userName = getName();

    for (const auto &current : names)
    {
        if (current == userName)
        {
            std::cout << "Имя "+current+" у нас в списке есть." << std::endl;
            return 0;
        }
    }
    std::cout << "А вот "+userName+" у нас в списке нет." << std::endl;
    return 0;
}
