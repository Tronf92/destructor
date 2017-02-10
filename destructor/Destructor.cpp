#include <iostream>
using namespace std;

class Automobil
{
private:
	char* _pnr_inmatriculare;

public:
	Automobil(char *pnr)
	{
		int nrOcteti= strlen(pnr)+1;
		_pnr_inmatriculare =(char*)malloc(nrOcteti);
		strcpy_s(_pnr_inmatriculare, nrOcteti, pnr);
	}

	void Info() const
	{
		cout << "Nr inmatriculare:" << _pnr_inmatriculare << endl;

	}
	~Automobil()
	{
		cout << "Destructor:" << _pnr_inmatriculare << endl;
		free(_pnr_inmatriculare);
	}

};

int main()
{
	Automobil unu("B-24-CPP");
	unu.Info();
	{
		Automobil doi("DJ-15-OBJ");
		doi.Info();
	}
	getchar();
	return 0;

}
