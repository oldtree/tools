#include "stdafx.h"
#include "log_store.h"


log_store::log_store(void)
{
}

bool log_store::put(string log_message){
	return true;
}
string log_store::get(){
	return string("not implament");
}
string log_store::find(string file_name,string fun_name){
				return string("not implament");
}
string log_store::restore(string new_path){
	return 	string("not implament");
}
bool log_store::copy(string line_begin,string line_end){
	return false;
}

log_store::~log_store(void)
{
}
