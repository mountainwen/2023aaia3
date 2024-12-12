//add two numbers 兩數相加,最多100位數(未完)
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();//準備好新的答案
        ListNode* now = ans;//(現在) 要處理的node
        int carry=0; 
        while(l1 != nullptr&&l2 != nullptr){//把list 1都複製到ans的now裡
            int here = l1->val + l2->val +carry;
            carry = here/10;
            now->next = new ListNode(here%10);//新準備1個值
            now=now ->next;//換下一筆
            l1=l1->next;//換下一筆
            l2=l2->next;
        }
        return ans->next;
    }
};
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