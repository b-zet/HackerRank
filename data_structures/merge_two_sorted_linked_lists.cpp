// https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem

// solution code
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* result{nullptr};
    SinglyLinkedListNode* node{nullptr};

    // setting entry point
    if((head1->data)<(head2->data)){
        result=head1;
        node = head1;
        head1=head1->next;
    } else {
        result=head2;
        node = head2;
        head2=head2->next;
    }

    // sorting the middle
    while(head1!=nullptr && head2!=nullptr){
        if((head1->data)<(head2->data)){
            node->next = head1;
            node = head1;
            head1 = head1->next;
        } else {
            node->next = head2;
            node = head2;
            head2 = head2->next;
        }
    }

    // merging the end
    if (head1!=nullptr) node->next = head1;
    if (head2!=nullptr) node->next = head2;

    return result;
}