#pragma once

#include <new>

template<typename T>
class NewHandlerSupport
{
public:
	static std::new_handler set_new_handler(std::new_handler p) throw();
	static void* operator new(std::size_t size) throw(std::bad_alloc);

private:
	static std::new_handler currentHandler;
};


template<typename T>
std::new_handler NewHandlerSupport<T>::currentHandler = 0;


template<typename T>
std::new_handler NewHandlerSupport<T>::set_new_handler(std::new_handler p) throw()
{
	std::new_handler oldHandler = currentHandler;
	currentHandler = p;

	return oldHandler;
}


template<typename T>
void* NewHandlerSupport<T>::operator new(std::size_t size) throw(std::bad_alloc)
{
	//class Widget : public NewHandlerSupport<Widget> {};
	//std::new_handler handler = std::set_new_handler(currentHandler);
	//NewHandlerSupport h;
	//h.set_new_handler(handler);

	NewHandlerHolder h(std::set_new_handler(currentHandler));
	return ::operator new(size);
}