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

struct Student
{
    std::string name;
    int         total;
};

void sortGroup(Student *arr, int length)
{
    bool ready = false;
    do
    {
        ready = true;
        for ( int index = 0; index < length - 1; ++index)
        {
            if(arr[index].total < arr[index + 1].total)
            {
                Student temp = arr[index];
                arr[index] = arr[index + 1];
                arr[index + 1] = temp;
                ready = false;
            }
        }
    }
    while(!ready);

}

int main()
{
    std::cout << "Сколько студиков в группе? :";
    int colvo;
    std::cin >> colvo;
    Student *group = new Student[colvo];
    for (int i = 0; i < colvo; ++i)
    {
        std::cout << "ФИО :";
        std::string u_name = "";
        std::cin.ignore(32767, '\n'); 
        std::getline(std::cin, u_name);
        std::cout << "Оценка :";
        int total = 0;
        std::cin >> total;
        group[i].name = u_name;
        group[i].total = total;
        
    } 
    
/*    
    do
    {
        ready = true;
        for ( int index = 0; index < colvo - 1; ++index)
        {
            if(group[index].total < group[index + 1].total)
            {
                Student temp = group[index];
                group[index] = group[index + 1];
                group[index + 1] = temp;
                ready = false;
            }
        }
    }
    while(!ready);
//*/
    sortGroup(group, colvo);
    for (int i = 0; i < colvo; ++i)
    {
        std::cout << group[i].name << "\t\t" << group[i].total << std::endl;
    }
    
    delete[] group;
    return 0;
}
