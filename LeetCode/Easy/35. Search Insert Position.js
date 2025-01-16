/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function (nums, target) {
  let result = 0;
  for (let i = 0; i < nums.length; ++i) {
    if (nums[i] == target) return i;
    if (target > nums[i]) result = i + 1;
  }

  return result;
};
