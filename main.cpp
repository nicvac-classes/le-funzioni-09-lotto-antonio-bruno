#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

void visualizzaMenu () {

	cout<<"1. Gioca al lotto"<<endl;
	cout<<"2. Estrazione numeri del lotto"<<endl;
	cout<<"3. Controlla vincita"<<endl;
	cout<<"0. Esci"<<endl;
}

void gioca (vector<int> v, int n) {

	int i;

	for (i=0; i<=n-1; i++) {

		cout<<"Quali numeri vuoi giocare?"<<endl;
		cin>>v[i];
	}
}

void estrazioneNumeri ()
int main() {
    int scelta, n;
	bool trovato;
	vector<int> g(5);
	vector<int> e(5);

	do {
		visualizzaMenu();
		
		cout<<"Cosa vuoi fare?"<<endl;
		cin>>scelta;

		if (scelta==1) {
			do {

				cout<<"Quanti numeri vuoi giocare?"<<endl;
				cin>>n;
			} while (n<1 || n>5);
		}
		else
		{
			if (scelta==2) {

				estrazioneNumeri(e, 5);
			}
			else
			{
				if (scelta==3) {

					controllaVincita(e, 5, g, n);
				}
			}
		}
	} while (scelta!=0);
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
