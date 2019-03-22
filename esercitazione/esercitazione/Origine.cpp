#include <iostream>
#include<ctime>

using namespace std;
//media numeri e passaggio si array come variabili 

double everage(const int a, int v[]);
void ordinamento(const int a, int v[]);
int main() {
	const int	lunghezza = 20;
	int A,a[lunghezza]; 
	srand((unsigned)time(NULL));
	A = rand() % 100;	
	for (int i = 0; i < lunghezza; i++) {
		a[i]= A = rand() % 100;
		cout << a[i] << endl;

	}
	double ciao = everage(lunghezza, a);
	cout << "Media:" << ciao << endl;

	ordinamento(lunghezza, a);
	system("pause");
}

double everage(const int a, int v[]) {
	int somma = 0;
	for (int i = 0; i < a; i++) {
		somma = somma + v[i];
	}
	double media = somma / 20;
	return (media);

}


void ordinamento(const int a, int v[])
{
	int j = 0;
	int tmp=0;
	for (int i = 0; i < a; i++) {
		for (j = i+1; j < a; j++) {
			if (v[j] < v[i]) {
				tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
		}

	}
	for (int i = 0; i < a; i++) {
		cout << v[i] << endl;
	}
}