// tools.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "charop/LeftTurn.hpp"
#include "charop/str2int.hpp"

#pragma comment( user, "Compiled on " __DATE__ " at " __TIME__ ) 
#pragma message( "Compiling " __FILE__ ) 
#pragma message( "Last modified on " __TIMESTAMP__ )

using namespace std;
 void test(){
	   cout<<__COUNTER__<<endl;
 }
 void teswt(){
	 cout<<__COUNTER__<<endl;
 }


#include "runtimelog/log_message.h"
#include "runtimelog/log_manager.h"
#include "runtimelog/Type_info.hpp"
#include "charOP/clock_circle_print.hpp"
int _tmain(int argc, _TCHAR* argv[])
{

	cout<<__DATE__<<endl;
	cout<<__FILE__<<endl;
	cout<<__LINE__<<endl;
	cout<<__TIME__<<endl;
	cout<<__TIMESTAMP__<<endl;
#ifdef WIN32
	cout<<__COUNTER__<<endl;
	cout<<__FUNCTION__<<endl;
	cout<<__FUNCDNAME__<<endl;
	cout<<__FUNCSIG__<<endl;

	string s(MSG(5));
	log_manager l;
	l.show(MSG(5));
	//cout<<MSG(5)<<endl;
	char* te ="abcdefghijklmnopqrstuvwxyz";
	cout<<strlen(te);
	leftTurn(te,26,13);
	char* tes ="-123456\n";
	cout<<str2int(tes);
	cout<<endl;
	clock_cirle<int,10>();
#endif
	system("pause");
	return 0;
}

