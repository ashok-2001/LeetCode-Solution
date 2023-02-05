class Solution
{
public:
    int findLen(Node* head){
        int len=0;
        Node* temp=head;
        while(temp){
            len++;
            temp=temp->next;
        }
        return len;
    }
    int intersectPoint(Node* head1, Node* head2)
    {
        int len1=findLen(head1), len2=findLen(head2);
        if(!len1 || !len2) return -1;
        Node* temp1=head1, *temp2=head2;
        while(len1>len2){
            len1--;
            temp1=temp1->next;
        }
        while(len2>len1){
            len2--;
            temp2=temp2->next;
        }
        while(temp1){
            if(temp1==temp2) return temp1->data;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return -1;
        
        // Your Code Here
        // unordered_set<Node*> set;
        // Node* temp=head1, *temp2=head2;
        // while(temp){
        //     set.insert(temp);
        //     temp=temp->next;
        // }
        // while(temp2){
        //     if(set.find(temp2)!=set.end()) return temp2->data;
        //     temp2=temp2->next;
        // }
        // return -1;
    }
};
