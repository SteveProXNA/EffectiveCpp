#include "DBConn2.h"

int main()
{
	// Clients create DB Connection.
	DBConn2 db(DBConnection::create());

	try
	{
		db.close();
	}
	catch (...)
	{
		// client now has chance to react!
	}

	// End of block, the DBConn object is destroyed
	// Automatically call close on DBConnection obj


	return 0;
}