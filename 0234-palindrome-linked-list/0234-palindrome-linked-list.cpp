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

  ListNode* reverse(ListNode* head)
  {
    if(head==nullptr || head->next==nullptr)
    {
        return head;
    }

    ListNode* prev=nullptr;
    

    while(head!=nullptr)
    {
         ListNode* front=head->next;
         
         head->next=prev;
         prev=head;
         head=front;
         
    }
         return prev;

  }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(head==nullptr || head->next==nullptr)
        {
            return true;
        }
        while(fast->next!=nullptr && fast->next->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newhead=reverse(slow->next);
        ListNode* second=newhead;
        ListNode* first=head;
        while(second!=nullptr)
        {
            if(first->val==second->val)
            {
                first=first->next;
                second=second->next;
            }
            else
            {
                return false;
            }
        }
        reverse(newhead);
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna