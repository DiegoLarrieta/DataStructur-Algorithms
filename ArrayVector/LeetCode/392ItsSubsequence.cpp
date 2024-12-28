#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_ptr = 0; // Pointer for string s
        int t_ptr = 0; // Pointer for string t
        
        // Loop through string t
        while (t_ptr < t.size() && s_ptr < s.size()) {
            // If characters match, move the s pointer
            if (t[t_ptr] == s[s_ptr]) {
                s_ptr++;
            }
            // Always move the t pointer
            t_ptr++;
        }
        
        // If we've matched all characters of s, return true
        return s_ptr == s.size();
    }
};