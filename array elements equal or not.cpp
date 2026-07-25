#include<iostream>
using namespace std;
int main(){
	int equal = 0;
	int num1[] = {1, 2, 3};
	int num2[] = {1, 4, 3};
	for(int i = 0; i < 3; i++)
	{
		if(num1[i] != num2[i])
		{
			equal = 1;
			break;
		}
		
	}
	if(equal == 1)
	{
		cout << "arrays are not equal";
	}
	else
	{
		cout << "arrays are equal";
	}
}
