#include <iostream>
using namespace std;

int main() {
	
	int a,b,c;
	cin>>a>>b>>c;

	if(a+b == c || a+c == b || b+c == a || a==b || a==c || b==c) {
		cout<<"S";

	}else cout<<"N";

	
	return 0;
}