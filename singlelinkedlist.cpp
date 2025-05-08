#include <iostream>
#include <string.h>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
};

class LinkedList
{
    Node *START;

public:
    LinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\nMasukkan Nomor Mhasiswa: ";
        cin >> nim;

        Node *nodeBaru = new Node;
        NodeBaru->noMhs = nim;

        if (STAR == NULL || nim <= START->Mhs))
            {
                if ((START != NULL &&(nim == START->noMhs)) {
                        cout << "\nDuplikasi noMhs tidak diijinkan\n";
                        return;
                    })
            }
    }
}