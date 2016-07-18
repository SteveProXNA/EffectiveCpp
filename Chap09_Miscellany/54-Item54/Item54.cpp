#include <iostream>

/*
namespace std
{
	namespace tr1 = ::boost;
}
*/

// param type is function taking int return string.
void registerCallback(std::string func(int));

// same as above; param name is omitted.
void registerCallback(std::string(int));

// the param "func" will take any callable entity
// with a sig consistent with "std::string(int)",
void registerCallback(std::tr1::is_function<std::string(int)> func);

int main()
{
	return 0;
}