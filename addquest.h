#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstring>
using namespace std;
bool addquest()
{ int a; 
string s;
ofstream has;
cout<<"Enter file name without extension.\t\tPress'*' to go back\n>>";
cin.ignore();
getline(cin,s);
if(s=="*")
return 0;
s+=".txt";
has.open(s.c_str());
	cout<<"\nHow many total number of questions?/n>>";
	cin>>a;
	cout<<endl;
	has<<a<<endl;
	cin.ignore();
	for(int x=1;x<=a;x++)
	{ 
		cout<<"For MCQ number "<<x<<" :(Type your question)\n";
       
		getline(cin,s);
		has<<x<<endl<<s<<endl;
		cout<<"Enter option a>> ";
	
		getline(cin,s);
		cout<<endl;
		has<<setw(20)<<left<<s<<endl;
		cout<<"Enter option b>> ";
	
		getline(cin,s);
		cout<<endl;
		has<<setw(20)<<left<<s<<endl;
		cout<<"Enter option c>> ";
	
		getline(cin,s);
		cout<<endl;
		has<<setw(20)<<left<<s<<endl;
		cout<<"Enter option d>> ";
	
		getline(cin,s);
		cout<<endl;
		has<<setw(20)<<left<<s<<endl;
		cout<<"Enter correct option(alphabet)>> ";
	
		getline(cin,s);
		cout<<endl;
		has<<setw(20)<<left<<s<<endl;
		
	}
	has.close();
	return 1;
}
