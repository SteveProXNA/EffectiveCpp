#pragma once

class NewHandlerHolder
{
public:
	explicit NewHandlerHolder(std::new_handler nh) : handler(nh)
	{
	}
	~NewHandlerHolder()
	{
		std::set_new_handler(handler);
	}

private:
	std::new_handler handler;

	// Prevent copying
	NewHandlerHolder(const NewHandlerHolder&);
	NewHandlerHolder& operator=(const NewHandlerHolder&);
};