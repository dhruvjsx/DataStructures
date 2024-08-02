/**
 * @param {number[]} nums
 * @return {boolean}
 */
var check = function (nums) {
    var rotationPoint = 0
    for (var i = 1; i < nums.length; i++) {
        if (nums[i] < nums[i - 1]) {
            rotationPoint++;
        }
    } 
    if (rotationPoint == 0) { 
        return true 
        }
    else if (rotationPoint == 1 && nums[0] >= nums[nums.length - 1]){
          return true;
    }
       
    else
        return false;
};