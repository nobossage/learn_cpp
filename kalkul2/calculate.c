/*
 * calculate.c
 * 
 * Copyright 2018 noble <noble@terra>
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
////////////////////////////////////

// calculate.c



#include <stdio.h>

#include <math.h>

#include <string.h>

#include "calculate.h"



float Calculate(float Numeral, char Operation[4])

{

float SecondNumeral;

if(strncmp(Operation, "+", 1) == 0)

{

printf("Второе слагаемое: ");

scanf("%f",&SecondNumeral);

return(Numeral + SecondNumeral);

}

else if(strncmp(Operation, "-", 1) == 0)

{

printf("Вычитаемое: ");

scanf("%f",&SecondNumeral);

return(Numeral - SecondNumeral);

}

else if(strncmp(Operation, "*", 1) == 0)

{

printf("Множитель: ");

scanf("%f",&SecondNumeral);

return(Numeral * SecondNumeral);

}

else if(strncmp(Operation, "/", 1) == 0)

{

printf("Делитель: ");

scanf("%f",&SecondNumeral);

if(SecondNumeral == 0)

{

printf("Ошибка: деление на ноль! ");

return(HUGE_VAL);

}

else

return(Numeral / SecondNumeral);

}

else if(strncmp(Operation, "pow", 3) == 0)

{

printf("Степень: ");

scanf("%f",&SecondNumeral);

return(pow(Numeral, SecondNumeral));

}

else if(strncmp(Operation, "sqrt", 4) == 0)

return(sqrt(Numeral));



else if(strncmp(Operation, "sin", 3) == 0)

return(sin(Numeral));

else if(strncmp(Operation, "cos", 3) == 0)

return(cos(Numeral));

else if(strncmp(Operation, "tan", 3) == 0)

return(tan(Numeral));

else

{

printf("Неправильно введено действие ");

return(HUGE_VAL);

}

}

