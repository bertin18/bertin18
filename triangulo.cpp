#include <iostream>
#include<iomanip>
using namespace std;

int main()
{  
    float A,B,C,p,area;
    cin>>A>>B>>C;
    cout<<fixed<<setprecision(1);
    if(abs(B-C)<A&&A<B+C||abs(A-C)<B&&B<A+C||abs(A-B)<C&&C<A+B){
        p=A+B+C;
        cout<<"Perimetro = "<<p<<endl;
    }
    else{
        area=((A+B)*C)/2;
        cout<<"Area = "<<area<<endl;
    }
    return 0;
}
