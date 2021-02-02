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
#include "inputUserOperation.h"
#include "calc.h"
#include "getArithmeticFcn.h"

//int selectCalc(int x, int y, char (*getArifhmeticFcn)(car))





int main(int argc, char **argv)
{
    char oper = '-';
    int x = inputInteger();
    int y = inputInteger();
    oper = inputUserOperation();
    arithmeticFcn fcn = getArithmeticFcn(oper);
    std::cout << x << " " << oper << " " << y << " = " << fcn(x,y);
	return 0;
}

