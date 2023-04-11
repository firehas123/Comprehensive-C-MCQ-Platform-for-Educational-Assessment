#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int delete1()
{ 
ifstream count;
  ofstream has1;
  has1.open("rough.txt");
string waste;
int count1=0;

	for(int j=1;j<=1;j++)
	{
		
			system("CLS");
	cout<<"\t\tWelcome to delete Record Section\n";
	cout<<"Please chose one of the following section(1,2,3) or press '*' to return.\n";
	cout<<"1. IT\n";
	cout<<"2. SE\n";
	cout<<"3. CS\n>>";
	char a;
    cin.ignore();
    cin>>a;
    if(a=='1'||a=='2'||a=='3')
    { if(a=='1')
	{
		count.open("IT.txt");
		
	}
	
	else if(a=='2')
    {
    	count.open("SE.txt");
	}
	else if(a=='3')
    {
    	count.open("CS.txt");
	}
	for(count1=1;!count.eof();count1++)
	{
		getline(count,waste);
	}
}
	count.close();
	count1--;
    ifstream reader;
if(a=='1'||a=='2'||a=='3')
    { if(a=='1')
	{
		reader.open("IT.txt");
		
	}
	
	else if(a=='2')
    {
    	reader.open("SE.txt");
	}
	else if(a=='3')
    {
    	reader.open("CS.txt");
	}
    cout<<"Enter roll number>>";
    string k1,k2;
    cin>>k1;
    for(int i=1;i<count1;i++)
    {
    	reader>>k2;
    	if(k2!=k1)
    	{
    		has1<<k2;
    		//cin.ignore();
    		getline(reader,k2);
    		has1<<"\t\t"<<k2<<endl;
		}
		else
		getline(reader,k2);
	}
	
    reader.close();
    has1.close();
    if(a=='1')
    {
	int i1=remove("IT.txt");
	if(i1==0)
	rename("rough.txt","IT.txt");
    }
    if(a=='2')
    {
	int i1=remove("SE.txt");
	if(i1==0)
	rename("rough.txt","SE.txt");
    }
    if(a=='3')
    {
	int i1=remove("CS.txt");
	if(i1==0)
	rename("rough.txt","CS.txt");
    }
  
    
    
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
	

	return 1;
}
}

