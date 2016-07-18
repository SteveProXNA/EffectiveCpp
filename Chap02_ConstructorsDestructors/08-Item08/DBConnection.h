#include <stdlib.h>

class DBConnection
{
public:
	// Function to return DBConnection objects.
	static DBConnection create()
	{
		static DBConnection db;
		return db;
	}

	// Close connection; throw an exception if closing fails.
	void close()
	{
		throw 5;
	}
};