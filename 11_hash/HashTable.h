#pragma once
#include <iostream>
#include <list>
using namespace std;

class HashTable
{
    int capacity;
    list<int>* chair;

public:
    HashTable(int V);
    void Insert(int key, int data);
    void Remove(int key);


    int CheckPrime(int n)
    {
        int i;
        if (n == 1 || n == 0)
        {
            return 0;
        }
        for (i = 2; i < n / 2; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
    int GetPrime(int n)
    {
        if (n % 2 == 0)
        {
            n++;
        }
        while (!CheckPrime(n))
        {
            n += 2;
        }
        return n;
    }

    int HashFunction(int key)
    {
        return (key % capacity);
    }
    void DisplayHash();
};

