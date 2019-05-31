#include <iostream>

using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
Node *NewNode(int data)
{
    Node *node = new Node;
    node->data = data;
    node->next = NULL;
    return node;
}
int alivesol(int Num)
{
    if(Num == 1)
        return 1;

    Node* last = NewNode(1);
    last->next = last;

    Node* curr;

    for (int i = 2 ; i <= Num ; i++)
    {
        Node* tmp = NewNode(i);
        tmp->next = last->next;
        last->next = tmp;
        last = last->next;
    }

    curr = last->next;

    while(curr->next != curr)
    {
        Node* n1 = curr->next;
        curr->next = n1->next;
        delete n1;
        curr = curr->next;
    }
    int d = curr->data;
    delete curr;
    return d;
}
int main()
{
    cout<<alivesol(5);
    return 0;
}
