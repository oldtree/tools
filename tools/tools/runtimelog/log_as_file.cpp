#include "stdafx.h"
#include "log_as_file.h"
#include <iostream>
size_t log_as_file::buffer_size = 4096;

log_as_file::log_as_file(void)
{
	file_path="../here.txt";
	log_file.open(file_path.c_str(),ofstream::in |ofstream::out | ofstream::app);

}
log_as_file::log_as_file(string log_store_path)
{
	file_path=log_store_path;
	log_file.open(file_path.c_str(),ofstream::in |ofstream::out | ofstream::app);

}
void log_as_file::set_log_path(string new_log_path){
	cout<<"log store file will be change to "+new_log_path<<endl;
	this->file_path = new_log_path;
}
string log_as_file::get_log_path(){
	if (this->file_path.empty())
	{
		cout<<"have no file path init"<<endl;
	}
		return file_path;
}
bool log_as_file::put(string log_message){
	if (log_file)
	{
		log_file<<log_message<<endl;
		log_file.close();
		log_file.clear();
		return true;
	}
	else{
		cerr<<"error open output file!"<<endl;
		return false;
	}
	return false;
}

string log_as_file::get(){
	log_file_done.open(file_path.c_str(),ifstream::in |ifstream::out );
	char c_[256]={'\n'};
	if (log_file_done)
	{

		char ss;

		while (log_file_done.getline(c_,1023))
		{
			cout<<c_<<endl;
			content.append(c_);
		}
        cout<<c_<<endl;
		log_file_done.close();
		log_file_done.clear();;
		cout<<"  content length  "<<content.length()<<endl;
		return content;
	}
	else{
		cerr<<file_path+"error open output file!"<<endl;
		return "get function fail!";
	}
	return "get function fail!";
}


string log_as_file::find(string file_name,string fun_name){
	   return string("not implament");
}
string log_as_file::restore(string new_path){
	   return string("not implament");
}
bool log_as_file::copy(string line_begin,string line_end){
	   return false;
}
void log_as_file::write_handle(){

}

void log_as_file::read_handle(){

}

log_as_file::~log_as_file(void)
{
}
