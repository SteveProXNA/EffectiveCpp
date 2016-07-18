#pragma once

#include <memory>
#include <vector>
#include "Window4.h"

int main()
{
	typedef std::vector<std::tr1::shared_ptr<Window> > VPW;
	VPW winPtrs;

	for (VPW::iterator iter = winPtrs.begin(); iter != winPtrs.end(); ++iter)
	{
		(*iter)->blink();
	}

	return 0;
}