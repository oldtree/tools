#pragma once
#include <string>
#include "log_store.h"
using namespace std;
class log_manager
{
public:
	log_manager(void);
	log_manager(string path);
	void show(string msg);
	log_store* log_ptr;
	void put_msg();
	~log_manager(void);
};

