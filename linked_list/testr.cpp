

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
      int hcf(int a,int b){
        if(a>b){
            for(int i=b;i>=2;i--){
                if(a%i==0){
                    return i;
                }
            }
        }
         if(a<b){
            for(int i=a;i>=2;i--){
                if(b%i==0){
                    return i;
                }
            }
        }
        return 1;
      }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* ans;
        int a=0;
        int b=0;
        ans=head;
        while(head->next==NULL){
            a=head->val;
            head=head->next;
            b=head->val;
            ListNode* temp = new ListNode(hcf(a,b));
            ans->next=temp;
            ans=ans->next;
            ans->next=head;
        }
        return ans;
        
    }
};