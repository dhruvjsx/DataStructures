/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {

    const array = s.split('')
    if(s.length ==0){
        return 0
    }
   if (s.trim().length === 0) {
        return 1
    }
    let maxi = -Infinity;
  
    for (let i = 0; i < array.length; i++) {
  const map = new Set()
        for (let j = i; j < array.length; j++) {
            if (map.has(array[j])) {

                maxi = Math.max(maxi, j - i);
                break;
            }
            map.add(array[j])
            maxi = Math.max(maxi, j - i);
        }
    }
    return maxi
};