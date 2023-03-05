#include<iostream>
using namespace std;

class clsPerson
{
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:	
	clsPerson(int ID, string FirstName, string LastName, string Email, string phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = phone;
	}

	int ID()
	{
		return _ID;
	}

	void SetFirstName(string FirstName)
	{
		 _FirstName = FirstName;
	}

	string FirstName()
	{
		return _FirstName;
	}

	string FullName()
	{
		return _FirstName + " " + _LastName;
	}

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string LastName()
	{
		return _LastName;
	}

	void SetEmail(string Email)
	{
		_Email = Email;
	}

	string Email()
	{
		return _Email;
	}

	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}

	string Phone()
	{
		return _Phone;
	}

	void Print()
	{ 
		cout << "\nInfo:";  
		cout << "\n___________________";   
		cout << "\nID       : " << _ID;     
		cout << "\nFirstName: " << _FirstName;
		cout << "\nLastName : " << _LastName;  
		cout << "\nFull Name: " << FullName();  
		cout << "\nEmail    : " << _Email;      
		cout << "\nPhone    : " << _Phone;     
		cout << "\n___________________\n";
	}

	void SendEmail(string Subject, string Body) 
	{
		cout << "\nThe following message sent successfully to email: " << _Email;
		cout << "\nSubject: " << Subject;    
		cout << "\nBody: " << Body << endl; 
	} 
	
	void SendSMS(string TextMessage)
	{ 
		cout << "\nThe following SMS sent successfully to phone: " << _Phone; 
		cout << "\n" << TextMessage << endl;
	}

};

class clsEmployee : public clsPerson
{
private:
	string _Title;
	string _Department;
	float _Salary;

public:
	clsEmployee(int ID,string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary)
		:clsPerson(ID,FirstName, LastName, Email, Phone)
	{
		_Title = Title;
		_Department = Department;
		_Salary = Salary;
	}

	void SetTitle(string Title)
	{
		_Title = Title;
	}

	string Title()
	{
		return _Title;
	}

	void SetDepartment(string Department)
	{
		_Department = Department;
	}

	string Department()
	{
		return _Department;
	}

	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}

	float Salary()
	{
		return _Salary;
	}

	void Print() 
	{
		cout << "\nInfo:";   
		cout << "\n___________________"; 
		cout << "\nID        : " << ID();     
		cout << "\nFirstName : " << FirstName();    
		cout << "\nLastName  : " << LastName();     
		cout << "\nFull Name : " << FullName();    
		cout << "\nEmail     : " << Email();       
		cout << "\nPhone     : " << Phone();       
		cout << "\nTitle     : " << _Title;       
		cout << "\nDepartment: " << _Department;  
		cout << "\nSalary    : " << _Salary;     
		cout << "\n___________________\n";
	}
};

int main()
{
	clsEmployee Employee1(11, "Rody", "RORO", "A@a.com", "8298982","ffff","uu",6666666);
	
	Employee1.Print();

	system("pause>0");

	return 0;
}
