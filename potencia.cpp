#include <iostream>
using namespace std;
int main(){
    int b,e,i=0,sum1,sum2;
    cout<<"Ingrese un valor para la base: ";
    cin>>b;
    cout<<"Ingrese un valor para el exponente: ";
    cin>>e;
    sum1=0;
    sum2=1;

    while(i<e){
        i++;
        sum1=0;
    for(int j=0;j<b;j++){
        sum1+=sum2;
    }
    sum2=sum1;

    }
    cout<<"La Potencia es : "<<sum1;

return 0;
}
