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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp=head;
        if(temp==nullptr || temp->next==nullptr)
        {
            return nullptr;
        }
        int len=0;
        while(temp!=nullptr)
        {
            temp=temp->next;
            len++;
        }
        int updatedn=len-n;
        if(updatedn==0)
        {
            return head->next;
        }
        temp=head;
        while(updatedn>0)
        {
            updatedn--;
            if(updatedn==0)
            {
                temp->next=temp->next->next;
                break;
            }
            temp=temp->next;

        }
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna