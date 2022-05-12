#include<iostream>
using namespace std;
int main(){
    int ht,hi,hf;
    cin>>hi>>hf;
    ht=hf-hi;
    if(ht<0){
        ht=ht+24;
    }
    if(ht==0){
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }
    else{
        cout<<"O JOGO DUROU "<<ht<<" HORA(S)"<<endl;
    }
    return 0;
}
