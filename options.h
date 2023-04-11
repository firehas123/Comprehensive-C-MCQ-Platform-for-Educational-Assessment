#include<iostream>
#include<fstream>
#include"studtest.h"
#include<iomanip>
using namespace std;
void inputs(string a)
{ ofstream has;
	if(a=="IT"||a=="it")
	has.open("IT.txt",std::ios::app);
else if(a=="SE"||a=="se")
	has.open("SE.txt",std::ios::app);
	else 
	has.open("CS.txt",std::ios::app);
string x,y;
cout<<"Enter your full Roll number>>";
cin.ignore();
getline(cin,x);
y=x;
has<<x<<"\t\t";
cout<<endl;
cout<<"Enter your full name>>";
getline(cin,x);
has<<setw(30)<<left<<x;
cout<<endl;
string s;
float f;
f=test_s(y);

s=grades(f);
has<<"\t"<<f<<"\t";
	if(f>=90)
	s="A+";
	else if(f<90&&f>=80)
	s="A";
	else if(f<90&&f>=80)
	s="B";
	else if(f<80&&f>=70)
	s="C";
	else if(f<70&&f>=60)
	s="D";
	else 
	s="F";

has<<s<<endl;///////need marks as well %age
	

	has.close();
	
}
