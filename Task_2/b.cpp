#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a ;
	getline(cin,a);
	int j = a.length()-1;
	int c = 0 ;
	
	for(int i = 0 ; i <= j ; i++)
	{
		if(a[i] == a[j]){
			j--;
		}
		else{
			c++;
		}
	}
	if(c == 0){
		cout<<"String is palindrome " << endl;
	}
	else{
		cout<<"String is not a palindrome";
	}
return 0;
}
