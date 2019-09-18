#include <iostream>
#include <cstdlib>

//pretvaranje eura u kune
using namespace std;

int main () {
	float eur, kune;
	cout<<"Unesi eure: ";
	cin>>eur;
	
	kune=eur*7.5;
	
	cout<<kune<<endl;
	
	system("pause");
	return 0;
}
