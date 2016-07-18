#include <iostream>
using namespace std;

int main()
{
	int* p = 0;
	//cout << *p;		// access violation!!

	char name[] = "stevepro";
	char c = name[10];
	cout << c;			// garbage (no crash)

	return 0;
}