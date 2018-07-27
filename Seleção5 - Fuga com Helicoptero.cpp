#include <iostream>
using namespace std;

int main() {
	
	int h,p,f,d;
	cin>>h>>p>>f>>d;

	if(d==-1) swap(h,p);
	
	if(f<h) {
		if(p>h || p<f) {
			cout<<"S"<<endl;
		}else cout<<"N"<<endl;
	}

	if(f>h) {
		if(p<f && p>h) {
			cout<<"S"<<endl;
		}else cout<<"N"<<endl;
	}

	return 0;
}

