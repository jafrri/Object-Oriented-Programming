#include<iostream>
using namespace std;
//Implement the functions in Linked list to  make main() function working properly.
class node
{
    public:
        int data;
        node *next;

};
class LinkedList
{
    public:
    node* head = NULL;

    void addnode_last(int value)
    {
        node* newnode = new node();
        newnode->data = value;
        newnode->next = NULL;

        if (head == NULL)
            head = newnode;
        else
        {
            node* temp = head;
            while(temp->next != NULL )
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }


        
    }
    void addnode_first(int value)
    {
        node* x=new node();
        x->data=value;
        x->next=head;

        head=x;
    }
    void display()
    {
            node* temp = head;
            while(temp != NULL )
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
        cout<<endl;    
    }

    void addnode_atPosition(int value , int pos){
        node* newnode = new node();
        newnode->data = value;
        newnode->next = NULL;

        if (pos == 1) {
            newnode->next = head;
            head = newnode;
        }

        node* temp = head;
        for (int i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }


        newnode->next = temp->next;
        temp->next = newnode;
    }

    void removeFromLast(){
        if (head->next == NULL) {
            delete head;
            head = NULL;
        }

        node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    

    void removeFromFront(){
        node* temp = head;
        head = head->next;
        delete temp;
    }

    void removeFromPosition(int pos){

        node* temp = head;
        if (pos == 1) {
            head = temp->next;
            delete temp;
        }

        for (int i = 1; temp != NULL && i < pos - 1; i++) {
            temp = temp->next;
        }



        node* next = temp->next->next;
        delete temp->next;
        temp->next = next;
    }

};


int main()
{
    LinkedList lst;

    lst.addnode_last(23);
    lst.addnode_last(3434);
    lst.addnode_last(222);
    lst.addnode_last(12);

    lst.display(); // 23 3434 222 12

    lst.addnode_first(66);
    lst.addnode_first(3556);
    lst.addnode_first(542);


    lst.display(); // 542 3556 66 23 3434 222 12

    lst.addnode_atPosition(231 , 3);
    lst.display(); // 542 3556 231 66 23 3434 222 12
    lst.addnode_atPosition(154 , 7);
    lst.display(); // 542 3556 231 66 23 3434 154 222 12

    lst.removeFromLast();
    lst.display(); // 542 3556 231 66 23 3434 154 222
    
    lst.removeFromFront();
    lst.display(); // 3556 231 66 23 3434 154 222

    lst.removeFromPosition(4); //4th element will be removed
    lst.display(); // 3556 231 66 3434 154 222


    return 0;
}