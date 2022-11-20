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
      breack;
      case1:
      area=pow(a,2)
         breack;
      case2:
      area=a*b;
      breack;
   default:
      cout<<"opzione non valida"<<endl;
}
cout<<area<<endl;

   return 0;
}
