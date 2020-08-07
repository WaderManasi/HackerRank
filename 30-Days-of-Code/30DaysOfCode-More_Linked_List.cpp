Node* removeDuplicates(Node *head)
          {
            Node* temp=head;
           if(head==NULL || head->next==NULL)
                return head;
            else if(temp->data==temp->next->data)
            {
                temp->next=temp->next->next;
                removeDuplicates(temp);
            }
            else{
                removeDuplicates(temp->next);
            }
            return head;
          }
