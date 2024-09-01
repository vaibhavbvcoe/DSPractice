//https://leetcode.com/problems/container-with-most-water/description/

#include <iostream>
using namespace std;
#include<vector>

int GetMaxWater(vector<int>height)
{
    int i = 0, j = height.size() - 1;
    
    int result = 0;
    while (i < j)
    {
        ///here we are trying to take min...since water would result in least height...from the high  it would flow to the low height. after that muiltiplying with the Width ....Rectangle Height* width...j-i would give me the width
        int curWidth = min(height[i], height[j]) * (j - i);
        result = max(result, curWidth);
        if (height[i] < height[j])
            i++;
        else
            j--;
    }
    return result;
        
}
int main()
{
    vector<int> height = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };

    int res = GetMaxWater(height);
    cout << res << "\n";
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
