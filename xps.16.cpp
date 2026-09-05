#include <iostream>
using namespace std;

//learning about how to use 'for loop' to draw
int main()
{
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			cout << i << j << " ";
		}
		cout << endl;
	}
	cout << endl;

	// draw letter N
	for (int in = 1; in <= 7; in++)
	{
		for (int jn = 1; jn <= 7; jn++)
		{
			if (jn == 1 || jn == 7 || jn == in )
			{
				cout << in << jn << " ";
			}
			else
			{
				cout << "  " << " ";
			}
		}
		cout << endl;
	}
	cout << endl;

	//draw square
	for (int in = 1; in <= 7; in++)
	{
		for (int jn = 1; jn <= 7; jn++)
		{
			if (jn == 1 || jn == 7 || in == 1 || in == 7)
			{
				cout << "*" << " ";
			}
			else
			{
				cout << " " << " ";
			}
		}
		cout << endl;
	}
	cout << endl;

	//write my friend name (HAi) as a practice
	for (int hoang = 1; hoang <= 7; hoang++)
	{
		for (int hai = 1; hai <= 17; hai++)
		{
			if (hai==1 || hai == 7 )
			{
				cout << "*" << " ";
			}
			else if ((hoang==4&&hai==1)||(hoang==4&&hai==2)||(hoang==4&&hai==3)||(hoang==4&&hai==4)||(hoang==4&&hai==5)||(hoang==4&&hai==6)||(hoang==4&&hai==7))
			{
				cout << "*" << " ";
			}
			else if ((hoang == 4 && hai == 10) || (hoang == 4 && hai == 14))
			{
				cout << "*" << " ";
			}
			else if ((hoang == 6 && hai ==9) || (hoang == 7 && hai == 9) )
			{
				cout << "*" << " ";
			}
			else if ((hoang == 6 && hai ==15) || (hoang == 7 && hai == 15) )
			{
				cout << "*" << " ";
			}
			else if ((hoang == 2 && hai ==11) || (hoang == 3 && hai == 11) )
			{
				cout << "*" << " ";
			}
			else if ((hoang == 2 && hai ==13) || (hoang == 3 && hai == 13) )
			{
				cout << "*" << " ";
			}
			else if ((hai==10&&hoang==5)||(hai==11&&hoang==5)||(hai==12&&hoang==5)||(hai ==13&&hoang==5)||(hai==14&&hoang==5))
			{
				cout << "*" << " ";
			}
			else if (hai==12&&hoang==1)
			{
				cout << "*" << " ";
			}
			else if ((hai==17&&hoang==1)||(hai==17&&hoang==2)||(hai==17&&hoang==3)||(hai==17&&hoang==4)||(hai==17&&hoang==5)||(hai==17&&hoang==6)||(hai==17&&hoang==7))
			{
				cout << "*" << " ";
			}
			else
			{
				cout << " " << " ";
			}
		}
		cout << endl;
	}
}
