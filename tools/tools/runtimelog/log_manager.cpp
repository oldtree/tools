#include "stdafx.h"
#include "log_manager.h"
#include "log_as_file.h"
#include <iostream>

using namespace std;
log_manager::log_manager(void)
{
	log_ptr=NULL;
	log_ptr = new log_as_file();
}
log_manager::log_manager(string path)
{
	log_ptr=NULL;
	log_ptr = new log_as_file(path);
}
void log_manager::show(string meg){
	log_ptr->put(meg);
	log_ptr->get();
}

log_manager::~log_manager(void)
{
}
