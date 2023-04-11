#include<iostream>
#include"reports1.h"
using namespace std;
bool report()
{ 
	string a;
for(int y=1;y<=1;y++)
{
	cout<<"Which class report do you want?(1,2,3) or press '*' to return.\n";
	cout<<"1.IT\n";
	cout<<"2.SE\n";
	cout<<"3.CS\n>>";
cin.ignore();
	cin>>a;
	if(a=="*")
	return 0;
	if(a=="1")
	{
		dispf("IT");
	}
	else if(a=="2")
	{
		dispf("SE");
	}
	else if(a=="3")
	{
		dispf("CS");
	}
	else
	{
		cout<<"\nwrong input plz chose the correct option";
	y=0;
	for(int i=1;i<10000;i++)
		for(int x=1;x<100000;x++)
		{
			
		}
		
	system("CLS");
	}
}
return 1;
}
