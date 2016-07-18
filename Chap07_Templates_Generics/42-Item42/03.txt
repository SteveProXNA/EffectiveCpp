#pragma once

template<typename T>
class Base
{
};

template<typename T>
class Derived : Base<T>::Nested
{
public:
	explicit Derived(int x) : Base<T>::Nested(x)
	{
		typename Base<T>::Nested temp;
	}
};