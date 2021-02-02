/*
 * 113-3.cpp
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
#include <cassert> // для assert()


class Stack
{
    int m_stack[10] = {};
    int m_index = 0;
    
public:
    void reset()
    {
        m_stack[10] = {};
        m_index = 0;
    }
    
    // добавляем элемент в стек
    bool push(int value)
    {
        if (m_index == 10) return false;
        m_stack[ m_index ++ ] = value;
        return true;
    }
    
    // читаем (извлекаем) элемент из стека
    int pop ()
    {
        assert(m_index > 0 && "Stack is empty!");
        return m_stack[m_index--];
    }
    
    //печать стека
    void print()
    {
        std::cout << "( ";
        for (int item = 0; item < m_index; item++)
            std::cout << m_stack[item]  << " ";
        std::cout << ")" <<  std::endl;
    }
};

int main(int argc, char **argv)
{
    
    Stack stack;
	stack.reset();
 
	stack.print();
 
	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
 
	stack.print();
    return 0;
}

