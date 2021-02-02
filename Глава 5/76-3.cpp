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
 
int main()
{
    int students[] = { 73, 85, 84, 44, 78};
    const int numStudents = sizeof(students) / sizeof(students[0]);
    int maxIndex = 0;
    int maxScore = 0; // отслеживаем самую высокую оценку
 
    for (int person = 0; person < numStudents; ++person)
        if (students[person] > maxScore)
        {
            maxScore = students[person];
            maxIndex = person;
        }
 
    std::cout << "The best score was " << maxScore << " at " << maxIndex << '\n';
 
    return 0;
}
