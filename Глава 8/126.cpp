/*
 * 126.cpp
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
class Vector3D;

class Point3D
{
private:
	double m_x, m_y, m_z;
 
public:
	Point3D(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{
 
	}
 
	void print()
	{
		std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
	}
	void moveByVector(const Vector3D &v);
};


class Vector3D
{
private:
	double m_x, m_y, m_z;
 
public:
	Vector3D(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{
 
	}
 
	void print()
	{
		std::cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")\n";
	}
    
    friend void Point3D::moveByVector(const Vector3D &v);
};
 
	void Point3D::moveByVector(const Vector3D &v)
	{
        m_x += v.m_x;
        m_y += v.m_y;
        m_z += v.m_z;
		// Реализуйте эту функцию как дружественную классу Vector3D
	} 
 
int main()
{
	Point3D p(3.0, 4.0, 5.0);
	Vector3D v(3.0, 3.0, -2.0);
 
	p.print();
	p.moveByVector(v);
	p.print();
 
	return 0;
}
