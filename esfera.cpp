#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;
 
int main()
{
    float R;
    long double V,pi;
    cin>>R;
    pi= 3.14159;
    V = (4.0/3)*pi*pow(R,3);
    cout<<fixed<<setprecision(3);
    cout<<"VOLUME = "<<V<<endl;
 
    return 0;
}
