#include <iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
string guess,test,command;

void num();
void rule();
bool inputwr(string a);
string level(int a);

int main(int argc, const char * argv[]) {	
	cout<<"This is a numbergame!\n";
	cout<<"If you what to know the rule, type "<<'"'<<"help"<<'"'<<"."<<endl;
	cout<<"If you know the rule, type "<<'"'<<"play"<<'"'<<". Then it will start."<<endl;
	while(command!="play"){
		cout<<">>>>";
		cin>>command;
		if(command=="play"){
			cout<<"========================================================="<<endl;
		}else if(command=="help"){
			rule();
		}else{
			cout<<'"'<<command<<'"';
			cout<<"不是內部或外部指令"<<endl;
		}
		cin.ignore();
	}
	num();
	int A=0,B=0,times=0;
	bool again=true;
	while(again==true){
		cout<<"guess>";
		getline(cin,guess);
		if(inputwr(guess)==1){
			cout<<"輸入錯誤,請重新輸入\n";
			continue;
		}		
		//讀取AB數 
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(guess[j]==test[i] && j==i){
					A++;
				}
				else if(guess[j]==test[i]){
					B++;
				}
			}
		}
		cout<<A<<"A"<<B<<"B"<<endl;
		times++;
		if(A==4){
			again=false;
		}
		A=0;B=0;
	}
	cout<<level(times)<<endl;
    return 0;
}

void rule(){
	cout<<"https://zh.wikipedia.org/wiki/%E7%8C%9C%E6%95%B0%E5%AD%97\n";
}

//號碼產生器 
void num(){
	srand(time(NULL));
	for(int i=0; i<4;i++){
		test[i]=(rand() % ('9'-'0'+1))+'0';		//from 0 to 9
		for(int k=0; k<i;k++){
		     if(test[i]==test[k]){
			 	k=0;
			 	test[i]=(rand() % ('9'-'0'+1))+'0';
			 } 
		}
	}
}
//判斷input
bool inputwr(string a){
	bool wrong=0;
	if(a.length()!=4){
		wrong=1;
	}
	for(int i=0;i<4;i++){
		if(a[i]>'9'|a[i]<'0'){
			wrong=1;
		}
	}
	for(int i=0;i<4;i++){
		for(int k=0;k<i;k++){
			if(a[i]==a[k]){
				wrong=1;
			}
		}
	}
	return wrong;
}

//等第判斷
string level(int a){
	string foryou;
	if(a==1){
		foryou="What the Fuck. Are you cheating?";
	}else if(a>=2 && a<=8){
		foryou="GoodJob! Keep trying.";
	}else if(a>=9 && a<=14){
		foryou="Dont be sad. You are just a little bit foolish.";
	}else{
		foryou="Go to die one die!";			
	}
	return foryou;
} 
