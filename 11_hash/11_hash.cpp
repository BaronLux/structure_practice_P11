#include <iostream>
#include <list>
#include "HashTable.h"
using namespace std;


int main()
{
    setlocale(0, "");

    int key[] = { 6, 5, 4, 3, 2, 1 };
    int data[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(key) / sizeof(key[0]);

    auto h = new HashTable(n);

    for (int i = 0; i < n; i++)
        h->Insert(key[i], data[i]);

    h->Remove(12);
    h->DisplayHash();
}