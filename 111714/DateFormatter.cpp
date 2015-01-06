#include <iostream>
#include <string.h>

#define SYMBOLSPOT0 4
#define SYMBOLSPOT123 2

using namespace std;

// This function will return a code depending on the date format given
// 0 yyyy-mm-dd
// 1 mm/dd/yy
// 2 mm#yy#dd
// 3 dd*mm*yyyy
// 4 (month word) dd, yy
// 5 (month word) dd, yyyy
int FormatCode(string data)
{
		int format = -1;

		// Idea check 4 spot for -
		if(data[SYMBOLSPOT0] == '-') //Format 0
		{
				format = 0;
		}
		//Idea check second spot for / # *
		else if(data[SYMBOLSPOT123] == '/') //Format 1
		{
				format = 1;
		}
		else if(data[SYMBOLSPOT123] == '#') //Format 2
		{
				format = 2;
		}
		else if(data[SYMBOLSPOT123] == '*') //Format 3
		{
				format = 3;
		}
		//Idea check the last 4 characters if there is a comma
		else if(data[data.length() - 4] == ',') //Format 4
		{
				format = 4;
		}
		else if(data[data.length() - 6] == ',') //Format 4
		{
				format = 5;
		}
		
		
		//idea check for spaces which will reveal the month word formats
		return format;
}

string correctDate(int dateFormat, string incDate)
{
		string corDate; 

		switch(dateFormat)
		{
				case 0://Date is already correct
						corDate = incDate;				
						break;
				case 1:
						
						break;
				case 2:
						break;
				case 3:
						break;
				case 4:
						break;
				case 5:
						break;
				default:
						corDate = "";
						break;
		}

		return NULL;
}

int main()
{
		string value;
		cin >> value;

		/**
		cout << FormatCode("1974-12-14") << endl; 
		cout << FormatCode("10/11/14") << endl; 
		cout << FormatCode("10#11#14") << endl; 
		cout << FormatCode("10*11*14") << endl; 
		cout << FormatCode("June 12, 14") << endl; 
		cout << FormatCode("June 12, 2014") << endl; 
		**/

		//cout << value << endl;
		return 0;
}
