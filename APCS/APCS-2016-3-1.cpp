#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int score[n];
	for(int i=0;i<n;i++){
		cin >> score[i]; 
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(score[j]>score[j+1]){
				int tmp=score[j];
				score[j]=score[j+1];
				score[j+1]=tmp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout << score[i] <<" "; 
	}cout<<endl;
	if(score[0]>=60){
		cout << "best case" <<endl;
	}else{
		for(int i=n-1;i>=0;i--){
			if(score[i]<60){
				cout<<score[i]<<endl;
				break;
			}
		}
	}
	if(score[n-1]<60){
		cout << "worst case" <<endl;
	}else{
		for(int i=0;i<n;i++){
			if(score[i]>60){
				cout<<score[i]<<endl;
				break;
			}
		}
	}
	return 0;
}
