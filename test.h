#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstring>
using namespace std;
bool test(string as)
{ 
 ofstream chat;
int count=0,er=1;
chat.open("Errors.txt");
	ifstream has;
	has.open("hassan.txt");
	int size;
	string s;
	for(int x=0;!has.eof();x++)
	{ 
	count++;
		getline(has,s);
	
	}
has.close();
has.open("hassan.txt");
getline(has,s);
int loop=count-2;
loop=loop/7;
if((count-2)%7!=0)
{
chat<<"Error in line 1. Digit for showing number of MCQs is missing.\n";
er=0;
}

else
{
	
	for(int x=2;x<=count-1;x++)
	{ if(x%2==0)
	{ if(x>7)
	x++;
		getline(has,s);
		if(s[0]<'0'&&s[0]>'9')
		{
		chat<<"Error at line "<<x<<" (not a digit) or number is missing"<<endl;
	er=0;
	}
	}
	x++;
	getline(has,s);
	if(s[0]==' ')
	{
    chat<<"Their is a space or question is missing.at line "<<x<<".\n";
    er=0;
	}
	getline(has,s);
	x++;
	if(s[0]==' ')
	{
	chat<<"Option missing or space is present at line "<<x<<".\n";
	er=0;
	}
	getline(has,s);
	x++;
	if(s[0]==' ')
	{
	chat<<"Option missing or space is present at line "<<x<<".\n";
	er=0;
	}
	getline(has,s);
	x++;
	if(s[0]==' ')
	{
	chat<<"Option missing or space is present at line "<<x<<".\n";
	er=0;
	}
	getline(has,s);
	x++;
	if(s[0]==' ')
	{
	chat<<"Option missing or space is present at line "<<x<<".\n";
	er=0;
	}
	getline(has,s);
	x++;
	if(s[0]<97&&s[0]>122||s[0]<65&&s[0]>90)
	{
	chat<<"Option missing or space is present at line "<<x<<".\n";
	er=0;
	}
	x--;
	
		
	}
	
}


	has.close();
	chat.close();



	
	if(er==0)
	return 0;
	else
	return 1;
}
