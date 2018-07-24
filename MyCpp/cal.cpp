#include <iostream>
using namespace std;
long double a,b;
void cal (char i);
int main(int argc, char** argv) {
	char sym ;
	cin >> a;
	while (cin>>sym){
		if (sym == '=') {
			break;
		}
		else {
			cin >> b;
			cal(sym);
		}
		 
	}
	cout<<a<<endl; 
	return 0;
}
void cal (char i){
	switch (i){
		case '+':
			a = a + b;
			break;
		case '-':
			a = a - b;
			break;
		case '*':
			a = a * b;
			break;
		case '/':
			a = a / b;
			break;
	}
}
