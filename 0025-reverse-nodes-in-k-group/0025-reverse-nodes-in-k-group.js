/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} k
 * @return {ListNode}
 */
var reverseKGroup = function(head, k) {
    function getKthNode (temp, k){
    k-=1;
    
    while(temp!==null && k>0){
        temp=temp.next;
        k--;
    }
    
    return temp;
}
function reverseLinkedList(head){
    let temp = head;
    
    let next=null;
    let prev=null;
    while(temp!==null){
        next = temp.next;
        temp.next= prev;
        prev= temp;
        temp= next;
    }
    
   return prev;
}
function printLinkedList(head) {
    let temp = head;
    let result = "";
    while (temp !== null) {
        result += temp.data + " ";
        temp = temp.next;
    }
    console.log(result);
}

let temp= head;
    let prevLast= null
    while(temp!==null){
        
  let kThNode =getKthNode(temp,k);
  
  if(kThNode ==null){
      if(prevLast){
      prevLast.next=temp;
      }
      break;
    }
    
    
      let nextNode = kThNode.next;
      kThNode.next= null;
      
      reverseLinkedList(temp);
      
      if(temp==head){
          head=kThNode
      }else{
             prevLast.next = kThNode;
      }
      prevLast =temp;
      temp = nextNode;
      
 }
    
    return head;
};