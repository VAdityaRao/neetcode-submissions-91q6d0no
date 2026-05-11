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
    bool hasCycle(ListNode* head) {

        unordered_map <ListNode *, int> node_map;

        ListNode * curr = head;
        int index = 0;

        while (curr) {

            
            
            //check if curr is in the map or the set
            // if yes return true

            if ( node_map.contains(curr) ) return true;

            node_map[curr] = index;
            // if no add the curr as key with value as index
            
            curr = curr -> next;
            index ++;

        }

        return false;
        
    }
};
