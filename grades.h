#include<iostream>
#include<string>
using namespace std;
string grades(float b)
{ string a;
	if(b>=90)
	return a="A+";
	else if(b<90&&b>=80)
	return a="A";
	else if(b<90&&b>=80)
	return a="B";
	else if(b<80&&b>=70)
	return a="C";
	else if(b<70&&b>=60)
	return a="D";
	else 
	return a="F";
	
}
