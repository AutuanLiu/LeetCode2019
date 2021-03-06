#
# @lc app=leetcode.cn id=223 lang=python3
#
# [223] 矩形面积
#
# https://leetcode-cn.com/problems/rectangle-area/description/
#
# algorithms
# Medium (41.13%)
# Likes:    29
# Dislikes: 0
# Total Accepted:    2.9K
# Total Submissions: 7.1K
# Testcase Example:  '-3\n0\n3\n4\n0\n-1\n9\n2'
#
# 在二维平面上计算出两个由直线构成的矩形重叠后形成的总面积。
#
# 每个矩形由其左下顶点和右上顶点坐标表示，如图所示。
#
#
#
# 示例:
#
# 输入: -3, 0, 3, 4, 0, -1, 9, 2
# 输出: 45
#
# 说明: 假设矩形面积不会超出 int 的范围。
#
#
# 两个矩形的面积减去重叠部分的面积
class Solution:
    def computeArea(self, A: int, B: int, C: int, D: int, E: int, F: int, G: int, H: int) -> int:
        area1 = (C - A) * (D - B)
        area2 = (G - E) * (H - F)
        if E >= C or F >= D or G <= A or H <= B:
            return area1 + area2
        overlap = (min(C, G) - max(A, E)) * (min(D, H) - max(B, F))
        return area1 + area2 - overlap
