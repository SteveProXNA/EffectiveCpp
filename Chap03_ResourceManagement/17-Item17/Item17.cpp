#pragma once

#include <memory>
#include "Widget.h"

int priority()
{
	return 1;
}

void processWidget(std::tr1::shared_ptr<Widget> pw, int priority)
{
}

int main()
{
	// 01. attempt.
	// processWidget cannot convert parameter 1 from Widget* to std::tr1::shared_ptr<Widget>
	//processWidget(new Widget, priority());

	// 02. attempt.
	//processWidget(std::tr1::shared_ptr<Widget>(new Widget), priority());

	// 03. attempt.
	std::tr1::shared_ptr<Widget> pw(new Widget);
	processWidget(pw, priority());

	return 0;
}