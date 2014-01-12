#include <hash_map>
#include <iomanip>
#include <iostream>
using namespace std;


static hash_map<char,int> stiatics;

void init_hash(){
	for (unsigned int i = 0; i < 256; i++)
	{
		stiatics[char(i)]=0;
	}
	cout<<stiatics.bucket_count()<<endl;
}
void put_char(char op){
	stiatics.at(op)++;
}
int get_char(char op){
	return stiatics.at(op);
}
void print_hash(){
	for (unsigned int i = 0; i < 256; i++)
	{
		cout<<char(i)<<get_char(char(i))<<setw(4);
		if (i==16)
		{
			cout<<endl;
		}
	}
}
void find_op(int times){
	for (unsigned int i = 0; i < 256; i++)
	{
		if (get_char(char(i)) == times)
		{
			cout<<char(i)<<endl;
		}
	}
}



