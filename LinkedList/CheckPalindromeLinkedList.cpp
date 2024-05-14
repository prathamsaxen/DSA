#include <iostream>
using namespace std;

class ListNode
{
    public:
    int val;
    ListNode next;
private:
    ListNode *getMiddle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    ListNode *reverseLinkedList(ListNode *head)
    {
        ListNode *previous = nullptr;
        ListNode *current = head;
        ListNode *forward = nullptr;

        while (current != nullptr)
        {
            forward = current->next;
            current->next = previous;
            previous = current;
            current = forward;
        }
        return previous;
    }

    int lengthofLinkedList(ListNode *head)
    {
        int count = 0;
        ListNode *temp = head;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

public:
    bool isPalindrome(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
            return true;

        if (lengthofLinkedList(head) % 2 == 0)
        {
            // If the length of the linked list is even
            int middleIndex = lengthofLinkedList(head) / 2;
            ListNode *middle = head;
            int count = 0;
            while (count < middleIndex - 1)
            {
                middle = middle->next;
                count++;
            }
            std::cout << "Middle value: " << middle->val << std::endl;
            ListNode *temp = middle->next;
            middle->next = nullptr;
            ListNode *reversedSecondHalf = reverseLinkedList(temp);
            ListNode *check1 = head;
            ListNode *check2 = reversedSecondHalf;
            while (check2 != nullptr)
            {
                if (check1->val != check2->val)
                {
                    // Restore the original list structure
                    middle->next = reverseLinkedList(reversedSecondHalf);
                    return false;
                }
                check1 = check1->next;
                check2 = check2->next;
            }
            // Restore the original list structure
            middle->next = reverseLinkedList(reversedSecondHalf);
            return true;
        }
        else
        {
            // If the length of the linked list is odd
            ListNode *middle = getMiddle(head);
            ListNode *temp = middle->next;
            middle->next = nullptr; // Disconnect the first half from the second half
            std::cout << "Middle value: " << middle->val << std::endl;

            ListNode *reversedSecondHalf = reverseLinkedList(temp);
            ListNode *check1 = head;
            ListNode *check2 = reversedSecondHalf;

            while (check2 != nullptr)
            {
                if (check1->val != check2->val)
                {
                    // Restore the original list structure
                    middle->next = reverseLinkedList(reversedSecondHalf);
                    return false;
                }
                check1 = check1->next;
                check2 = check2->next;
            }
            // Restore the original list structure
            middle->next = reverseLinkedList(reversedSecondHalf);
            return true;
        }
        // return true;
    }
};