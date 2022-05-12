#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	double a,b,c,delta,r1,r2;
	cin>>a>>b>>c;
	delta=b*b-4*a*c;
	if(delta<0||a<=0){
		cout<<"Impossivel calcular"<<endl;
	}		
	if(delta==0&&a>0){
		r1=(-b)/(2.0*a);
		r2=r1;
		cout<<fixed<<setprecision(5);
		cout<<"R1 = "<<r1<<endl;
		cout<<"R2 = "<<r2<<endl;
	}
	if(delta>0&&a>0){	
	r1=(-b+pow(delta,1/2.0))/(a*2.0);
	r2=(-b-pow(delta,1/2.0))/(2.0*a);
	cout<<fixed<<setprecision(5);
	cout<<"R1 = "<<r1<<endl;
	cout<<"R2 = "<<r2<<endl;}
	return 0;
}
