#pragma once

template<typename T>
class SmartPtr
{
public:
	// member template for "generalized copy constructor"
	template<typename U>
	SmartPtr(const SmartPtr<U>& other) : heldPtr(other.get())
	{
	}

	T* get() const { return heldPtr; }

private:
	T* heldPtr;
};