/*
 * @lc app=leetcode.cn id=461 lang=cpp
 *
 * [461] 汉明距离
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        std::string a= get2(x);
        std::string b= get2(y);
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        int sum = 0;
        for(int i=0;i<a.length();i++)
        {
            if(a[i] != b[i])
            {
                sum ++;
            }
        }
        return sum;
    }

    std::string get2(int n)
    {
        int i=0;
        int a[32];
        for (int j=0; j<32;j++)
        {
            a[j] = 0;
        }
        for(i=0; n>0; i++)    
        {    
            a[i]=n%2;    
            n= n/2;  
        }  
        std::string l="";
        for(i=31 ;i>=0 ;i--)    
        {    
            l = l + std::to_string(a[i]);    
        }//原文出自【易百教程】，商业转载请联系作者获得授权，非商业请保留原文链接：https://www.yiibai.com/cplusplus/cpp-program-to-convert-decimal-to-binary.html

        return l;
    }
};
// @lc code=end

