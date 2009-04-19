

#ifndef _DATABASE_H_
#define _DATABASE_H_

#include <mysql++.h>
#include <stdarg.h>

class Database 
{
private:
	
	mysqlpp::Connection connection;

public:

	Database(char* username, char* password, char* database, char* addr);

	bool IsConnected();

	mysqlpp::Query				Query(char* query, ...);
	mysqlpp::StoreQueryResult	res;

};

extern Database db;

#endif // #ifndef _DATABASE_H_