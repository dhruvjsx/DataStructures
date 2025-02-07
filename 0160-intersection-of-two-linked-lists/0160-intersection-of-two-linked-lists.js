/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */
var getIntersectionNode = function(headA, headB) {
    let hashSet = new Set();


    let tempA = headA;


    while (tempA){
        hashSet.add(tempA)
        tempA= tempA.next;

    }

    let tempB = headB;

    while(tempB){
        if(hashSet.has(tempB)){
            return tempB;
        }
        tempB=tempB.next;
    }
    return null;
};