#pragma once
#include <iostream>
#include <stdlib.h>
#include <memory>
#include <string>

using namespace std;
enum LOG_LEVEL
{
	LOG_LEVEL_DEBUG = 0,
	LOG_LEVEL_INFO,
	LOG_LEVEL_WARN,
	LOG_LEVEL_ERROR,
	LOG_LEVEL_ALARM,
	LOG_LEVEL_FATAL,
};		

#define STRING(x) #x
#define _STRING(x) STRING(x) 
#define  MSG(level) \
	STRING(level)##"  "_STRING(__FILE__)##"  "_STRING(__LINE__)\
	##"  "_STRING(__TIME__)##"  "_STRING(__DATE__)


#if 0
//#define info(level) turn_log_info(level)


string turn_log_info(int level) 
    {               
		switch (level)
		{              
		case LOG_LEVEL_DEBUG:
			return "LOG_LEVEL_DEBUG";
		case LOG_LEVEL_INFO:
			return "LOG_LEVEL_INFO";
		case LOG_LEVEL_WARN:
			return "LOG_LEVEL_WARN";
		case LOG_LEVEL_ERROR:
			return "LOG_LEVEL_ERROR";
		case LOG_LEVEL_ALARM:
			return "LOG_LEVEL_ALARM";
		case LOG_LEVEL_FATAL:
			return "LOG_LEVEL_FATAL";
		default:
			break;
		}      
		return "LOG LEVEL SET SHOULD BE " ;
	}
#endif
class log_message
{
public:
	log_message(void);
	~log_message(void);
	

};

