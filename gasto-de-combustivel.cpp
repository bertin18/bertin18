#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
    int t, vm,d;
    double lt;
    cin>>t>>vm;
    d=t*vm;
    lt=d/12.0;
    cout<<fixed<<setprecision(3);
    cout<<lt<<endl;
 
 
    return 0;
}
