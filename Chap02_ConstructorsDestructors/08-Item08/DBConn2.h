#include <memory>
#include "DBConnection.h"

class DBConn2
{
public:
	DBConn2(DBConnection database) :
		db(database),
		closed(false)
	{
	}

	~DBConn2()
	{
		if (!closed)
		{
			// Try to close connection if client didn't
			try
			{
				db.close();
			}
			catch (...)
			{
				// make log entry.
				std::abort();
			}
		}

	}

	// New function for client to use.
	void close()
	{
		db.close();
		closed = true;
	}

private:
	DBConnection db;
	bool closed;
};