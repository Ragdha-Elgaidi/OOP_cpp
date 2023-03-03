#include<iostream>
using namespace std;

class clsPerson
{
private:
	string _FirstName;

public:
	//set property
	void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
    }

	//get property
	string getFirstName()
	{
		return _FirstName;
	}

	__declspec(property(get = getFirstName, put = setFirstName))string FirstName;
};

int main()
{
	clsPerson Person1;

	Person1.FirstName = "Ragdha";

	cout << Person1.FirstName << endl;

	system("pause>0");

	return 0;
}
