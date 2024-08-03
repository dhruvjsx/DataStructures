/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    var zero=0;
    var two =nums.length-1;
var mid=0;
while(mid<=two){
    if(nums[mid]==0){
        [nums[mid],nums[zero]]=[nums[zero],nums[mid]];
        zero++
    }else if(nums[mid]==2){
        [nums[mid],nums[two]]=[nums[two],nums[mid]];
        two--;
    }

    mid++;
}
};