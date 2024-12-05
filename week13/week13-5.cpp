//leetcode merge two sorted lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();//準備一個新的ListNode要放答案
        ListNode* now = ans;//會移動的小指標,下一步,用的
        while(list1 != nullptr || list2 != nullptr){//只要不是空的
            if(list1==nullptr){//左邊空,接右
                now->next = list2;//接上右邊
                list2 = nullptr;//右邊順手清空,要結束
            }else if(list2 == nullptr){//右邊空,接左
                now->next = list1;//接上左邊
                list1 = nullptr;//左邊順手清空,要結束
            }else if(list1->val < list2->val){//右邊空,接左
                now->next = new ListNode(list1->val);
                list1 = list1->next;
            }else{
                now->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            now=now->next;
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