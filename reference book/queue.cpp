#include "queue.h"

queue::~queue() {
	delete[] arr;
}

queue::queue(const int size) {
	arr = new r_book[size];
	max_size = size;
	current_size = -1;
}

bool queue::isFull() {
	return current_size == max_size;
}

bool queue::isEmpty() {
	return current_size == -1;
}

void queue::add(const r_book& obj)
{
	if (!isFull()) {
		arr[++current_size] = obj;
		return;
	}
	cout << "There is no more memory.\n";
}

void queue::extract() {
	if(!isEmpty()) cout << arr[current_size--];
}

void queue::print() {
	for (int i = 0; i <= current_size; i++) {
		cout << arr[i];
	}
}

void queue::printByIndex(const int i)const
{
	if(i>=0 && i<=current_size)	cout << arr[i];
}

int queue::getCurSize() const
{
	return current_size;
}

r_book queue::getElem(int i) const
{
	if (i <= current_size && i >= 0) {
		return arr[i];
	}
	return arr[0];
}

void queue::searchName(const char* str)
{
	string temp = str;
	int size =	getCurSize();
	for (int i = 0; i <= size; i++) {
		if (temp == getElem(i).getName()) {
			printByIndex(i);
		}
	}
}

void queue::searchOwner(const char* str)
{
	string temp = str;
	int size = getCurSize();
	for (int i = 0; i <= size; i++) {
		if (temp == getElem(i).getOwner()) {
			printByIndex(i);
		}
	}
}

void queue::searchTel(const char* str)
{
	string temp = str;
	int size = getCurSize();
	for (int i = 0; i <= size; i++) {
		if (temp == getElem(i).getTel()) {
			printByIndex(i);
		}
	}
}

void queue::searchActivity(const char* str)
{
	string temp = str;
	int size = getCurSize();
	for (int i = 0; i <= size; i++) {
		if (temp == getElem(i).getActivity()) {
			printByIndex(i);
		}
	}
}
