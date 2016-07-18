#ifndef _DIRECTORY_
#define _DIRECTORY_

#include <string>
#include "FileSystem.h"

class Directory
{
public:
	Directory()
	{
		std::size_t disks = tfs.numDisks();
	}
};

#endif//_DIRECTORY_