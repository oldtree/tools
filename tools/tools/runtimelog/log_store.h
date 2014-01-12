#pragma once

#include <string>
#include <stdlib.h>

using namespace  std;
class log_store
{
public:
	log_store(void);
	virtual bool put(string log_message);
	virtual string get();
	virtual string find(string file_name,string fun_name);
	virtual string restore(string new_path);
	virtual bool copy(string line_begin,string line_end);

	virtual ~log_store(void);

};

