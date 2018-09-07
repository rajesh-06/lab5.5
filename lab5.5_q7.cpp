//include library
#include <iostream>
using namespace std;
// main function
int main(){
//right triangled star pattern
cout << "Right triangled Star Pattern" << endl;
	// loop
	for(int i = 0; i < 5; i++){
		//loop in loop
		for(int j = 0; j <=i; j++){
		//printing star
		cout << "*";
		}
	cout << endl;
	}
//terminating program
return 0;
}
