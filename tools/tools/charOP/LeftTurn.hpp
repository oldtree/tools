#include <iostream>
#include <stdlib.h>
#include <string>
#include<iomanip>
using namespace std;


char * leftTurn(const char* src,unsigned int size,int N){
	if (N>=size)
	{
		std::cerr<<"char str size is wrong!"<<endl;
		return NULL;
	}
	if (N>=size)
	{
		std::cerr<<"char str size is wrong!"<<endl;
		return NULL;
	}
	char local_src[256]={'\n'};
	char A ='\n';
	cout<<(int)A<<endl;
	memcpy(local_src,src,size+1);
#if 0	
	cout<<sizeof local_src<<endl;

for (int i = 0; i < 256; i++)
	{
		cout<<(char)local_src[i]<<setw(4);
	}
    cout<<local_src<<endl;
#endif
	cout<<local_src<<endl;

	if (!size%N)
	{
		char temp='\n';
		for (int i = 0; i < size-N; i+=N)
		{ 
			for (int j = i; j < i+N; j++)
			{
				temp = local_src[j];
				local_src[j] = local_src[j+N];
				local_src[j+N] = temp;
			}
		}
		cout<<local_src<<endl;
	} 
	else
	{
		int pand =(size%N);
		char temp='\n';
		for (int i = 0; i < size-N; i+=N)
		{ 
			for (int j = i; j < i+N; j++)
			{
				if (j+N == size)
				{
					break;
				}
				temp = local_src[j];
				local_src[j] = local_src[j+N];
				local_src[j+N] = temp;
			}
		}
		for (int end = size-pand; end < size; end++)
		{
			for (int i = N-pand; i > 0; i--)
			{
				temp = local_src[end];
				local_src[end] = local_src[end-i];
				local_src[end-i] = temp;
			}
		}
		cout<<local_src<<endl;
	}
	
}