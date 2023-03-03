#include<iostream>
using namespace std;

class clsPerson
{ 
	//this private and will not be accessed from outside the class
	//for internal use only
int x; 

public: 
	string FirstName; 
	string LastName; 

	string FullName()  
	{ 
		return FirstName + " " + LastName; 
	}
};

int main() 
{
	clsPerson Person1;  
	
	Person1.FirstName = "Mohammed";  
	Person1.LastName = "Abu-Hadhoud"; 
	
	cout << Person1.FullName() <<endl; 
} 
