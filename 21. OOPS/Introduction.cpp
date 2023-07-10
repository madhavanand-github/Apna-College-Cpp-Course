#include<bits/stdc++.h>
using namespace std;

class student{

	public:

	// Data Member
	string name;
	int age;
	bool gender; // Male(0) Female(1)

	// Methods
	void printInfo(){
		cout << "Name = " << name << endl;
		cout << "Age = " << age << endl;
		cout << "Gender = " << gender << endl;
	}

	// Default Constructor
	student(){

	}

	// Parameterized Constructor
	student(string n, int a, bool g){
		name = n;
		age = a;
		gender = g;
	}

	// Copy Constructor
	student(student &a){
		name = a.name;
		age = a.age;
		gender = a.gender;
	}

	// Operator Overloading
	bool operator == (student &a){
		if(name == a.name && age == a.age && gender == a.gender)
		return true;
		return false;
	}

};

int main() {
	
	// Basic
	student a;
	a.name = "Madhav";
	a.age = 21;
	a.gender = 0;

	// Array of Students
	student arr[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Name = "; cin >> arr[i].name;
		cout << "Age = "; cin >> arr[i].age;
		cout << "Gender = "; cin >> arr[i].gender;
	}

	// Printing all
	for (int i = 0; i < 3; i++)
		arr[i].printInfo();
	
	// An object using constructor
	student c("Ravi", 22, 0);
	c.printInfo();

	// Default Copy Constructor
	student d = c;
	d.printInfo();

	// Defined Copy Constructor
	student e(d);

	// Operator Test
	cout << (d == c ? "yes" :  "no");

	return 0;
}