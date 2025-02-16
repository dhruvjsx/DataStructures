/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {boolean}
 */
var isPalindrome = function(head) {
    function reverseLinkedList(head){
        let temp = head;
        let prev= null, next= null;
        while(temp!== null){
            next= temp.next;
            temp.next = prev;
            prev= temp;
            temp =next;
         }

        return prev
    }


    let slow=head;
    let fast = head;

    while(fast.next!==null && fast.next.next!==null){

        slow=slow.next;
        fast = fast.next.next;
    }
let newHead = reverseLinkedList(slow.next)
    let firstHead = head;
    let secondHead=newHead;

    while(secondHead!==null){
        if(firstHead.val !== secondHead.val){
            reverseLinkedList(newHead);
            // Not a palindrome
            return false;
        }

        firstHead=firstHead.next;
        secondHead=secondHead.next
    }
      reverseLinkedList(newHead);

      return true;
};