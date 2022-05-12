#include <iostream>
 
using namespace std;
 
int main() {
    int id,A,M,D,r;
    cin>>id;
    A=id/365;
    r=id%365;
    M=r/30;
    D=r%30;
    cout<<A<<" ano(s)"<<endl;
    cout<<M<<" mes(es)"<<endl;
    cout<<D<<" dia(s)"<<endl;
    return 0;
}
