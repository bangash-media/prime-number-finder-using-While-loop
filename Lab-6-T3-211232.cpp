#include <iostream>

using namespace std;
/*Program to find whether the provided number is a Prime number or not using
while loop.*/
int main() 
{
	int num,check=0; //variable declaration
	cout<<"\n\n\t\t\t\"PRIME NUMBER IDENTIFIERS\"";
	cout<<"\n\n\t\tEnter a number: "; cin>>num; //input from user to find whether prime or not 
	int i=2; //starting value declaration for loop
	while(i<num)  //condition till the loop will execute
	{
		if(num%i==0) //condition to check if the"num" is divisioble on any other numbers
		{
			check++; // if divisible it will change the value of "check"
		}
		i++; //increament for i
    }
    if (check==0)  //if check remained 0, means the above "if" statement remains false
    {
    	cout<<"\n\n\t\t"<<num<<" is a prime number"; //so will print prime number
	}
	else //otherwise is not a prime number if the "if statement in while becomes true.
	{
		cout<<"\n\n\t\t"<<num<<" is NOT a prime number";
	}
          
	return 0;
}
