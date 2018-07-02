#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
   long long int first,t,rule=0;
   long double k=1.0,base;
   cout<<"此為取Log值的計算器\n"; 
   cout<<"輸入底數\n";
   cin>>base;
   cout<<"輸入次數\n";
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
   cout<<base<<"^"<<t<<"取Log後:"<<endl<<endl; 
   cout<<"首數: "<<first<<endl<<"尾數: "; 
   printf("%.4f\n",log10(k));
   int i=k;
   cout<<endl<<endl<<base<<"^"<<t<<endl; 
   cout<<"位數: "<<first+1<<endl;
   cout<<"最高位數字: "<<i<<endl; 
	return 0;
}
 
