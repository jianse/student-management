#pragma once
#include "Bean.h"
#include <string>

class UserBean :
	public Bean
{
public:
	UserBean();

	~UserBean();
	friend istream &operator >> (istream &is,UserBean &data);
	friend ostream &operator << (ostream & ou,UserBean &data);
	bool operator==(UserBean &u2);
	UserBean &operator=(UserBean &u2);
private:
	string username;
	string password;
	int rank;
};

