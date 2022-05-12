#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double a, b, m;
	cin>>a;
	cin>>b;
	a=a*3.5;
	b=b*7.5;
	m=(a+b)/11.0;
	cout<<fixed<<setprecision(5);
	cout<<"MEDIA = "<< m<<endl;
	
	return 0;
		
}
