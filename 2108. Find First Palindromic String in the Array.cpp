// Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".
// A string is palindromic if it reads the same forward and backward.

// Example 1:

// Input: words = ["abc","car","ada","racecar","cool"]
// Output: "ada"
// Explanation: The first string that is palindromic is "ada".
// Note that "racecar" is also palindromic, but it is not the first.
  
// Example 2:
  
// Input: words = ["notapalindrome","racecar"]
// Output: "racecar"
// Explanation: The first and only string that is palindromic is "racecar".
  
// Example 3:

// Input: words = ["def","ghi"]
// Output: ""
// Explanation: There are no palindromic strings, so the empty string is returned.
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string x; int f=0; string result;
        for(int i=0;i<words.size();i++)
        {
            x=words[i];
            if(x.size()==1)
            {
                result=words[i];
                break;
            }
            for(int j=0;j<x.size()/2;j++)
            {
                if(x[j]==x[x.size()-j-1])
                {
                    f=1;
                }
                else
                {
                    f=0;
                    break;
                }
            }
            if(f==1)
            {
                result=words[i];
                break;
            }
        }
        return result;
    }
};
