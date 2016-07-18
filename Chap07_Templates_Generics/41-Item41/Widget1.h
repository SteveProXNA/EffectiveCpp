#include <string>

class Widget
{
public:
	Widget() : _size(11){}
	Widget(std::size_t theSize) : _size(theSize){}
	virtual ~Widget()	{}

	virtual std::size_t size() const
	{
		return _size;
	}
	virtual void normalize() {}
	void swap(Widget& other)
	{
		_size = other.size();
	}

private:
	std::size_t _size;
};