/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = (nums, hashSet = new Set(nums)) => {
    return nums.length > hashSet.size;
}