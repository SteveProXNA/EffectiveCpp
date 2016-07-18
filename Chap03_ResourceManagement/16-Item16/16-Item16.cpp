#include <iostream>

/*
// Following behavior is undefined:
// 99 string objects unlikely to be properly destroyed!
std::string* stringArray = new std::string[100];
delete stringArray;
*/

class AddressLines;

int main()
{
	std::string* stringPtr1 = new std::string;
	std::string* stringPtr2 = new std::string[100];

	delete stringPtr1;			// delete an object.
	delete[] stringPtr2;		// delete an array of objects.

	// Person address has 4x lines
	// Each of which is a string.
	typedef std::string AddressLines[4];

	// Note that "new AddressLines" returns a string*
	// just like "new string[4]" would
	std::string* pal = new AddressLines;

	//delete pal;				// undefined!
	delete[] pal;				// fine
	return 0;
}