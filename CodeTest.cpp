// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
	string str;
	str = "Madhav";

	for (int i = 0; i < str.size(); i++)
	{
		switch (str[i]) {

		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			str.erase(i,1);
			break;
		
		}
	}
	
	cout << str;
	

	return 0;
}
