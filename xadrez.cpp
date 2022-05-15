#include <iostream>

using namespace std;

int main(){
    int l,c,soma=0;
    do{
        cin>>l;
    }while(l<1 ||l>1000);
    do{
        cin>>c;
    }while(c<1||c>1000);
    soma=l+c;
    if(soma%2==0){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}
