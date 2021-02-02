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
#include <ctime> // для time()
#include <cstdlib> // для rand() и srand()

 
class Monster
{
  public:
    enum MonsterType
    {
        Dragon,
        Goblin,
        Ogre,
        Orc,
        Skeleton,
        Troll,
        Vampire,
        Zombie,
        MAX_MONSTER_TYPES
    };
  private:
    
    MonsterType     m_monstr;
    std::string     m_name;
    int             m_hp;

  public:
    Monster(MonsterType type, std::string name, int hp)
        :m_monstr(type), m_name(name), m_hp(hp)
    {}

    std::string getTypeString(MonsterType enumType)
    {
        switch (enumType)
        {
            case Dragon:    return "Dragon";
            case Goblin:    return "Goblin";
            case Ogre:      return "Ogre";
            case Orc:       return "Orc";
            case Skeleton:  return "Skeleton";
            case Troll:     return "Troll";
            case Vampire:   return "Vampire";
            case Zombie:    return "Zombie";
            case MAX_MONSTER_TYPES: 
                return "Human";
            
        }
        return "Error!";
    }
    
    void print()
    {
        std::cout << m_name << " is the " << getTypeString(m_monstr) << " that has " << m_hp << " health points." << std::endl;
    }
};

class MonsterGenerator
{
    
    public:
    

    // Генерируем случайное число между min и max (включительно).
	// Предполагается, что srand() уже был вызван 
	static int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); // используем static, так как это значение нужно вычислить единожды
		// Равномерно распределяем вычисление значения из нашего диапазона
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}
    
    static Monster generateMonster()
    {
        static std::string s_names[6] {"Jhon", "Ivan", "Alex", "Sam", "Lary", "Duk"};
        Monster::MonsterType type = static_cast <Monster::MonsterType>(getRandomNumber(0,Monster::MAX_MONSTER_TYPES-1));
        std::string name = s_names[getRandomNumber(0,5)];
        int hp = getRandomNumber(0, 100);
        return Monster(type, name, hp);
    }
    
};


int main()
{
	srand(static_cast<unsigned int>(time(0))); // используем системные часы в качестве стартового значения
	rand(); // пользователям Visual Studio: делаем сброс первого случайного числа
 
	Monster m = MonsterGenerator::generateMonster();
	m.print();
 
    return 0;
}
