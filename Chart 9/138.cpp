#include <iostream>
#include <string>
#include <vector>
 
struct StudentGrade
{
	std::string name;
	char grade;
};
 
class GradeMap
{
private:
	std::vector<StudentGrade> m_map;
 
public:
	GradeMap()
	{
	}
 
	char& operator[](const std::string &name);
};
 
char& GradeMap::operator[](const std::string &name)
{
	// Смотрим, найдем ли мы имя ученика в векторе
	for (auto &ref : m_map)
	{
		// Если нашли, то возвращаем ссылку на его оценку
		if (ref.name == name)
			return ref.grade;
	}
 
	// В противном случае, создаем новый StudentGrade для нового ученика
	StudentGrade temp { name, ' ' };
 
	// Помещаем его в конец вектора
	m_map.push_back(temp);
 
	// И возвращаем ссылку на его оценку
	return m_map.back().grade;
}
 
int main()
{
	GradeMap grades;
	grades["John"] = 'A';
	grades["Martin"] = 'B';
	std::cout << "John has a grade of " << grades["John"] << '\n';
	std::cout << "Martin has a grade of " << grades["Martin"] << '\n';
 
	return 0;
}
