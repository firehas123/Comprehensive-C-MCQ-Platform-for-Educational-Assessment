#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstring>
#include"test.h"
using namespace std;
bool format()
{
	cout<<"The format of your file should be like this...\n";
	cout<<2<<"  \t    --->Total number of MCQs\n";
	cout<<1<<"   \t     --->MCQ number"<<endl;
	cout<<"What is 2+2?    --->your question\n";
	cout<<1<<endl<<2<<"\t\tyour answers "<<endl<<3<<"\t\tdont mention a,b,c,d."<<endl<<4<<endl; 
cout<<"d"<<"  \t    --->Correct option(alphabet)\n";
	cout<<"IS YOUR FILE IN THE REQUIRED OUTPUT?(Y/N) or press '*' to return.>>";
	char c;
	cin>>c;
	if(c=='*')
	return 0;
	string s;
	if(c=='y'||c=='Y')
	{ for(int x=1;x<=1;x++)
	{
		cout<<"\nPlease enter the name of the file including the extension>>";
		cin.ignore();
		getline(cin,s);
		if(test(s))	
		cout<<"\nYou are good to go!!!!!!";
		else
		{
		cout<<"\nError(s) found please check the file name errors in the folder.";
		
	}}
	}
	if(c=='n'||c=='N')
	cout<<"\nPlease change the file and come back again :)";
	return 1;
}
