#include<iostream>
using namespace std;

class clsPerson
{
private:
	int _ID = 10;
	string _FirstName;
	string _LastName;

public:

	int ID()
	{
		return _ID;
	}

	//Property Set
	void setFirstName(string FirstName)    
	{      
		_FirstName = FirstName;     
	} 

	//Property Get
	string FirstName()  
	{
		return _FirstName;  
	} 
	
	//Property Set
	void setLastName(string LastName) 
	{      
		_LastName = LastName;  
	} 
	
	//Property Get
	string LastName() 
	{
		return _LastName; 
	}
	
	string FullName()   
	{ 
		return _FirstName + " " + _LastName; 
	}
}; 

int main() 
{
	clsPerson Person1;  
	
	Person1.setFirstName("Ragdha"); 
	Person1.setLastName("Elgaidi");
	
	cout << "ID:" << Person1.ID() << endl;
	cout << "First Name:" << Person1.FirstName() << endl;  
	cout << "Last Name:" << Person1.LastName() << endl;    
	cout << "Full Name:" << Person1.FullName() << endl;   
	
	system("pause>0");
	
	return 0;
}
