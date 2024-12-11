/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var setZeroes = function(matrix) {

const row = new Array(matrix.length).fill(0);
const column= new Array(matrix[0].length).fill(0);

for(let i =0 ;i <matrix.length; i++){
    for(let j =0; j<matrix[0].length; j++){
        if(matrix[i][j]==0){
            row[i]=1;
            column[j]=1;
        }
    }
}

for(let i =0; i<matrix.length; i++){
    for(let j=0 j<matrix[0].length ;j++){
        if(row[i]|| col[j]){
            matrix[i][j]==0
        }
    }
}

return matrix
};