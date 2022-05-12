#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float sl,sf,r;
    cin>>sl;
    cout<<fixed<<setprecision(2);
    if(sl>0&&sl<=400){
        r=sl*0.15;
        sf=sl+r;
        cout<<"Novo salario: "<<sf<<endl;
        cout<<"Reajuste ganho: "<<r<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    if(sl>400&&sl<=800){
        r=sl*0.12;
        sf=sl+r;
        cout<<"Novo salario: "<<sf<<endl;
        cout<<"Reajuste ganho: "<<r<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
    if(sl>800&&sl<=1200){
        r=sl*0.1;
        sf=sl+r;
        cout<<"Novo salario: "<<sf<<endl;
        cout<<"Reajuste ganho: "<<r<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
    if(sl>1200&&sl<=2000){
        r=sl*0.07;
        sf=sl+r;
        cout<<"Novo salario: "<<sf<<endl;
        cout<<"Reajuste ganho: "<<r<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    else{
        if(sl>2000){
            r=sl*0.04;
            sf=sl+r;
            cout<<"Novo salario: "<<sf<<endl;
            cout<<"Reajuste ganho: "<<r<<endl;
            cout<<"Em percentual: 4 %"<<endl;
        }
    }
    return 0;
}
