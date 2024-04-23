#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]++;
        if(digits[digits.size()-1]<10)
            return digits;
        for(int i=digits.size()-1;i>=0 && digits[i]==10;i--){
            digits[i] = 0;
            if(i==0)
                digits.insert(digits.begin(), 1);
            else
                digits[i-1]++;
        }
        return digits;
    }
};
int main() {
    Solution s;
    vector<int> v {9,9};
    v = s.plusOne(v);
    for(auto i:v)
        cout<<i<<" ";
}