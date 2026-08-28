/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        unordered_set<ListNode*> st;
        // List A ke saare nodes store karenge
        ListNode* temp = headA;
        while (temp != NULL) {
            st.insert(temp);
            temp = temp->next;
        }
        // List B ke nodes check karenege
        temp = headB;
        while (temp != NULL) {
            if (st.find(temp) != st.end()) {
                return temp;
            }
            temp = temp->next;
        }
        return NULL;
    }
};