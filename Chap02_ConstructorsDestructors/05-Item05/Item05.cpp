#include <string>
#include "NamedObject2.h"

int main()
{
	std::string name1 = "stevepro";
	std::string name2 = "studios";
	NamedObject2<int> no1(name1, 2);
	NamedObject2<int> no2(name2, 2);

	//error C2582: 'operator =' function is unavailable in 'NamedObject2<T>'
	//no1 = no2;

	//ERROR no operator "=" matches these operands
	//operand types are: NamedObject2<int> = NamedObject2<int>
	return 0;
}