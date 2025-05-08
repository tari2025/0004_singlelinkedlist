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

        if (STAR == NULL || nim <= START->Mhs)
        {
                if ((START != NULL &&(nim == START->noMhs))
                 {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
                    }
                    node Baru->next = START;
                    START = nodeBaru;
                    return;
        }

        Node *previous = START;
        Node *current = START;

        while ((current != NULL) && (nim >= current->noMhs))
        {
            if (nim == current->noMhs)
            {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
            previous = current;
            current = current->next;
        }

        nodeBaru->next = current;
        previous->next = nodeBaru;
    }

    bool listEmpty()
    {
        return (START == NULL);
    }
}
