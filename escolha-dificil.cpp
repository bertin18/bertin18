#include <iostream>

using namespace std;

int main(){
    int f,b,m,pf,pb,pm,na=0;
    do{
        cin>>f>>b>>m;
    }while(f<0||b<0||m<0||f>100||b>100||m>100);
    do{
        cin>>pf>>pb>>pm;
    }while(pf<0||pb<0||pm<0||pf>100||pb>100||pm>100);
    if(pf>f){
        na=na+(pf-f);
    }
    if(pb>b){
        na=na+(pb-b);
    }
    if(pm>m){
        na=na+(pm-m);
    }
    cout<<na<<endl;
    return 0;
}
