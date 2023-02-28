#include <iostream>
using namespace std;


class student
{
private:
	int rollNumber;


public:
	void putRollNumber(int rollNumber)
	{
	    //Assign class rollNumber member to method argument
		this->rollNumber=rollNumber;
	}


	int getRollNumber()
	{
	    //Return class rollNumber data member
		return this->rollNumber;
	}
};




//class test inherits student
class test: public student{
private:
	int marks[2]; //Marks for the 2 subjects




public:
	void putMarks(int subject1,int subject2)
	{
		this->marks[0]=subject1;
		this->marks[1]=subject2;
	}


	int getSubjectOneMark()
	{
		return this->marks[0];
	}
	int getSubjectTwoMark()
	{
		return this->marks[1];
	}
};


//Compute total mark
class result: public test
{
private:
    int totalMarks;


public:
    void computeTotalMarks()
    {
        this->totalMarks = getSubjectOneMark()+getSubjectTwoMark();
    }
    //Display total mark
	void displayTotalMarks()
	{
		cout<<"The total mark is: "<<totalMarks<<endl;
	}
};


int main()
{
	result r;
	r.putRollNumber(2345);
	r.putMarks(90,67);
	cout<<"Roll number: "<<r.getRollNumber()<<endl;
	cout<<"Subject 1 Mark: "<<r.getSubjectOneMark()<<endl;
	cout<<"Subject 2 Mark: "<<r.getSubjectTwoMark()<<endl;
	r.computeTotalMarks();
	r.displayTotalMarks();
	return 0;
}
