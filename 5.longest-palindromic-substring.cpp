/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 *
 * https://leetcode.com/problems/longest-palindromic-substring/description/
 *
 * algorithms
 * Medium (26.88%)
 * Total Accepted:    519.5K
 * Total Submissions: 1.9M
 * Testcase Example:  '"babad"'
 *
 * Given a string s, find the longest palindromic substring in s. You may
 * assume that the maximum length of s is 1000.
 * 
 * Example 1:
 * 
 * 
 * Input: "babad"
 * Output: "bab"
 * Note: "aba" is also a valid answer.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "cbbd"
 * Output: "bb"
 * 
 * abbcbbea
 */

class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.length();
        if (len == 0){
            return "";
        }
        string answer = s.substr(0,1);
        int maxlen = 1;
        for (int i = 0; i < len; ++i){
            int j = 1;
            int m = 1;
            int curlen = 0;
            int curlen2 = 1;
            // first situation

            while (i-j >= 0 && i+j-1 < len){
                if (s[i-j] == s[i+j-1]){
                    curlen += 2;
                    ++j;
                }
                else{
                    break;
                }
            }
            if (curlen > maxlen){
                answer = s.substr(i-j+1,curlen);
                maxlen = curlen;
            }
            //second situation
            while (i-m >= 0 && i+m < len){
                if (s[i-m] == s[i+m]){
                    curlen2 += 2;
                    ++m;
                }
                else{
                    break;
                }
            }
            if (curlen2 > maxlen){
                answer = s.substr(i-m+1,curlen2);
                maxlen = curlen2;
            }
            }
            return answer;
        
    }
};

