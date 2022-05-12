#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float sl,vf;
    cin>>sl;
    cout<<fixed<<setprecision(2);
    if(sl>=0&&sl<=2000){
        cout<<"Isento"<<endl;
    }
    if(sl>2000&&sl<=3000){
        vf=(sl-2000)*0.08;
        cout<<"R$ "<<vf<<endl;
    }
    if(sl>3000&&sl<=4500){
        vf=((sl-3000)*0.18)+80;
        cout<<"R$ "<<vf<<endl;
    }
    if(sl>4500){
        vf=((sl-4500)*0.28)+80+270;
        cout<<"R$ "<<vf<<endl;
    }
    return 0;
}
