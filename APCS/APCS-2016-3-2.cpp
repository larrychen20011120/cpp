#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a,b,c,max1;
	cin >> a >> b >> c;
	if(a>=b){
		max1=a;
	}else{
		max1=b;
	} 
	int squ[max1][max1],opt[c];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin >> squ[i][j];
		}
	}
	for(int i=0;i<c;i++){
		cin >> opt[i];
		if(opt[i]==0){
			//±ÛÂà°}¦C
			int tmp[max1][max1];
			for(int x=0;x<b;x++){
				for(int y=0;y<a;y++){
					tmp[x][y]=squ[a-1-y][x];
				}
			}
			a^=b^=a^=b;
			for(int x=0;x<a;x++){
				for(int y=0;y<b;y++){
					squ[x][y]=tmp[x][y];
				}	
			}
		}else{
			//Â½Âà°}¦C
			 for(int x=0;x<a/2;x++){
			 	for(int y=0;y<b;y++){
			 		squ[x][y]^=squ[a-1-x][y]^=squ[x][y]^=squ[a-1-x][y];
				 }
			 }
		}
	}
	cout << a << " " << b << endl;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout << squ[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
