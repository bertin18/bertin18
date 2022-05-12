#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    cout<<fixed<<setprecision(1);
    double A, B, C;
    cin>>A;
    cin>>B;
    cin>>C;
    double m;
    m=((A*2)+(B*3)+(C*5))/10.0;
    cout<<"MEDIA = "<<m<<endl;
    return 0;
}
