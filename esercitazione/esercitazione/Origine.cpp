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
	cout << r << endl;
	//da binario a decimale 
	cout << "Ciao\nInserisci un numero in binario  \n";
	int m, f = 0, j = 1;
	cin >> m;
	while (m != 0) {
		if (m % 2) f = f + j;
		j = j * 2;
		m = m / 10;

	}
	cout << f;
	


	system("pause");
}