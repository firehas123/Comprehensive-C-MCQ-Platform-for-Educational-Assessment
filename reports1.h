#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;
void dispf(string a)
{
	ifstream has;
	
	string file;
	file=a;
	a+=".txt";
	int count=0;
	file+="_reportc.txt";
	cout<<"File name with "<<a<<"_reportc.txt has been created.\n";
	has.open(a.c_str());
	string check;
for(int ax=1;!has.eof();ax++)
{
count++;
getline(has,check);
}
count--;
	ofstream chat;
	string name1,name2,rolln,grade;
	string name1x,name2x,rollnx,gradex;
	float marks;
	float marksx,sum=0;
    has.close();
    has.open(a.c_str());
    chat.open(file.c_str());
	
	chat<<setw(15)<<left<<"Roll number";
	chat<<setw(30)<<left<<"Name";
	chat<<setw(10)<<left<<"Marks";
	chat<<setw(5)<<left<<"Grade\n";
	has>>rolln;
	rollnx=rolln;
    	chat<<setw(15)<<left<<rolln;
    	has>>name1;
    	has>>name2;
    	name1x=name1;
    	name1+=" ";
    	name1x=name1;
    	name2x=name2;
    	name1x+=name2x;
		name1+=name2;
    	chat<<setw(30)<<left<<name1;
    	has>>marks;
    	sum+=marks;
    	marksx=marks;
	chat<<setw(11)<<left<<marks;
	has>>grade;
	chat<<setw(5)<<left<<grade;
	chat<<endl;
    for(int x=1;x<count;x++)
    {
    	
    	has>>rolln;
    	chat<<setw(15)<<left<<rolln;
    	has>>name1;
    	has>>name2;
    	name1+=" ";
    	name1+=name2;
    	chat<<setw(30)<<left<<name1;
    	has>>marks;
	chat<<setw(11)<<left<<marks;
	has>>grade;
	chat<<setw(5)<<left<<grade;
	chat<<endl;
	sum+=marks;
	if(marksx<marks)
	{
		marksx=marks;
		name1x=name1;
		name2x=name2;
		rollnx=rolln;
	}
	}
	chat<<"\n\t\tSTATISTICS:";
	chat<<"\nHighest marks belong to "<<name1x<<". Roll numer: "<<rollnx<<", scored "<<marksx<<".\n";
	chat<<"Average Marks = "<<(float)(sum/count)<<endl;
	has.close();
    chat.close();
}
