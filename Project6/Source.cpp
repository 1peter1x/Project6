#include <iostream>
using namespace std;

class Pperson {
public:
	Pperson();
	~Pperson();
};

class Person {

private:
	string fname;
	string lname;
	int age;
	double height;
	double weight;

public:
	Person();
	Person(string fName, string lName);
	Person(string fName, string lName, int age);
	Person(double height);
	Person(double weight);
	~Person();

	void SetFirstName(string fName);
	string GetFirstName;

	void SetLastName(string lName);
	string GetLastName;

	void SetAge(int age);
	int GetAge();

	void SetHeight(double height);
	double getHeight;
};

pperson::~pperson()
{
}
