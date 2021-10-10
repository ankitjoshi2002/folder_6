#include<iostream>
#include<string>
 
using namespace std;

int main()
{
	int x ;
	string str = "hello";
	cout<<&str<<endl;
	cout<<"current string : "<<str<<endl;
	str[3] = 'k';
	cout<<&str<<endl;
	cout<<"new string : "<<str<<endl;
return 0;
}
