#ifndef _FILESYSTEM_
#define _FILESYSTEM_

#include <string>

class FileSystem
{
public:
	std::size_t numDisks() const
	{
		return 5;
	}
};

#endif//_FILESYSTEM_
extern FileSystem tfs;