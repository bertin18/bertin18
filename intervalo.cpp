#include<iostream>
using namespace std;
int main(){
			float n;
			cin>>n;
			if(n>=0&&n<=25.00){
				cout<<"Intervalo [0,25]"<<endl;
			}
			if(n>25.00&&n<=50.00){
				cout<<"Intervalo (25,50]"<<endl;
			}
			if(n>50.00&&n<=75.00){
				cout<<"Intervalo (50,75]"<<endl;
			}
			if(n>75.00&&n<=100.00){
				cout<<"Intervalo (75,100]"<<endl;
			}
			if(n<0.00||n>100.00){
			    cout<<"Fora de intervalo"<<endl;
			}
	return 0;
}
