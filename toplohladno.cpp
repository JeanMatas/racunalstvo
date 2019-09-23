#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
	float temp;
	cout<<"Upisi temperaturu: ";
	cin>>temp;
	
	if (temp>24.5) 
		cout<<"Toplo."<<endl;			
    else
		cout<<"Hladno."<<endl;
		
	system ("pause");
	return 0;
}
