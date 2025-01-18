/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    let newDigits = BigInt(digits.join(""));
    let number = newDigits + BigInt(1)
    let nums = number.toString().split("");
    let result = nums.map(Number);

    return result;
};