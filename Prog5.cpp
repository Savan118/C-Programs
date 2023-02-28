#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class batsman
{
	
	int bcode;
	char bname[20];
	int innings,notout,runs;
	int batavg;
	
	void calcavg()
	{
		batavg=runs/(innings-notout);
	}
	
	public:
	void readdata();
	void displaydata();
};

void batsman::readdata()
{
	cout<<"Enter Batsman Code: ";
	cin>> bcode;
	fflush(stdin);
	cout<<"Enter Batsman Name: ";
	gets(bname);
	fflush(stdin);
	cout<<"Enter Innings: ";
	cin>>innings;
	fflush(stdin);
	cout<<"Enter Notouts: ";
	cin>>notout;
	fflush(stdin);
	cout<<"Enter Runs: ";
	cin>>runs;
	calcavg();
}

void batsman::displaydata()
{
	cout<<"Batsman code "<<bcode<<"\nBatsman name "<<bname<<"\nInnings "<<innings
	<<"\nNot out "<<notout<<"\nRuns "<<runs<<"\nBatting Average "<<batavg;
}

int main()
{
	batsman obj;
	obj.readdata();
	obj.displaydata();
	getch();
	return 0;
}
