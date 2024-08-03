/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    var cnt=0;
    var maxi=0;

    for(var num of nums){
        if(num==1){
            cnt++;
            maxi= Math.max(maxi,cnt);
        }else{
            cnt=0;
        }
    }

    return maxi
};