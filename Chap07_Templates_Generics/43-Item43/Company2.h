#pragma once

#include <string>

class CompanyZ
{
public:
	void sendEncrypted(const std::string& msg) {}
};


class MsgInfo {};


// http://stackoverflow.com/questions/5510922/template-class-specialization
template<typename T>
class MsgSender
{
};


template<>
class MsgSender<CompanyZ>
{
public:
	void sendSecret(const MsgInfo& info)
	{
	}
};


template<typename Company>
class LoggingMsgSender : public MsgSender<Company>
{
public:

	void sendClearMsg(const MsgInfo& info)
	{
		this->sendClear(info);
	}
};