#include <iostream>
#include "dll.h"
#include "dll.cpp"
using namespace std;

int main()
{
    cout << "Muhammad Rasyid Ridho - 103122400018\n";

    List L;
    createList(L);

    infotype data1 = {"Post001", "Content A", 90, "UserA"};
    infotype data2 = {"Post002", "Content B", 100, "UserB"};
    infotype data3 = {"Post003", "Content C", 200, "UserC"};

    address P1 = allocate(data1);
    address P2 = allocate(data2);
    address P3 = allocate(data3);

    insertLast(L, P1);
    insertLast(L, P2);
    insertLast(L, P3);

    cout << "View List:\n";
    printList(L);
    cout << endl;

    string usernameDicari = "UserA";
    cout << "Mencari Username: " << usernameDicari << endl;
    address found = findElement(L, usernameDicari);

    if (found != NIL)
    {
        cout << "Data ditemukan:\n";
        cout << "  ID Post   : " << info(found).idPost << endl;
        cout << "  Content   : " << info(found).contentPost << endl;
        cout << "  Like      : " << info(found).jmlLike << endl;
        cout << "  Username  : " << info(found).username << endl;
    }
    else
    {
        cout << "Data dengan username " << usernameDicari << " tidak ditemukan.\n";
    }

    return 0;
}
