#pragma once

class Person
{
public:
	Person();
	Person(char *_name, int _age,int _height,int _weight);
	~Person();

	char const *GetName();
	int const GetAge();
	int const GetHeight();	
	int const GetWeigth();

	void SetName();
	void SetAge();
	void SetHeight();
	void SetWeight();

	void SetName(char *name);
	void SetAge(int age);
	void SetHeight(int height);
	void SetWeight(int weight);


private:
	char *_name;
	int _age;
	int _height;
	int _weight;
};
