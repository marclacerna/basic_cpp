#include "person.h"

using namespace marc;

Person::Person(char *_name, int _age, int _height, int _weight)
{
	this->_name = _name;
	this->_age = _age;
	this->_weight = _weight;
	this->_height = _height;
}

Person::Person()
	:_name("default"), _age(0), _weight(0), _height(0)
{}
Person::~Person() {}

char const *Person::GetName() 
{
	return _name;
}

int const Person::GetAge()
{ 
	return _age; 
}

int const Person::GetHeight() 
{
	return _height;
}

int const Person::GetWeigth() 
{
	return _weight;
}

void Person::SetName()
{
	this->_name = _name;
}
void Person::SetName(char *name)
{
	_name = name;
}

void Person::SetAge()
{
	this->_age = _age;
}
void Person::SetAge(int age)
{
	_age = age;
}

void Person::SetHeight()
{
	this->_height = _height;
}
void Person::SetHeight(int height)
{
	_height = height;
}

void Person::SetWeight()
{
	this->_weight = _weight;
}
void Person::SetWeight(int weight)
{
	_weight = weight;
}


