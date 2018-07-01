#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
   long long int first,t,rule=0;
   long double k=1.0,base;
   cout<<"Log璸衡竟\n"; 
   cout<<"块┏计\n";
   cin>>base;
   cout<<"块Ω计\n";
   cin>>t;
   for(int i=1;i<=t;i++){
   k=k*base;
   }
   while(1){
   k=k/10.0;
   rule++;
   if(k>=1&&k<10){
   break;
   }	
   }
   first=rule;
   cout<<base<<"^"<<t<<"Log:"<<endl<<endl; 
   cout<<"计: "<<first<<endl<<"Ю计: "; 
   printf("%.4f\n",log10(k));
   int i=k;
   cout<<endl<<endl<<base<<"^"<<t<<endl; 
   cout<<"计: "<<first+1<<endl;
   cout<<"程蔼计: "<<i<<endl; 
	return 0;
}
 
