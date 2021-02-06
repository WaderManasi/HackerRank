///////////////////////////////C++ solution//////////////////////////////////////////

///function to get merge point of two linkedlists
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
   SinglyLinkedListNode* temp1 = head1;
   SinglyLinkedListNode* temp2 = head2;
    while(temp1!=temp2){
        if(temp1->next==NULL){
            temp1=head2;
        }else{
            temp1=temp1->next;
        }

        //if next field is NULL
        if(temp2->next==NULL){
            temp2=head1;
        }else{
            temp2=temp2->next;
        }
    }
    return temp2->data;
    //or return temp1->data
}
//////////////end of code////////////////////////////////////////////////////////////
