#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

Node* addNode(int x){
    if(head == NULL)
    {
        head = new struct Node;
        head->data = x;
        head->next = NULL;
    return head;
    }
    else
    {
        struct Node *temp = head;

        if(temp->next !=NULL)
        {
            temp = temp->next;
        }

        temp->next = new struct Node;
        temp->next->data = x;
        temp->next->next = NULL;
    }
return head;
}

void print()
{
    struct Node *temp = head;
    while(temp!=NULL)
    {
        cout<< temp->data <<"->";
        temp = temp->next; 
    } 
}

int main()
{
    int temp=0;
    for(int i=0;i<5;i++)
    {
        // fflush(stdin);
        cin>>temp;
        addNode(temp);
    }

    print();
    // getch();
return 0;
}