#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size()==k)
            return "0";
        stack<char> nums;
        for(int i=0;i<num.size();i++){
            char c = num[i];
            while(!nums.empty() && nums.top()>c && k>0){
                nums.pop();
                k--;            
            }
            nums.push(c);
        }
        string min;
        while(!nums.empty()){
            if(k>0){
                nums.pop();
                k--;
            }
            else{
                min.insert(0,string(1,nums.top()));
                nums.pop();
            }

        }
        // vector<string> nums;
        // for(int i=0;i<=num.size()-k;i++){
        //     for(int j=0;j<k;j++){
        //         string n = num;
        //         for(int m=i+j;m<=num.size()-k;m++)
        //             cout<<m<<endl;
        //             // n.erase(m,1);
        //         cout<<n<<endl;
        //         nums.push_back(n);
        //     }
        // }
        // for(int i=0;i<k;i++){
        //     string n = num;
            
        // }
        // for(int i=0;i<=num.size()-k;i++){
        //     string n = num;
        //         n.erase(i,k);
        //     nums.push_back(n);
        // }
        // for(int i=1;i<nums.size();i++)
        //     if(min>nums[i])
        //         min = nums[i];
        for(int i=0;min[i]=='0' && min.size()>1;)
            min.erase(i,1);
        if(min=="")
            return "0";
        return min;
    }
};
int main() {
    Solution s;
    cout<<s.removeKdigits("10001", 4);
}