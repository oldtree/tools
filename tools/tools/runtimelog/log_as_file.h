#pragma once
#include "log_store.h"
#include <fstream>

using namespace std;
#define  BUFFER_SIZE 4096
class log_as_file :
	public log_store
{
public:
	log_as_file(void);
	log_as_file(string path);
	~log_as_file(void);
	bool put(string log_message);
	string get();
	string find(string file_name,string fun_name);
	string restore(string new_path);
	bool copy(string line_begin,string line_end);
	void set_log_path(string new_log_path);
	string get_log_path();
	void write_handle();
	void read_handle();
	static size_t buffer_size;
	std::string file_path;
private:
	string content;
	ofstream log_file;
	ifstream log_file_done;
};

