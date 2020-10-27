#include <iostream>

using namespace std;

int main(int argc, char * * argv) {
	int x[10] = {1,2,3,4,5,6,7,8,9,10};
	cout <<"impressão normal "<< endl;
for (int i=0; i < 10; i++){
	int* px = &x[i];
	cout<< *px << ", " ;
}
	cout << endl;
	cout <<"impressão inversa "<< endl;
for ( int i = 9; i >= 0; i--) {
	int* px = &x[i];
	cout<< *px << ", " ;
}
return 0;
}