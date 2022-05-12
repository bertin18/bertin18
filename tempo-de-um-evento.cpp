#include <iostream>
using namespace std;
int main()
{

    string day;
    char I;
    int di,hi,mi,si;
    int df,hf,mf,sf;
    int tempT,tempSi,tempSf,td,th,tm,ts;
    
    cin>>day>>di;
    cin>>hi>>I>>mi>>I>>si;
    cin>>day>>df;
    cin>>hf>>I>>mf>>I>>sf;
    
    tempSi=di*86400+hi*3600+mi*60+si;
    tempSf=df*86400+hf*3600+mf*60+sf;
    
    tempT=tempSf-tempSi;
    
    td=tempT/86400;
    th=(tempT%86400)/3600;
    tm=(tempT%86400%3600)/60;
    ts=(tempT%86400)%3600%60;
    
    cout<<td<<" dia(s)"<<endl;
    cout<<th<<" hora(s)"<<endl;
    cout<<tm<<" minuto(s)"<<endl;
    cout<<ts<<" segundo(s)"<<endl;
}
