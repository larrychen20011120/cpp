#include <iostream>
#include <math.h>
long long int stair(int n){
	if(n==0){
		return 1;
	}else{
		return n*stair(n-1);
	}
} 
using namespace std;
int main(int argc, char** argv) {
	int t,a;
	cin>>t;
	long long int times=0;
	for(int i=1;i<=t;i++){
		cin>>a;
	for(int x=0;x<=a;x++){
		for(int y=0;y<=a;y++){
			for(int z=0;z<=a;z++){
				if((x+2*y+3*z)==a){
					times=times+pow(4,y)*pow(2,z)*stair(x+y+z)/stair(x)/stair(y)/stair(z);
			}
		}
	}
	}
	cout<<times<<endl;
	times=0;
}
	return 0;
}
