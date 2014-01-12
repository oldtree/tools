#include <typeinfo>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;



template<typename T>
string get_type_info(T want_to_know){
	return typeid(want_to_know).name();
}
void test_(){
	int a=1;
	cout<<get_type_info(a)<<endl;
}