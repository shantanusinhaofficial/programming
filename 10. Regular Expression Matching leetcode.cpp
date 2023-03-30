  class Solution
   {
public:
    bool isMatch(std::string s, std::string p)
     {
        int s_len = s.length();
        int p_len = p.length();
        bool dp[s_len+1][p_len+1]; // dynamic programming table
        
        // initialize table
        for (int i = 0; i <= s_len; i++) 
        {
            for (int j = 0; j <= p_len; j++)
             {
                dp[i][j] = false;
            }
        }
        dp[0][0] = true; // empty pattern matches empty string
        
        // handle patterns that start with '*'
        for (int j = 1; j <= p_len; j++) 
        {
            if (p[j-1] == '*')
             {
                dp[0][j] = dp[0][j-2]; // '*' matches 0 occurrences of the previous char
            }
        }
        
        // fill table
        for (int i = 1; i <= s_len; i++)
         {
            for (int j = 1; j <= p_len; j++) 
            {
                if (s[i-1] == p[j-1] || p[j-1] == '.')
                 {
                    dp[i][j] = dp[i-1][j-1]; // match single character
                }
                 else if (p[j-1] == '*') 
                 {
                    dp[i][j] = dp[i][j-2]; // '*' matches 0 occurrences of the previous char
                    if (s[i-1] == p[j-2] || p[j-2] == '.') 
                    {
                        dp[i][j] = dp[i][j] || dp[i-1][j]; // '*' matches 1 or more occurrences of the previous char
                    }
                }
                 else 
                 {
                    dp[i][j] = false; // mismatch
                }
            }
        }
        return dp[s_len][p_len]; // result is in the bottom-right corner of the table
    }
};

