#include "AnSet.h"

int main()
{
	Set<int> mySet;
	std::size_t s = mySet.size();
	mySet.insert(1);
	mySet.insert(2);
	mySet.insert(3);
	s = mySet.size();
	bool b = mySet.member(4);
	mySet.remove(2);
	s = mySet.size();
	mySet.insert(4);
	s = mySet.size();
	b = mySet.member(4);
	return 0;
}