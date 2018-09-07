//include library
#include <iostream>
using namespace std;
// main function
int main(){
//hollow square star pattern
cout << "Hollow Square Star Pattern" << endl;
	// loop
	for(int i = 1; i <= 5; i++)
	{
		//loop in loop
		for(int j = 1; j <= 5; j++){
			if(j==1 || j == 5 || i==1 || i==5)
			//printing stars
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
