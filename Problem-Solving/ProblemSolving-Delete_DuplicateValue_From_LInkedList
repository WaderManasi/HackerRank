////////////////////////////////////////C++ solution//////////////////////////

//function to remove any number of duplicate nodes present in linkedlist
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp=head;
        if(head==NULL)
            return NULLum;
        while(head->next!=NULL)
        {
            if(head->data==head->next->data)
            {
                head->next=head->next->next;
            }
            else
                head=head->next;
        }
       return temp;
}
//////////////////////////////////end of function///////////////////////////
