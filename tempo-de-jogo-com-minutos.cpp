#include<iostream>
using namespace std;
int main(){
    int ht,hi,hf,mt,mi,mf;
    cin>>hi>>mi;
    cin>>hf>>mf;
    ht=hf-hi;
    mt=mf-mi;
    if(mt<0){
        mt=mt+60;
        ht-=1;
    }
    if(ht<0){
        ht=ht+24;
    }
    if(ht==0&&mt==0){
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }
    else{
        cout<<"O JOGO DUROU "<<ht<<" HORA(S) E "<<mt<<" MINUTO(S)"<<endl;
    }
    return 0;
}
