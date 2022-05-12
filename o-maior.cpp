#include <iostream>
#include<cmath>
using namespace std;
 
int main() {
    int A,B,C;
    double M;
    cin>>A>>B>>C;
    M=(A+B+abs(A-B))/2.0;
    if (C<M)
    {
        cout<<M<<" eh o maior"<<endl;
    }
    else 
    {
        cout<<C<<" eh o maior"<<endl;
    }
    return 0;
}
