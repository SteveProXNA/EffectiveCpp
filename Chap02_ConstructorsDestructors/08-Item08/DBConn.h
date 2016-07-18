#include <memory>
#include "DBConnection.h"

// Resource managing class for DBConnection
// Call close() on behalf of clients in dtor.
class DBConn
{
public:
	DBConn(DBConnection database) :
		db(database)
	{
	}

	~DBConn()
	{
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

private:
	DBConnection db;
};