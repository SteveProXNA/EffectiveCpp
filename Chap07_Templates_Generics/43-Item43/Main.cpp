#pragma once

#include "Company2.h"

int main()
{
	MsgInfo info;
	LoggingMsgSender<CompanyZ> log;

	//error C2039: 'sendClearMsg' : is not a member of 'LoggingMsgSender<Company>'
	//log.sendClearMsg(info);

	return 0;
}