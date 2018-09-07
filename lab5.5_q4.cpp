//include library
#include <iostream>
using namespace std;
// main function
int main(){
//rhombus star pattern
cout << "Rhombus Star Pattern" << endl;
int i, j;
	// loop
	for( i = 1; i <= 5; i++)
	{
		//loop in loop
		for( j = 1; j <=5-i; j++){
			cout << " ";
		}
		for(int j = 1; j <= 5; j++){	
			cout << "*";
		}
	cout << endl;
	}
//terminating program
return 0;
}
