/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var nextPermutation = function (nums) {
    let breakpoint = -1;
    for (let i = nums.length - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            breakpoint = i;
            break;
        }
    }

    if (breakpoint == -1) {
        // reverse the whole array:
        nums.reverse();
        return nums;
    }

    for (let j = nums.length -1; j < breakpoint; j--) {
        if (nums[j] > nums[breakpoint]) {
            [nums[j], nums[breakpoint]] = [nums[breakpoint], nums[j]]; // swap A[i] and A[ind]
            break;
        }
    }
    nums.splice(breakpoint + 1, nums.length - breakpoint - 1, ...nums.slice(breakpoint + 1).reverse())
    return nums


};