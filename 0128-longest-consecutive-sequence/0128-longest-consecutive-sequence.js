/**
 * @param {number[]} nums
 * @return {number}
 */
var longestConsecutive = function (nums) {
    var lastSamller = -Infinity;
    var cnt = 0;
    var longest = 0;

    nums.sort((a, b) => a - b)
    for (var i = 0; i < nums.length; i++) {
        if (nums[i] - 1 == lastSamller) {
            lastSamller = nums[i];
            cnt++;
        } else if(nums[i]!==lastSamller){
            lastSamller = nums[i];
            cnt=1;
        }
        longest = Math.max(longest, cnt);
    }


    return longest
};