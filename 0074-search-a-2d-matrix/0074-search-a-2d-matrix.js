/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(arr, target) {
    let n = arr.length;
    let m =arr[0].length;


    let left=0, right =n*m-1;


    while(left<=right){
        let mid = Math.floor((left+right)/2)
        let row = Math.floor(mid/m);
        let col =mid%m;


        if(arr[row][col]==target)return true
        else if(arr[row][col]>target) right =mid-1
        else left=mid+1


    }
    return false;
};