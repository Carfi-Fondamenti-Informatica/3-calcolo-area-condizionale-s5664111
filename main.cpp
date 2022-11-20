#include <iostream>
using namespace std;
int main() {
float a=0, b=0;
int opzione=0;
cin>>a>>b>>opzione;
switch(opzione){
      case0:
      (a*b)/2;
       cout<<(a*b)/2<<endl;     
      break;
      case1:
    cout<<a*a<<endl;
         break;
      case2:
  cout<<a*b<<endl;
      break;
   default:
      cout<<"opzione non valida"<<endl;
}
   return 0;
}
