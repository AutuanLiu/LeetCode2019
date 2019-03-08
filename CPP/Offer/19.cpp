class Solution
{
  public:
    vector<int> printMatrix(vector<vector<int>> matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> result;
        if (row == 0 || col == 0)
            return result;
        int left = 0, right = col - 1, top = 0, btm = row - 1;
        while (left <= right && top <= btm)
        {
            for (int i = left; i <= right; i++)
                result.push_back(matrix[top][i]);
            if (top < btm)
                for (int i = top + 1; i <= btm; i++)
                    result.push_back(matrix[i][right]);
            if (top < btm && left < right)
                for (int i = right - 1; i >= left; i--)
                    result.push_back(matrix[btm][i]);
            if (top + 1 < btm && left < right)
                for (int i = btm - 1; i >= top + 1; i--)
                    result.push_back(matrix[i][left]);
            left++;
            right--;
            top++;
            btm--;
        }
        return result;
    }
};


class Solution
{
  public:
    vector<int> printMatrix(vector<vector<int>> matrix)
    {
        vector<int> res;
        int n = matrix.size();
        int m = matrix[0].size();
        int layer = (min(m, n) - 1) / 2 + 1;
        for (int i = 0; i < layer; i++)
        {
            for (int j = i; j < m - i; j++)
                res.push_back(matrix[i][j]);
            for (int k = i + 1; k < n - i; k++)
                res.push_back(matrix[k][m - i - 1]);
            for (int p = m - i - 2; (p > i - 1) && (n - i - 1 != i); p--)
                res.push_back(matrix[n - i - 1][p]);
            for (int q = n - i - 2; (q > i) && (m - i - 1 != i); q--)
                res.push_back(matrix[q][i]);
        }
        return res;
    }
};

// 使用翻转矩阵的思路
class Solution
{
  public:
    vector<int> printMatrix(vector<vector<int>> matrix)
    {
        vector<int> res;
        while (matrix.size() > 0)
        {
            for (int i = 0; i < matrix[0].size(); i++)
                res.push_back(matrix[0][i]);   // 取出第一行
            matrix.erase(matrix.begin());   // 删除第一行
            if (matrix.size() <= 0 || matrix[0].size() <= 0)
                break;
            matrix = turn(matrix);
        }
        return res;
    }

    vector<vector<int>> turn(vector<vector<int>> matrix)
    {
        vector<vector<int>> newmat;
        for (int i = matrix[0].size() - 1; i >= 0; i--)
        {
            vector<int> newmat2;
            for (int j = 0; j < matrix.size(); j++)
                newmat2.push_back(matrix[j][i]);
            newmat.push_back(newmat2);
        }
        return newmat;
    }
};
