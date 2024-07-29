#include <iostream>
using namespace std;
class linklist1
{

public:
    int data;
    linklist1 *next;
    //constructor
linklist1(int data){
    this->data = data ;
     this->next = NULL;
}
};
// linklist1* &head becaouse want to do changes in the original linked list not in copy or to make copy.
void insert_at_head(int data, linklist1* &head){
    //new node 
    linklist1 * temp = new linklist1(data);
    temp->next= head;
    head = temp;
}
void insert_at_tail(int data,linklist1* &head, linklist1* &tail){
    //new node 
    linklist1 * temp = new linklist1(data);
     // If the tail is null, it means the list was empty
   if (tail == NULL) {
        head = tail = temp;
        return;
    }
    tail->next = temp;
    tail = tail->next;  
}
// void insert_at_position(int position, int data,linklist1* &head){
//     //new node 
//     linklist1* temp = head;
//     int count =1 ;
//     while(count <position-1 ){
//         temp = temp->next;
//         count++;
//     }
//     linklist1 * nodeToInsert = new linklist1(data);
//     nodeToInsert->next = temp->next;
//     temp->next = nodeToInsert;  
// }
void insert_at_position(int position, int data, linklist1* &head) {
    // Special case for inserting at the head
    if (position == 1) {
        insert_at_head(data, head);
        return;
    }

    linklist1* temp = head;
    int count = 1;

    // Traverse the list until the position before the desired insertion point
    while (count < position - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    // If temp is NULL, the position is beyond the length of the list
    if (temp == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }

    // Insert the new node
    linklist1* nodeToInsert = new linklist1(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void print(linklist1* &head){
    linklist1 * temp = head;
    while(temp != NULL){
        cout<<temp ->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
 
 linklist1* Node1 = new linklist1(10);

 //cout<<Node1 -> data<<endl;
 //cout<<Node1 -> next<<endl;

 linklist1* head = Node1;
 
 linklist1* tail = Node1;
 insert_at_head(8,head);
insert_at_head(6,head);

insert_at_tail(16,head,tail);
insert_at_tail(18,head,tail);
insert_at_position(4,12,head);
insert_at_position(5,14,head);
 print(head);
 cout<<head -> data<<endl;
 cout<<tail -> data<<endl;
    return 0;

}