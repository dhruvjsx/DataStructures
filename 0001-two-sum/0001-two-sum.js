/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
   var map = new Map();

    for(var [index, num] of nums.entries()){
        var moreNeeded = target - num;

        if(map.has(moreNeeded)){
            return [map.get(moreNeeded), index]; // Return indices of the two numbers
        }
        map.set(num, index); // Store the number as key and index as value
    }
    return [];
  
};