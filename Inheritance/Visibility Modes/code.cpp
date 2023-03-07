#include<iostream>
using namespace std;

class clsA
{
private:
	int V1;

	int Fun1()
	{
		return 1;
	}

protected:
	int V2;

	int Fun2()
	{
		return 2;
	}

public:
	int V3;

	int Fun3()
	{
		return 3;
	}
};

class clsB : private clsA
{
public:
	int Fun4()
	{
		return 4;
	}
};

class clsC : public clsB
{
public:
	int Fun5()
	{
		return 5;
	}
};

int main()
{
	clsB B1;

	cout<<B1.Fun4()<<endl;

	clsC C1;

	cout<<C1.Fun5()<<endl;

	system("pause>0");

	return 0;
}
