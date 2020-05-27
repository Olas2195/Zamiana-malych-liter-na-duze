#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	ifstream plik;
	string linia;
	int liczbaLinii = 0;
	
	plik.open(argv[1]);
	if(plik.good()){
		while(!plik.eof()) {
			getline(plik, linia);
			liczbaLinii++;
		}
		cout<<liczbaLinii;
	}
	else {
		cout<<"Plik nie istnieje!";
	}
	
	return 0;
}
