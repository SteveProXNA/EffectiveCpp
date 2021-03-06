#pragma once

#include <boost/scoped_array.hpp>
#include <string>

template<typename T>
class SquareMatrixBase
{
protected:
	SquareMatrixBase(std::size_t n, T* pMem) : size(n), pData(pMem)
	{
	}

	void setDataPtr(T* t)
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
	SquareMatrix() : SquareMatrixBase<T>(n, 0), pData(new T[n * n])
	{
		this->setDataPtr(pData.get());
	}

private:
	boost::scoped_array<T> pData;
};