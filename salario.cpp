#include <iostream>
#include<iomanip> 
using namespace std;
 
int main() {
    int NF;
    double VH,HT,SL;
    cin>>NF;
    cin>>VH>>HT;
    cout<<"NUMBER = "<<NF<<endl;
    cout<<fixed<<setprecision(2);
    SL=HT*VH;
    cout<<"SALARY = U$ "<<SL<<endl;
    return 0;
}
