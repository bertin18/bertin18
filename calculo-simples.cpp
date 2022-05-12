#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
    int CP,NP,CP2,NP2;
    float VP,VP2,VT;
    cin>>CP>>NP>>VP;
    cin>>CP2>>NP2>>VP2;
    VT=NP*VP+NP2*VP2;
    cout<<fixed<<setprecision(2);
    cout<<"VALOR A PAGAR: R$ "<<VT<<endl;
    
    
    return 0;
}
