#include <iostream>
 
using namespace std;
 
int main() {
    int N,H,M,S,r;
    cin>>N;
    H=N/3600;
    r=N%3600;
    M=r/60;
    S=r%60;
    cout<<H<<":"<<M<<":"<<S<<endl;
    return 0;
}
