#include "HashTable.h"

HashTable::HashTable(int c)
{
    int size = GetPrime(c);
    this->capacity = size;
    chair = new list<int>[capacity];
}
void HashTable::Insert(int key, int data)
{
    int index = HashFunction(key);
    chair[index].push_back(data);
}

void HashTable::Remove(int key)
{
    int index = HashFunction(key);

    list<int>::iterator iter;
    for (iter = chair[index].begin();
        iter != chair[index].end(); iter++)
    {
        if (*iter == key)
            break;
    }

    if (iter != chair[index].end())
        chair[index].erase(iter);
}

void HashTable::DisplayHash()
{
    for (int i = 0; i < capacity; i++)
    {
        cout << "Chair[" << i << "]";
        for (auto x : chair[i])
            cout << " --> " << x;
        cout << endl << "Table[" << i << "]";
        for (auto x : chair[i])
            cout << " --> " << x;
        cout << endl;
    }
}