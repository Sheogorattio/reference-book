#pragma once
#include "r_book.h"

class queue
{
	r_book* arr;
	int max_size, current_size;
public:
	queue(const int size);
	void add(const r_book& obj);
	void extract();
	bool isFull();
	bool isEmpty();
	void print();
	void printByIndex(const int i)const;
	int getCurSize() const;
	r_book getElem(int i)const;
	void searchName(const char* str);
	void searchOwner(const char* str);
	void searchTel(const char* str);
	void searchActivity(const char* str);
};

