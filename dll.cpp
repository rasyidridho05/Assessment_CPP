#include "dll.h"
#include <iostream>
using namespace std;

void createList(List &L) {
    first(L) = NIL;
    last(L) = NIL;
}

address allocate(infotype x) {
    address P = new Elmlist;
    info(P) = x;
    next(P) = NIL;
    prev(P) = NIL;
    return P;
}

bool isEmpty(List L) {
    return (first(L) == NIL);
}

void insertLast(List &L, address P) {
    if (isEmpty(L)) {
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

void deleteFirst(List &L, address &P) {
    if (isEmpty(L)) {
        cout << "List kosong\n";
    } else if (first(L) == last(L)) {
        P = first(L);
        first(L) = last(L) = NIL;
    } else {
        P = first(L);
        first(L) = next(P);
        prev(first(L)) = NIL;
        next(P) = NIL;
    }
}

void deleteLast(List &L, address &P) {
    if (isEmpty(L)) {
        cout << "List kosong\n";
    } else if (first(L) == last(L)) {
        P = first(L);
        first(L) = last(L) = NIL;
    } else {
        P = last(L);
        last(L) = prev(P);
        next(last(L)) = NIL;
        prev(P) = NIL;
    }
}

int length(List L) {
    int count = 0;
    address P = first(L);
    while (P != NIL) {
        count++;
        P = next(P);
    }
    return count;
}

address findElement(List L, string username) {
    address P = first(L);
    while (P != NIL) {
        if (info(P).username == username) {
            return P;
        }
        P = next(P);
    }
    return NIL;
}

void printList(List L) {
    if (isEmpty(L)) {
        cout << "List Kosong\n";
        return;
    }
    cout << "===== DATA LIST =====\n";
    address P = first(L);
    int i = 1;
    while (P != NIL) {
        cout << "Data ke-" << i++ << ":\n";
        cout << "  ID Post   : " << info(P).idPost << endl;
        cout << "  Content   : " << info(P).contentPost << endl;
        cout << "  Like      : " << info(P).jmlLike << endl;
        cout << "  Username  : " << info(P).username << endl;
        cout << "--------------------------\n";
        P = next(P);
    }
}
