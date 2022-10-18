#include "r_book.h"

r_book::r_book(string n, string ow, string t, string ad, string ac)
{
	name = n;
	owner = ow;
	tel = t;
	address = ad;
	activity = ac;
}

string r_book::getName()
{
	return name;
}

string r_book::getOwner()
{
	return owner;
}

string r_book::getTel()
{
	return tel;
}

string r_book::getAddress()
{
	return address;
}

string r_book::getActivity()
{
	return activity;
}



void r_book::saveF()
{
	ofstream save("ref. book.txt", ios::app);
	save << endl << name << endl
		<< owner << endl
		<< tel << endl
		<< address << endl
		<< activity;
	save.close();
}

void r_book::printF()
{
	ifstream print("ref. book.txt");
	print.get();
	r_book temp;
	while (!print.eof()) {
		print >> temp.name >> temp.owner >> temp.tel >> temp.address >> temp.activity;
		cout << "Name:\t" << temp.name << endl;
		cout << "Owner:\t" << temp.owner << endl;
		cout << "Tel.:\t" << temp.tel << endl;
		cout << "Address:\t" << temp.address << endl;
		cout << "Activity:\t" << temp.activity << endl;
		cout << "----------------------------------------------------------\n";
	}
	print.close();
}

r_book* r_book::operator=(const r_book& obj)
{
	name = obj.name;
	owner = obj.owner;
	tel = obj.tel;
	address = obj.address;
	activity = obj.activity;
	return this;
}

ostream& operator<<(ostream& os, const r_book& obj) {
	cout << "Name:\t" << obj.name << endl;
	cout << "Owner:\t" << obj.owner << endl;
	cout << "Tel.:\t" << obj.tel << endl;
	cout << "Address:\t" << obj.address << endl;
	cout << "Activity:\t" << obj.activity << endl;
	cout << "----------------------------------------------------------\n";
	return os;
}
