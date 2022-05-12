#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
 
int main() {
    double x1,y1,x2,y2,D;
    cin>>x1>>y1>>x2>>y2;
    D=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout<<fixed<<setprecision(4);
    cout<<D<<endl;
    return 0;
}
