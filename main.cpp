#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<cstring>
#include"option.h"
#include"options.h"
#include"addquest.h"
#include"qbf.h"
#include"reports.h"
#include"x.h"
#include"add_del.h"
#include"add.h"
#include"delete1.h"
using namespace std;
int main()
  
{ char c,t,t1,t2,t3;
string a="bitf18a517",b;
int opt,count=0;
	for(int x=1;x<=1;x++)
	{ 
	cout<< "\t\t\tWelcome to MCQ Base Computerised Testing\n\n ";
	cout<<" PLEASE SELECT AN OPTION: \n";
	cout<<"1. Teacher Login\n";
	cout<<"2. Student Login\n";
	cout<<"3. Exit\n";
	cout<<">>";
	cin>>c;
	if(c=='1')
	{
		system("CLS");
	for(int y=1;y<=1;y++)
{
	for(int t=1;t<=1;t++)
	{
	cout<<"\t\t\tWelcome to teacher section\n";
	cout<<"Please Enter Teacher password's below.\t\tEnter '*' to return\n>>";
	
	cin>>b;
	if(b[0] == '*')
	{
		x=0;
		system("CLS");
		count=0;
		
	}
	else if(a==b)
	{
		cout<<"\n correct pass.\n Hold on a min.\n";
	for(int i=0;i<10000;i++)
		for(int x=0;x<100000;x++)
		{
			
		}
		system("CLS");
	for(int z=1;z<=1;z++)
	{
	opt=option();
	

if(opt==1)
{  system("CLS");
	
	int a=addquest();
	if(a==0)
{ system("CLS");
	t=0;
}
}
else if(opt==2)
{system("CLS");
	
	int a=format();
    if(a==0)
{ system("CLS");
	t=0;
}
}
else if(opt==3)
{system("CLS");
	int a=report();

	if(a==0)
{ system("CLS");
	t=0;
}
}
else if(opt==4)
{
int a,test1;
for(int k=1;k<=1;k++)
{
system("CLS");
	a=fdel();
if(a==0)
{ system("CLS");
	t=0;
}
else if(a==1)
{
	system("CLS");
	
	test1=add();
	if(test1==0)
	k=0;
	
}
else if(a==2)
{
	system("CLS");
	test1=delete1();
	if(test1==0)
	k=0;
	system("CLS");
}
}
}
else if(opt==5)
{system("CLS");
	int a=rops();
	if(a==0)
{ system("CLS");
	t=0;
}
}
else if(opt==6)
{
//	t=0;     //previous menu
	x=0;     //main menu
	system("CLS");
	count=0;
}
else
{
	cout<<"Invalid entry. Wait a min.\n";
		for(int i=0;i<10000;i++)
		for(int x=0;x<100000;x++)
		{
			
		}
	z=0;
	system("CLS");
}
}
	}
	else if(a!=b&&b[0]!='*')
	{
	count++;
		cout<<"\nWrong password try again...one moment.";
		t=0;
		for(int i=0;i<10000;i++)
		for(int x=0;x<100000;x++)
		{
			
		}
		system("CLS");
		cout<<"\t\t\tNumber of wrong attempts = "<<count<<endl;
		if(count==5)
		{
			cout<<"\nToo many attempts...Program self aborted.";
			x=100;
			t=100;
		}
		
		
	}

}
}
}
		
	
	else if(c=='2')
	{ int a;
		for(int h=1;h<=1;h++)
		{
	system("CLS");
	cout<<"\t\t\tWelcome to Students Section\n\n";
	cout<<"Do you want to proceed or do you wish to go to main menu?(y/n)";
	char c;
	cin>>c;
	if(c=='y'||c=='Y')
	{
	for(int t=1;t<=1;t++)
	{ 
		system("CLS");
		cout<<"Are you an SE or CS or IT student?\t\tPress * to return.\n>>";
		string sec;
		cin.ignore();
		cin>>sec;
		if(sec=="IT"||sec=="SE"||sec=="CS"||sec=="it"||sec=="se"||sec=="cs")
		inputs(sec);
		else if(sec =="*")
		{
			h=0;
			system("CLS");
		}
		else
	{
    	cout<<"\nInvalid section try again.\n";
		t=0;
	    for(int i=0;i<10000;i++)
		for(int x=0;x<100000;x++)
		{
			
		}
		system("CLS");
	}
	}
}
	else if(c=='n'||c=='N')
	{
		x=0;
		system("CLS");
	}
	else
	{
		cout<<"\nInvalid option try again.";
		for(int i=0;i<10000;i++)
		for(int x=0;x<100000;x++)
		{
			
		}
		h=0;
	}


}
		
	}
    else if(c=='3')
	{
	cout<<"Are you sure you want to exit?(y/n)";
	cin>>t2;
	if(t2=='y')
	{
	}
	else if(t2=='n')
	{
		x=0;
		system("CLS");
	}
    }
	else
	{
		
	cout<<"invalid option.\nPress any key to continue..";
	cin.ignore();
	getchar();
	cout<<endl;
	x=0;
	//clrscr();
	system("CLS");
	}
    }
	}
