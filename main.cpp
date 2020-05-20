#include <iostream>
#include"TWList.h"
#include"Twlist.cpp"
using namespace std;

int main()
{
twlist<int> lisT;
lisT.insertLast(8);
lisT.insertAtPos(1,5);
lisT.insertFirst(100);
lisT.Print();
lisT.deleteAtPos(1);
lisT.Print();
lisT.Delete(100);
lisT.Print();
lisT.Clear();
lisT.Print();
lisT.insertFirst(10);
lisT.isContains(100);
lisT.Print();
lisT.deletefirst();
lisT.insertFirst(100);
lisT.insertLast(777);
lisT.Print();
lisT.deleteLast();
lisT.Print();
lisT.insertLast(777);
lisT.getfirst();
lisT.getlast();



return 0;
}
