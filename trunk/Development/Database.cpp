

#include "Database.h"

Database::Database(char* username, char* password, char* database, char* addr) 
{
	connection = mysqlpp::Connection(false);
	connection.connect(database, addr, username, password);
}

bool Database::IsConnected() 
{
	return connection.connected();
}

mysqlpp::Query Database::Query(char* query, ...) 
{
	char sQuery[512];
	va_list args;
	va_start(args, query);
	vsprintf(sQuery, query, args);
	va_end(args);

	return connection.query(sQuery);
}