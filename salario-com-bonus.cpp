#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
 
int main() {
    string NOME;
    getline(cin, NOME);
    double SF,TV,TOTAL;
    cout<<fixed<<setprecision(2);
    cin>>SF>>TV;
    TOTAL=SF+(TV*0.15);
    cout<<"TOTAL = R$ "<<TOTAL<<endl;
    
    return 0;
}
