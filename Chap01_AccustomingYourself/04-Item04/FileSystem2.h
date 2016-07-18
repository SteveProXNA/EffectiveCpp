#ifndef _FILESYSTEM2_
#define _FILESYSTEM2_

#include <string>

class FileSystem2
{
public:
	std::size_t numDisks() const
	{
		return 5;
	}
};

#endif//_FILESYSTEM2_


// This replaces the tfs object
FileSystem2& tfs()
{
	static FileSystem2 fs;
	return fs;
}