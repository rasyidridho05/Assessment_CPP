#ifndef DLL_H
#define DLL_H
#include <iostream>
#include <string>
using namespace std;

#define first(L) (L).First
#define last(L) (L).Last
#define next(P) (P)->next
#define prev(P) (P)->prev
#define info(P) (P)->info
#define NIL NULL

typedef struct {
    string idPost;
    string contentPost;
    int jmlLike;
    string username;
} infotype;

typedef struct Elmlist *address;

struct Elmlist {
    infotype info;
    address next;
    address prev;
};

struct List {
    address First;
    address Last;
};


void createList(List &L);
address allocate(infotype x);
bool isEmpty(List L);
void insertLast(List &L, address P);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
int length(List L);
address findElement(List L, string username);
void printList(List L);

#endif
