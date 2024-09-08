// Sampleexcer.cpp : This file contains the 'main' function. Program execution begins and ends there.
////https://leetcode.com/problems/longest-substring-without-repeating-characters/

#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<map>

vector<char>getmylongeststr(string input)
{
    int maxSize = 0;
    vector<char>result;
    for (auto i = 0; i < input.size(); i++)
    {
        unordered_map<char, int>mp;
        vector<char>buf;
        for (auto j = i; j < input.size(); j++)
        {
            if (mp.find(input[j]) == mp.end())
            {
                mp[input[j]]++;
                buf.push_back(input[j]);

                int sz = buf.size();
                if (sz > maxSize)
                {
                    maxSize = sz;
                    result = buf;
                }
            }
            else
            {
                break;
            }
        }
        
    }    
    return result;

}


vector<pair<int, int>> twoSum(vector<int> nums, int target)
{
    vector<pair<int, int>>result;
    for (auto i = 0; i < nums.size(); i++)
    {
        for (auto j = i; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result.push_back(make_pair(i, j));
            }
        }
    }
    return result;
}



int main()
{
    vector<char>res = getmylongeststr("vaibhav");
    cout << res.data() << endl;
    return 0;


    //vector<int> nums = { 3,2,4 };
    //auto target = 6;
    //vector<pair<int, int>> res = twoSum(nums, target);
    //if (res.size() > 0)
    //    for (auto i = 0; i < res.size(); i++)
    //    {
    //        pair<int, int>val = res[i];
    //        cout << val.first << "  " << val.second << endl;

    //    }
    //cout << "\n=============================\n";
    //vector <char> s = lengthOfLongestSubstring("au");
    //if (!s.empty())
    //    for (auto i : s)
    //        cout << i;
}