#include <iostream>
using namespace std;
int main() {
float a=0, b=0;
int opzione=0;

cin>>a>>b>>opzione;
switch(opzione){
      case0:
            float area=0;
            area=(a*b)/2
       cout<<area<<endl;     
      break;
      case1:
            float area=0;
            area=a*a
    cout<<area<<endl;
         break;
      case2:
            float area=0;
            area=a*b
  cout<<area<<endl;
      break;
   default:
      cout<<"opzione non valida"<<endl;
}
   return 0;
}
