#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, const char * argv[]) {
	int n;
	cin>>n;
	string a;
	char cont[7]={'N','C','K','U','S','I','E'};
	for(int i=1;i<=n;i++){
		getline(cin,a);
		int b[7]={0,0,0,0,0,0,0};
		for(int k=0;k<a.length();k++){
			for(int j=0;j<7;j++){
				if(a[k]==cont[j]){
					b[j]++;
				}
			}
		}
	b[1]=b[1]/2;
	for(int k=0;k<6;k++){
		if(b[k+1]>b[k]){
			b[k+1]^=b[k]^=b[k+1]^=b[k];
		}
	}
	cout<<b[6]<<endl;
	}
    return 0;
}

