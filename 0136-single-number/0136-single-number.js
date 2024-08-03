/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    var xor=0;
    for(let num of nums){
xor=xor^num;
    }

    return xor;
};