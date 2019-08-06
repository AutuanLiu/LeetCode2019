/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 *
 * https://leetcode-cn.com/problems/plus-one/description/
 *
 * algorithms
 * Easy (37.12%)
 * Total Accepted:    34.7K
 * Total Submissions: 93.5K
 * Testcase Example:  '[1,2,3]'
 *
 * 给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。
 *
 * 最高位数字存放在数组的首位， 数组中每个元素只存储一个数字。
 *
 * 你可以假设除了整数 0 之外，这个整数不会以零开头。
 *
 * 示例 1:
 *
 * 输入: [1,2,3]
 * 输出: [1,2,4]
 * 解释: 输入数组表示数字 123。
 *
 *
 * 示例 2:
 *
 * 输入: [4,3,2,1]
 * 输出: [4,3,2,2]
 * 解释: 输入数组表示数字 4321。
 *
 *
 */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        int n = digits.size(), carry = 1; // 原始进位为 1
        for (int i = n - 1; i >= 0; i--) {
            int tmp = digits[i] + carry;
            digits[i] = tmp % 10;
            carry = tmp / 10; // 更新进位
        }
        // 存在最高位进位 首部插入进位 1
        if (carry != 0)
            digits.insert(digits.begin(), carry);
        return digits;
    }
};
