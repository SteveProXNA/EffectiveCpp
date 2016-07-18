#pragma once

#include <memory>
#include "Investment.h"

Investment* createInvestment()
{
	Investment* i = new Investment;
	return i;
}

void f1()
{
	Investment* pInv = createInvestment();
	delete pInv;
}

void f2()
{
	std::auto_ptr<Investment> pInv(createInvestment());
}

void f3()
{
	std::auto_ptr<Investment> pInv1(createInvestment());
	std::auto_ptr<Investment> pInv2(pInv1);
	pInv1 = pInv2;
}

void f()
{
	std::tr1::shared_ptr<Investment> pInv1(createInvestment());
	std::tr1::shared_ptr<Investment> pInv2(pInv1);
	pInv1 = pInv2;
}

int main()
{
	f();
	return 0;
}