#include <stdio.h>
#include <iostream>
#include <string.h>
#include "person.h"

using namespace std;

void ModifyPerson(Person *x);

int main(int argv, char* argc[])
{
	Person person1;

	person1.SetName("marc");
	person1.SetAge(24);
	person1.SetHeight(175);
	person1.SetWeight(205);

	ModifyPerson(&person1);

	Person person2("yvan", 42, 571, 502);
	

	/*char *str = "hello";
	char st_r[6]{ "hello" };
	char _str[6] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	char __str[5] = { 'h', 'e', 'l', 'l', 'o'};
	string mystring("hello");
	printf
	(
		"*str: %s,st_r:%s, _str: %s, __str: %s, str_ : %s"
		, str, st_r, _str, __str,mystring
	);
	cin>> *str;*/
}

//Pass object to function
void ModifyPerson(Person *x)
{
	x->SetName("clarice");	
}