#include <iostream>
#include <stdlib.h>
#include <string>
#include<iomanip>
using namespace std;

int str2int(const char* src){
	if (src==NULL)
	{
		return 0;
	}
	bool minus = false;
	const char *dst=src;

	if (*dst == '-')
	{
		minus=true;
		dst++;
	} 
	else
	{
		minus=false;
		dst++;
	}

	int num =0 ;
	while (*dst!='\n')
	{
		num= num*10+(*dst-'0');
		dst++;
	}
	if (minus)
	{
		return -num;
	} 
	else
	{
		return +num;
	}

}