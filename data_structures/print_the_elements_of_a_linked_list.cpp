// https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem

// solution code
void printLinkedList(SinglyLinkedListNode* head) {
    while(head!=nullptr){
        cout << head->data<<endl;
        head = head->next;
    }
}