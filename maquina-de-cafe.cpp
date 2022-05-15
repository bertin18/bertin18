#include <iostream>
 
using namespace std;
 
int main() {
    int a1,b2,c3,temp1,temp2,temp3;
    
    cin>>a1>>b2>>c3;
    
    temp1=b2*2+c3*4;
    temp2=a1*2+c3*2;
    temp3=b2*2+a1*4;
    
    if(temp1<=temp2 and temp1<=temp3){
        cout<<temp1<<endl;
    }
    else{
        if(temp2<=temp1 and temp2<=temp3){
            cout<<temp2<<endl;
        }
        else{
            cout<<temp3<<endl;
        }
    }
    return 0;
}
