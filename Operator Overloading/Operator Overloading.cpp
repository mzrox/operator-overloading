#include <iostream>
using namespace std;

class youtube{
	public:
		string name;
		int age;
	youtube(string n , int a)
	{
		name = n;
		age = a;
		}	
};

void operator<< (ostream& cout , youtube& yt1)
{
	cout << "NAME: " << yt1.name << endl;
	cout << "AGE: " << yt1.age << endl; 
}

void operator>> (istream& cin , youtube& yt1)
{
	cout << "Enter Name: "; cin >> yt1.name;
	cout << "Enter Age: "; cin >> yt1.age;
}

int main()
{
	
youtube yt1("COBRA" , 22);
cout << yt1;
cin >> yt1;
cout << yt1;
return 0;	
}
