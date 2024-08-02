/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let set = new Set(nums);

    let uniqueArray = Array.from(set);

    for (var i =0; i<nums.length; i++){
        nums[i]=uniqueArray[i];
    }

return set.size
};