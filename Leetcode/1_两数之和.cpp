#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> a;//建立hash表存放数组元素
        vector<int> b(2,-1);//存放结果
        //vector<int> b(2,-1) 初始化一个含有2个为-1的值的vector容器
        for(int i=0;i<nums.size();i++)
            a.insert(map<int,int>::value_type(nums[i],i));
        for(int i=0;i<nums.size();i++)
        {
            if(a.count(target-nums[i])>0&&(a[target-nums[i]]!=i))
            //判断是否找到目标元素且目标元素不能是本身
            {
                b[0]=i;
                b[1]=a[target-nums[i]];
                break;
            }
        }
        return b;
    };
};

int main() {
    vector<int> num {2,7,11,15};
    int target = 9;
    
    Solution solution;
    vector<int> b = solution.twoSum(num, target);

    for (int i = 0; i < b.size(); i++)
    cout << b[i] << endl;


    // vector<int> aaa(2,-1);
    // for (int i = 0; i < aaa.size(); i++)
    // cout << aaa[i] << endl;


    return 0;
}