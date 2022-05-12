#include <iostream>
#include<iomanip>

using namespace std;

int main(){
    float n1,n2,n3,n4,media=0,nf,mf=0;
    cin>>n1>>n2>>n3>>n4;
    cout<<fixed<<setprecision(1);
    media=((n1*2)+(n2*3)+(n3*4)+n4)/10.0;
    if(media>=7.0){
        cout<<"Media: "<<media<<endl;
        cout<<"Aluno aprovado."<<endl;
    }
    if(media<5.0){
        cout<<"Media: "<<media<<endl;
        cout<<"Aluno reprovado."<<endl;
    }
    if(media>=5.0 && media<=6.9){
        cout<<"Media: "<<media<<endl;
        cout<<"Aluno em exame."<<endl;
        cin>>nf;
        cout<<"Nota do exame: "<<nf<<endl;
        mf=(media+nf)/2.0;
        if(mf>=5.0){
            cout<<"Aluno aprovado."<<endl;
        }
        if(mf<5.0){
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<mf<<endl;
    }
    return 0;
}
