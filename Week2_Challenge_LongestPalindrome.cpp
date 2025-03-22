#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq_map;
        
        
        for (char c : s) {
            freq_map[c]++;
        }
        
        int length = 0;
        bool hasOdd = false;
        
        
        for (auto& entry : freq_map) {
            if (entry.second % 2 == 0) {
                
                length += entry.second;
            } else {
                
                length += entry.second - 1;
                hasOdd = true;  
            }
        }
        
        
        if (hasOdd) {
            length += 1;
        }
        
        return length;
    }
};
