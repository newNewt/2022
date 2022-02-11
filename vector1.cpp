#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int>  v1={1,2,3,4,6};
    vector<int>  v2={6,7,8,9,10};
    cout<<"在交换之前，v1的元素是 :";
    for (int i=0;i<v1.size();i++)
    cout<<v1.at(i)<<" ";
    cout<<'\n';
    cout<<"在交换之前，v2的元素是 :";
    for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";
    cout<<'\n';
    v1.swap(v2);
    cout<<"交换后，v1的元素为  :";
    for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
    cout<<'\n';
    cout<<"交换后，v2的元素为:";
    for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";
    cout << endl;
    return 0;
}