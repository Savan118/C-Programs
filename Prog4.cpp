//Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
using namespace std;
 
int main(){
    
	// Variable declation
    int x, y;
    int sum, difference, product, modulo;
    float quotient;
     
    // Taking input from user and storing it in x and y 
    cout << "\nEnter First Number";
    cin >> x;
    cout << "\nEnter Second Number";
    cin >> y;
     
    // Adding two numbers 
    sum = x + y;
    
	// Subtracting two numbers 
    difference = x - y;
    
	// Multiplying two numbers
    product = x * y;
    
	// Dividing two numbers by typecasting one operand to float
    quotient = (float)x / y;
    
	// returns remainder of after an integer division 
    modulo = x % y;
     
    cout << "\nSum = " << sum;
    cout << "\nDifference  = " <<difference;
    cout << "\nMultiplication = " << product;
    cout << "\nDivision = " << quotient;
    cout << "\nRemainder = " << modulo;
     
    return 0;
}
