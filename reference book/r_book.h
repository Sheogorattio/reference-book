#pragma once
#include<iostream>
#include<fstream>

using namespace std;
class r_book
{
	string name, owner, tel, address, activity;
	friend ostream& operator<<(ostream& os, const r_book& obj);
public:
	r_book() = default;
	r_book(string n, string ow, string t, string ad, string ac);
	string getName();
	string getOwner();
	string getTel();
	string getAddress();
	string getActivity();
	void saveF();
	void printF();
	r_book* operator =(const r_book& obj);
};



