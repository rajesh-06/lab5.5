//include library
#include <iostream>
using namespace std;
// main function
int main(){
//hollow right triangled star pattern
cout << "Hollow Right triangled Star Pattern" << endl;
	// loop
	for(int i = 1; i <= 5; i++){
		//loop in loop
		for(int j = 1; j <=i; j++){
		//printing star
		if(j==1 || j==5 || j==i || i==5)
		cout << "*";
		//printing space
		else
		cout << " ";
		}
	cout << endl;
	}
//terminating program
return 0;
}
