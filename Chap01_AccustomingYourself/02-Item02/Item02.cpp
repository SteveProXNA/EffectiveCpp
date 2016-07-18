#include <iostream>


// uppercase names are usually for macros
#define ASPECT_RATIO 1.653
const double AspectRatio = 1.653;

// We don't know what T is so pass by reference-to-const	Item20
template<typename T>
inline void callWithMax(const T& a, const T& b)
{
}

int main()
{
	const char* const authorName1 = "StevePro Studios";
	const std::string authorName2("StevePro Studios");

	return 0;
}