#include<iostream>
#include"grades.h"
#include<string>
using namespace std;
float test_s(string y)
{
	ofstream rep;
	y+=".txt";
	rep.open(y.c_str());
	system("CLS");
	cout<<"Your test will begin shortly";
		for(int i=0;i<10000;i++)
		for(int x=0;x<100000;x++)
		{
			
		}
	cout<<"\nEnter the name of the file(include it's extension)>>";
	string a;
	ifstream has;
	cin>>a;
	system("CLS");
	for(int i=0;i<10000;i++)
		for(int x=0;x<100000;x++)
		{
			
		}
	cout<<"\t\tTEST\n\n";
	has.open(a.c_str());
	int ax;
	float count=0;
	string ay,cr;
	has>>ax;
	for(int x=1;x<=ax;x++)
	{
		
		cout<<"Question "<<x<<" : "<<endl;
		rep<<"Question "<<x<<" : "<<endl;
		getline(has,ay);
		getline(has,ay);
		getline(has,ay);
		cout<<ay;
	//	rep<<a;
		cout<<endl;
	//	rep<<endl;
		cout<<"(a) ";
     //   rep<<"(a) ";
		has>>ay;
		cout<<ay<<endl;
	//	rep<<s<<endl;
		cout<<"(b) ";
	//	rep<<"(b) ";
		has>>ay;
		cout<<ay<<endl;
	//	rep<<s<<endl;
		cout<<"(c) ";
	//	rep<<"(c) ";
		has>>ay;
		cout<<ay<<endl;
	//	rep<<s<<endl;
		cout<<"(d) ";
	//	rep<<"(d) ";
		has>>ay;
		cout<<ay<<endl;
	//	rep<<s<<endl; //option completed
		cout<<"Your answer>>";
		cin>>cr;
		has>>ay;
		rep<<ay<<"\tyou marked: "<<cr;
		if(cr==ay)
		count++;
		cout<<endl;
		rep<<endl;
	}
	rep<<"Total MCQs = "<<ax<<endl;
	rep<<"Marked correct are = "<<count<<endl;
	rep<<"Your grade is = "<<grades((float)count*100/ax);
	cout<<endl<<"Your marksheet is created with your roll number...";
	rep.close();
	
	
	return ((float)(count*100/ax));
	
}
