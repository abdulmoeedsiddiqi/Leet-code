#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> twoSum(vector<int> v, int n){
        for(int i=0; i<v.size()-1; i++){
            for(int j=0; j<v.size(); j++){
                if(v[i]+v[j]==n){
                    return {i,j};
                }
            }
    
        }
        return {};
    }

};
int main()
{
    Solution s;
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    vector<int> result = s.twoSum(v,9);
    if(!result.empty()){
        cout << "Indices: " << result[0] << " , " << result[1] << endl;
    }
    else{
        cout << "Result not found! " ; 
    }
    return 0;
}