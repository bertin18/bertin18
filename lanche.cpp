#include<iomanip>
#include <iostream>

using namespace std;

int main()
{
    int quant,cod;
    float total;
    
    
    cin>>cod;
    cin>>quant;
    
    
    cout<<fixed<<setprecision(2);
    if(cod==1){
        total=quant*4;
        cout<<"Total: R$ "<<total<<endl;
    }else{
        if(cod==2){
            total=quant*4.5;
            cout<<"Total: R$ "<<total<<endl;
        }else{
            if(cod==3){
                total=quant*5.0;
                cout<<"Total: R$ "<<total<<endl;
            }else{
                if(cod==4){
                    total=quant*2.0;
                    cout<<"Total: R$ "<<total<<endl;
            }else{
                if(cod==5){
                    total=quant*1.5;
                    cout<<"Total: R$ "<<total<<endl;
                }
            }
        }
    }
    }
}
