class Solution {
public:
    int length(ListNode*head)
    {
        int count=0;
        ListNode*temp=head;
        while(temp!=nullptr)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode*temp1=headA;
        ListNode*temp2=headB;
       
       if(length(headA)>length(headB))
       {
        int a =length(headA)-length(headB);
        for(int i=0;i<a;i++)
        {
            if(temp1==temp2)
            {
                return temp1;
            }
            temp1=temp1->next;
        }

       }
       else if(length(headA)<length(headB))
       {
        int a =length(headB)-length(headA);
        for(int i=0;i<a;i++)
        {
            if(temp2==temp1)
            {
                return temp2;
            }
            temp2=temp2->next;
        }
       }
      
        while(temp1!=nullptr && temp2!=nullptr)
        {
            if(temp1==temp2)
            {
                return temp1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
       
       return nullptr;
    }
};