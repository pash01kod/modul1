#include <iostream>
using namespace std;

class Figurka {
public:
	virtual void namaluvatis() = 0;
};

class Pyatikutnik : public Figurka {
public:
	void namaluvatis() {
		cout << "  *  " << endl;
		cout << "     " << endl;
		cout << "*   *" << endl;
		cout << "     " << endl;
		cout << " * * " << endl;
	}
};

class DeformovaniyKvadrat :public  Figurka {
public:
	void namaluvatis() {
		cout << "* * *" << endl;
		cout << "     " << endl;
		cout << "*   *" << endl;
		cout << "     " << endl;
		cout << "* * *" << endl;
	}
};

int main()
{
	Figurka* figurka;
	std::cout << "Vvedit tip figurki ( 1 abo 2): ";
	int tip;
	cin >> tip;
	if (tip == 1)
		figurka = new Pyatikutnik();
	else
		figurka = new DeformovaniyKvadrat();
	figurka->namaluvatis();
	system("pause");
	return 0;
}