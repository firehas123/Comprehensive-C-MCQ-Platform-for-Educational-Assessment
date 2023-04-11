#include<iostream>
#include<fstream>
#include<string>
#include <sys/stat.h>
using namespace std;
bool rops()
{ for(int h=1;h<=1;h++)
{
cout<<"Enter the students full roll number \t\t press '*' to return.\n>> ";
string a;
getline(cin,a);
if(a=="*")
return 0;
ifstream has;
a+=".txt";
string line;
struct stat buffer;
int exist = stat(a.c_str(),&buffer);
if(exist==0)
{
has.open(a.c_str());
for(int x=1;!has.eof();x++)
{
	getline(has,line);
	cout<<line<<endl;
}
}
else
{cout<<"File no found try again\n";
h=0;
for(int i=0;i<10000;i++)
		for(int x=0;x<100000;x++)
		{
			
		}
		system("CLS");
}
has.close();
}return 1;
}

