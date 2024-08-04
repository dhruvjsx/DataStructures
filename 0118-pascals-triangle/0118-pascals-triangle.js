/**
 * @param {number} numRows
 * @return {number[][]}
 */

 


function generateRow(row) {
    let ans = 1;
    let ansRow = [1]; // inserting the 1st element
  
    // calculate the rest of the elements:
    for (let col = 1; col < row; col++) {
      ans = ans * (row - col);
      ans = ans / col;
      ansRow.push(ans);
    }
    return ansRow;
}
  
var generate = function(numRows) {
      let ans = [];

    // store the entire pascal's triangle:
    for (let row = 1; row <= numRows; row++) {
        ans.push(generateRow(row));
    }
    return ans;
};