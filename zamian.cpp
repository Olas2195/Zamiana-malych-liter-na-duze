#include <iostream>
#include <fstream>

using namespace std;

class Program {
	char znak;
	string napis;
	
	ifstream we;
	ofstream wy;

	public:
		
	Program () {
		we.open("we.txt");
		wy.open("wy.txt");
	}
	void Czytanie () {
		if(we.good()) 
			while(!we.eof()) {
				we>>znak;
				we>>napis;
				cout<<znak<<" ";
				cout<<napis<<"\n";
				Zamiana();
				LiczLitery();
			}
	}
	void Zamiana () {
		for(int i=0; i<napis.length(); i++) {
			if(napis[i]>95)
				napis[i]-=32;
		}
		znak-=32;
	}
	void LiczLitery () {
		int ilosc=0;
		for(int i=0; i<napis.length(); i++) {
			if(napis[i]==znak)
				ilosc++;
		}
		cout<<napis<<" "<<ilosc<<"x"<<znak<<"\n\n";
		wy<<napis<<" "<<ilosc<<"x"<<znak<<"\n";
	}	
	~Program () {
		we.close();
		wy.close();
	}

		
};
int main(int argc, char** argv) {
	Program p1;
	p1.Czytanie();	
	
	return 0;
}
