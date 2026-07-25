#include<iostream>
using namespace std;
int main(){
	char name[100];
	cout << "Enter the name: ";
	cin >> name;
	cout << name << endl;
	for(int i = 0; i <= 13; i++)
	{
		cout << name[i] << endl;
	}
}
