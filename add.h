#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
#include<iomanip>
#include <sys/stat.h>
using namespace std;
int add()
{ 
ofstream has;
struct stat buffer;
for(int j=1;j<=1;j++)
{
	system("CLS");
	cout<<"\t\tWelcome to Add Record Section\n";
	cout<<"Please chose one of the following section(1,2,3) or press '*' to return.\n";
	cout<<"1. IT\n";
	cout<<"2. SE\n";
	cout<<"3. CS\n>>";
    char a;
    cin.ignore();
    cin>>a;
       if(a=='1'||a=='2'||a=='3')
    { if(a=='1')
	has.open("IT.txt",std::ios::app); 
	else if(a=='2')
    has.open("SE.txt",std::ios::app);
	else if(a=='3')
    has.open("CS.txt",std::ios::app);
if (has.is_open())
cout<<"File found\n";
else 
{
cout<<"Cannot open file\n";
return 0;
}
    string rolln,name,grade;
    float marks;
    cout<<"Enter Roll number>>";
    cin>>rolln;
    cout<<"\nEnter full name>>";
    cin.ignore();
    getline(cin,name);
    cout<<"\nEnter marks out of 100>>";
    cin>>marks;
    if(marks>=90)
	grade="A+";
	else if(marks<90&&marks>=80)
    grade="A";
	else if(marks<90&&marks>=80)
	grade="B";
	else if(marks<80&&marks>=70)
	grade="C";
	else if(marks<70&&marks>=60)
	grade="D";
	else 
	grade="F";
    has<<rolln<<"\t\t"<<setw(32)<<left<<name<<setw(7)<<marks<<" "<<grade<<endl;
    cout<<"Data Entered.";
}
    else if (a=='*')
    {
    return 0;	
	}
    else
    {cout<<"INVALID input... try again./n";
    j=0;
    for(int i=0;i<10000;i++)
		for(int x=0;x<100000;x++)
		{
			
		}
}
}
has.close();
return -1;
	
}
