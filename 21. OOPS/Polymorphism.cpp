#include<bits/stdc++.h>
using namespace std;

class ApnaCollege{

	public:

	// Function Overloading
		void f() {
			cout << "No args" << endl;
		}

		void f(int x){
			cout << "You passed " << x << endl;
		}
};

class ApnaCollege2 : public ApnaCollege{

	// Function Overriding
	public:
		void f(){
			cout << "Overrided" << endl;
		}
};

class Complex{

	int real, img;

	public:
		Complex(int r=0, int i=0){
			real = r;
			img = i;
		}

		Complex operator + (Complex const &obj){
			Complex res(real + obj.real, img + obj.img);
			return res;
		}

		void display(){
			cout << img << " " << real << endl;
		}
};

// For Run time polymorphism

class base{

	public:

		virtual void print(){
			cout << "Base Print" << endl;
		}

		virtual void display(){
			cout << "Base Display" << endl;
		}

};

class derived : public base {

	public:
		void print(){
			cout << "Derived Print" << endl;
		}

		void display(){
			cout << "Derived Display" << endl;
		}
};


int main() {
	
	// Function Overloading
	ApnaCollege obj;
	obj.f();
	obj.f(10);

	// Function Overriding
	ApnaCollege2 obje;
	obje.f();

	// Operator Overloading
	Complex a(1,1);
	Complex b(1,1);
	Complex c = a + b;
	c.display();

	// Virtual Function : This is dynamically binding.
	base *bptr;
	derived d;
	bptr = &d;

	bptr -> print();
	bptr -> display();
	
	return 0;
}