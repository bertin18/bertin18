#include <iostream>
 
using namespace std;
 
int main() {
    int N,q100,q50,q20,q10,q5,q2,q,r100,r50,r20,r10,r5,r2;
    cin>>N;
    q100=N/100;
    r100=N%100;
    q50=r100/50;
    r50=r100%50;
    q20=r50/20;
    r20=r50%20;
    q10=r20/10;
    r10=r20%10;
    q5=r10/5;
    r5=r10%5;
    q2=r5/2;
    q=r5%2;
    cout<<N<<endl;
    cout<<q100<<" nota(s) de R$ 100,00"<<endl;
    cout<<q50<<" nota(s) de R$ 50,00"<<endl;
    cout<<q20<<" nota(s) de R$ 20,00"<<endl;
    cout<<q10<<" nota(s) de R$ 10,00"<<endl;
    cout<<q5<<" nota(s) de R$ 5,00"<<endl;
    cout<<q2<<" nota(s) de R$ 2,00"<<endl;
    cout<<q<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
