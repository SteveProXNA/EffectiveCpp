#pragma once

#include <string>

template<typename T>
class SquareMatrixBase
{
protected:
	void invert(std::size_t matrixSize)
	{
	}
};


template<typename T, std::size_t n>
class SquareMatrix : private SquareMatrixBase<T>
{
private:
	using SquareMatrixBase<T>::invert;

public:
	void invert()
	{
		this->invert(n);
	}
};