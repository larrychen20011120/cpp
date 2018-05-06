

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a[10],b[10],c[10],d[10],e[10];
    int num=0;
    for(int i=0;i<10;i++){
    	a[i]=i;
    	b[i]=i;
		c[i]=i;
		d[i]=i;
		e[i]=i;
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++){
				for(int l=0;l<10;l++){
					for(int m=0;m<10;m++){
						if(c[i]>b[j] && b[j]>a[k] && c[i]>d[l] && d[l]>e[m]){
							num++;
						}
					}
				}	
			}
		}
	}
	cout<<num<<endl;
	return 0;
}
 
