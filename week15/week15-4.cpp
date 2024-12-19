//add two numbers II(要用到add two numbers)

class Solution {
public:
    ListNode* myReverse(ListNode* l1) {
        vector<int> a;//伸縮自如的陣列
        while(l1 != nullptr){//只要還有node 
            a.push_back(l1->val);//就把數值放入陣列裡
            l1=l1->next;//換下一筆
        }//想先做(倒過來)
       ListNode* ans = new ListNode();//新準備好ans node
       ListNode* now=ans;//現在處理的node  
       int N=a.size();
        for (int i=N-1;i>=0;i--)
        {
            now->next=new ListNode(a[i]);
            now=now->next;
        }
        return ans->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    return myReverse(l1);
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