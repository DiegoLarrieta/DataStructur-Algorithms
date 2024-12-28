/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, 
starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r

*/
#include<iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int A = word1.size();
        int B = word2.size();
        int a = 0 ;
        int b = 0;
        
        vector<char>merged;

        // Merge characters from both strings in alternating order
        while (a < A && b < B) {
            merged.push_back(word1[a++]);  // Add character from word1
            merged.push_back(word2[b++]);  // Add character from word2
        }

        // Append remaining characters from word1, if any
        while (a < A) {
            merged.push_back(word1[a++]);
        }

        // Append remaining characters from word2, if any
        while (b < B) {
            merged.push_back(word2[b++]);
        }
        return string(merged.begin(), merged.end());  // Convert vector to string and return
    }
};