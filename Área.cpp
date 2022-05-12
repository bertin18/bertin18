#include <iostream>
#include<iomanip>

using namespace std;
 
int main() {
    double A,B,C;
    double TR,CL,TP,RT,QR;
    cin>>A>>B>>C;
    TR=(A*C)/2.0;
    CL=C*C*3.14159;
    TP=((A+B)*C)/2.0;
    RT=A*B;
    QR=B*B;
    cout<<fixed<<setprecision(3);
    cout<<"TRIANGULO: "<<TR<<'\n'<<"CIRCULO: "<<CL<<'\n'<<"TRAPEZIO: "<<TP<<'\n'<<"QUADRADO: "<<QR<<'\n'<<"RETANGULO: "<<RT<<endl;
    return 0;
}
