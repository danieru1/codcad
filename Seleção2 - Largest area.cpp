#include <iostream>
using namespace std;

int main() {

	int w1,h1,w2,h2;
	cin>>w1>>h1;
	cin>>w2>>h2;

	if(w1*h1>w2*h2) {
		cout<<"Primeiro"<<endl;
	}
	else if(w2*h2>w1*h2) {
		cout<<"Segundo"<<endl;
	}
	else cout<<"Empate";

	return 0;
}