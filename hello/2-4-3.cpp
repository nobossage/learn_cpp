/*
 * first.cpp
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
using namespace std;

unsigned mystrlen(const char *str)
{
    unsigned p = 0;
    while (str[p] != '\0')
       p++;
    return p;
}


int mystrstr(const char *text, const char *pattern)
{
    int lentxt = mystrlen(text);
    int lenpattern = mystrlen(pattern);

    if (lenpattern == 0) 
        return 0;
    if (lenpattern > lentxt)
        return (-1);
    
    for (int i = 0; i < lentxt; i++)
    {
        if (text[i] == pattern[0]) 
        {
            int j = 0;
            while (j < lenpattern)
            {
                if (text[i + j] != pattern[j])
                {
                    break;
                } 
                if (j == (lenpattern - 1))
                    return i;
                j++;
            }
        }
    }
    return (-1);
}



int main()
{
    const char text[] = "babaloblu\0";
    const char pattern[] = "bal\0";
    cout << mystrstr(text, pattern) << endl;
    
    return 0;
}

