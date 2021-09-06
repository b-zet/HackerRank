// https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem

// solution code
int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    vector<int> arr;
    int counter{0};

    while(llist!=nullptr){
        arr.push_back(llist->data);
        counter++;
        llist=llist->next;
    }
    return arr[counter-positionFromTail-1];
}