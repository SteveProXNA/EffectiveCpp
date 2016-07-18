#ifndef _DIRECTORY2_
#define _DIRECTORY2_

#include <string>
#include "FileSystem2.h"

class Directory2
{
public:

	Directory2()
	{
		std::size_t disks = tfs().numDisks();
	}
};

#endif//_DIRECTORY2_


Directory2& tempDir()
{
	static Directory2 td;
	return td;
}