#include <iostream>
using namespace std;

int main() {
	
	double  n1,n2,n3,n4,n5,menor=10,maior=0;
	cin>>n1;
	maior = n1>maior?n1:maior;
	menor = n1<menor?n1:menor;
	cin>>n2;
	maior = n2>maior?n2:maior;
	menor = n2<menor?n2:menor;
	cin>>n3;
	maior = n3>maior?n3:maior;
	menor = n3<menor?n3:menor;
	cin>>n4;
	maior = n4>maior?n4:maior;
	menor = n4<menor?n4:menor;
	cin>>n5;
	maior = n5>maior?n5:maior;
	menor = n5<menor?n5:menor;

	cout.precision(1);
	cout.setf(ios::fixed);

	cout<<(n1+n2+n3+n4+n5-maior-menor)<<endl;

	return 0;
}