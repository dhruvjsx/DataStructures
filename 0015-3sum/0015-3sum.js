/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    nums.sort((a,b)=>a-b)
    var ans=[]
    for(var i=0; i<nums.length; i++){
        if(i!==0 && nums[i]===nums[i-1])continue;

        var j=i+1;
        var k=nums.length-1;
        while(j<k){
            var sum=nums[i]+nums[j]+nums[k];

            if(sum<0){
                 j++
            }
            else if(sum>0){
                k--;
            }else{
                let temp=[nums[i],nums[j],nums[k]];
                ans.push(temp)
                j++;
                k--;

                while(j<k && nums[j]==nums[j-1])j++;
                while(j<k && nums[k]===nums[k+1])k--;
            }
        }
    }
    return ans
};