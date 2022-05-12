#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	double A, n, r;
	n= 3.14159;
	cin>>r;
	A=n*pow(r,2);
	cout<<fixed<<setprecision(4);
	cout<<"A=" << A<< endl;
	return 0;
}
