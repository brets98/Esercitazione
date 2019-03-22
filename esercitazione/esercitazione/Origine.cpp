#include <iostream>
using namespace std;
 // da intero a decimale 
int main() {
	cout << "Ciao\nInserisci un numero in decimale \n";
	int n,r=0,i=1;
	cin >> n;
	while (n!=0) {
		if (n % 2) r = r + i;
		i = i * 10;
		n = n / 2;
		
	}
	cout << r;

	system("pause");
}