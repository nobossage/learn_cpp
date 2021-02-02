/*
 * test.cpp
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
#include "constants.h"
 
// Получаем начальную высоту от пользователя и возвращаем её
double getInitialHeight()
{
	std::cout << "Enter the initial height of the tower in meters: ";
	double initialHeight;
	std::cin >> initialHeight;
	return initialHeight;
}
 
// Возвращаем расстояние от земли после "..." секунд падения
double calculateHeight(double initialHeight, int seconds)
{
	// Используем формулу: [ s = u * t + (a * t^2) / 2 ], где u(начальная скорость) = 0
	double distanceFallen = (myConstants::gravity * seconds * seconds) / 2;
	double currentHeight = initialHeight - distanceFallen;
 
	return currentHeight;
}
 
int main()
{
	const double initialHeight = getInitialHeight();

    int seconds = 0;
    double height = 0.0;
    do
    {
        height = calculateHeight(initialHeight, seconds);
        if (height > 0.0)
        {
            std::cout << "At " << seconds << " seconds, the ball is at height:\t" << height <<
                " meters\n";
        }
        else
                std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
        seconds++;
    }
    while(height > 0.0);
	return 0;
}
