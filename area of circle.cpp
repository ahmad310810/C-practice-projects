#include<iostream>
#include<cmath>
using namespace std;
int main(){
	const double PI = 3.1415;
	double radius, area;
	cout << "Enter the radius: ";
	cin >> radius;
	area = PI * pow(radius, 2);
	cout << area;
}
