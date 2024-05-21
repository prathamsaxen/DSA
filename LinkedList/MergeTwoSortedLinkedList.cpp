/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 *
 *
 */
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int data)
    {
        this->val = data;
    }
};
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *final = new ListNode(-1);
        ListNode *ref = final;
        ListNode *traverse1 = list1;
        ListNode *traverse2 = list2;

        while (traverse1 != NULL && traverse2 != NULL)
        {
            if (traverse1->val < traverse2->val)
            {
                final->next = traverse1;
                final = final->next;
                traverse1 = traverse1->next;
            }
            else if (traverse1->val > traverse2->val)
            {
                final->next = traverse2;
                final = final->next;
                traverse2 = traverse2->next;
            }
            else
            {
                final->next = traverse1;
                traverse1 = traverse1->next;
                final = final->next;
                final->next = traverse2;
                traverse2 = traverse2->next;
                final = final->next;
            }
        }
        while (traverse1 != NULL)
        {
            final->next = traverse1;
            final = final->next;
            traverse1 = traverse1->next;
        }
        while (traverse2 != NULL)
        {
            final->next = traverse2;
            final = final->next;
            traverse2 = traverse2->next;
        }
        return ref->next;
    }
};