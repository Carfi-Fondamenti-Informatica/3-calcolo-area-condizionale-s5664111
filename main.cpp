#include <iostream>
using namespace std;
int main() {
float a=0, b=0;
int opzione=0;
float area=0;
cin>>a>>b>>opzione;
switch(opzione){
      case0:
      area=(a*b)/2;
      break;
      case1:
      area=a*a;
         break;
      case2:
      area=a*b;
      break;
   default:
      cout<<"opzione non valida"<<endl;
}
cout<<area<<endl;

   return 0;
}
