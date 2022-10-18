#include<iostream>
#include<list>
#include"r_book.h"
#include"queue.h"
using namespace std;

int main() {
	r_book A("name1", "owner1", "tel1", "address1", "activity1");
	A.saveF();
	r_book B("name2", "owner2", "tel2", "address2", "activity2");
	B.saveF();
	r_book C("name3", "owner3", "tel3", "address3", "activity3");
	/*C.saveF();
	C.printF();*/



	queue Q(10);
	Q.add(A);
	Q.add(B);
	Q.add(C);
	Q.searchName("name1");
}