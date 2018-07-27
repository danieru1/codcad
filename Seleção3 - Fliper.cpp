#include <iostream>
using namespace std;

int main() {
	
	bool r,p;
	cin>>p>>r;

	if(!p){
		cout<<"C";
	}
	else if(p && !r){
		cout<<"B";
	}
	else cout<<"A";

	return 0;
}
