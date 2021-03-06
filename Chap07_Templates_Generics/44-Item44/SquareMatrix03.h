#pragma once

#include <string>

template<typename T>
class SquareMatrixBase
{
protected:
	SquareMatrixBase(std::size_t n, T* pMem) : size(n), pData(pMem)
	{
	}

private:
	std::size_t size;
	T* pData;
};


template<typename T, std::size_t n>
class SquareMatrix : private SquareMatrixBase<T>
{
public:
	SquareMatrix() : SquareMatrixBase<T>(n, data)
	{
	}

private:
	T data[n * n];
};