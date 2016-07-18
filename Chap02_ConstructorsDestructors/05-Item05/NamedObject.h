#include <string>

template<typename T>
class NamedObject
{
public:
	NamedObject(const char* name, const T& value);
	NamedObject(std::string& name, const T& value);

private:
	std::string nameValue;
	T objectValue;
};

template<typename T>
NamedObject<T>::NamedObject(const char* name, const T& value) :
	nameValue(name),
	objectValue(value)
{
}

template<typename T>
NamedObject<T>::NamedObject(std::string& name, const T& value) :
	nameValue(name),
	objectValue(value)
{
}