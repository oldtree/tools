#include <iostream>
#include <iomanip>

using namespace std;

static int R = 0;

bool clock_circle = true;

auto  current_circle =0;



template<typename T,int N>
void clock_cirle(){
	T ptr[N][N]={0};
	int colors[N][N]={0};
	R = N;
	clock_circle = true;
	int num =1;

	int x_head = 0;
	int y_head = 0;
	int x_end = 0;
	int y_end = 0;
	int  x_plus = 0;
	int  y_plus = 0;
	int x_current = 0;
	int y_current = 0;
	for (int i = 0; i < N; i++)
	{    
		for (int j = 0; j < N; j++)
		{
			ptr[j][i] = num; 
			num++;
		}
	}
	for (int r = 0; r < N/2+N%2; r++)
	{
		x_head = r;
		y_head = r;
		x_end = r+1;
		y_end = r;
		x_current = x_head;
		y_current = y_head;
		x_plus = 1;
		y_plus = 0;

		for (int i = 0; i < 4*R-4; i++)
		{
			if ((x_plus == 1)&&(y_plus == 0))
			{
				if (x_current-x_head < R)
				{
					cout<<ptr[x_current][y_current]<<setw(4);
					x_current++;
				} 
				else
				{
					x_current--;
					i--;
					x_plus = 0;
					y_plus = 1;
				}
				
			} 
			else if ((x_plus == 0)&&(y_plus == 1))
			{
				y_current++;
				if (y_current-y_head < R)
				{
					
					cout<<ptr[x_current][y_current]<<setw(4);
					
				} 
				else
				{
					y_current--;
					i--;
					x_plus = -1;
					y_plus = 0;
				}

			} 
			else if ((x_plus == -1)&&(y_plus == 0))
			{
				x_current--;
				if (x_current >= x_head)
				{
					
					cout<<ptr[x_current][y_current]<<setw(4);
					
				} 
				else
				{
					x_current++;
					i--;
					x_plus = 0;
					y_plus = -1;
				}

			}
			else if ((x_plus == 0)&&(y_plus == -1))
			{
				y_current--;
				if (y_current >= y_head)
				{
					
					cout<<ptr[x_current][y_current]<<setw(4);
					
				} 
				else
				{
					y_current++;
					i--;
					x_plus = 1;
					y_plus = 0;
				}

			}
		}
		R-=2;
		cout<<endl;
		if (4*R-4 == 0)
		{
			++x_current;
			cout<<ptr[x_current][y_current]<<setw(4);
		}
		
	}

}
