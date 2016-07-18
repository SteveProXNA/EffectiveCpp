#include <string>

template<typename T>
class NamedObject2
{
public:
	// ctor no longer takes const name because nameValue is reference-to-non-const string
	// The char* constructor is gone because we must have a sterign to refere to.
	NamedObject2(std::string& name, const T& value);

private:
	std::string& nameValue;
	const T objectValue;
};


template<typename T>
NamedObject2<T>::NamedObject2(std::string& name, const T& value) :
	nameValue(name),
	objectValue(value)
{
}