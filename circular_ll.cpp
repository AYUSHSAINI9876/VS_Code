#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class circular_list
{
    Node *head;
    Node *tail;

public:
    circular_list()
    {
        head = tail = NULL;
    }
    void insert_at_head(int val)
    {
        Node *newnode = new Node(val);
        if (tail == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        else
        {
            newnode->next = head;
            head = newnode;
            tail->next = head;
        }
    }
    void insert_at_tail(int val)
    {
        Node *newnode = new Node(val);
        if (tail == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        else
        {
            newnode->next = head;
            tail->next = newnode;
            tail = newnode;
        }
    }
    void delete_at_head()
    {
        if (head == NULL)
        {
            return;
        }
        else if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
    void delete_at_tail()
    {
        if (head == NULL)
        {
            return;
        }
        else if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node *temp = tail;
            Node *prev = head;
            while (prev->next != tail)
            {
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
    void print()
    {
        if (head == NULL)
            return;
        cout << head->data << "->";
        Node *temp = head->next;
        while (temp != head)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
};

int main()
{
    circular_list cll;
    cll.insert_at_head(1);
    cll.insert_at_head(2);
    cll.insert_at_head(3);
    cll.insert_at_head(10);
    cll.delete_at_head();
    cll.delete_at_tail();
    cll.print();
    return 0;
}