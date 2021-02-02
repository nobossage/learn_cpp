/*
 * calcul.c
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
#include <stdio.h>



int main(void)

{

float num1;

float num2;

char op;

printf("Первое число: ");

scanf("%f",&num1);

printf("Второе число: ");

scanf("%f",&num2);

printf("Оператор ( + - * / ): ");

while ((op = getchar()) != EOF)

{

	if (op == '+')

	{

		printf("%6.2f\n",num1 + num2);

		break;

	}

	else if(op == '-')

	{

		printf("%6.2f\n",num1 - num2);

		break;

	}

	else if(op == '*')

	{

		printf("%6.2f\n",num1 * num2);

		break;

	}

	else if(op == '/')

	{

		if(num2 == 0)

			{

				printf("Ошибка: деление на ноль!\n");

				break;

			}

		else

			{

				printf("%6.2f\n",num1 / num2);

				break;

			}

	}

}

return 0;

}
