#include<iostream>
using namespace std;
class Solution{
    public:
    bool isPalindrome(int x){
        if((x < 0 ) || (x!=0 && x % 10 == 0) ){
            return false ;
        }
        int returnedNumber = 0;
        while(x > returnedNumber){
            returnedNumber = 10 * returnedNumber + x % 10;
            x=x/10;
        }
        return x == returnedNumber || x == returnedNumber / 10 ;  
    }
};
int main()
{
    Solution solution;
    int n ;
    cout << "Enter a number: ";
    cin >> n;
    if(solution.isPalindrome(n)){
        cout<< n << " is Palindrome.";
    }
    else{
        cout<< n << " is not a Palindrome.";        
        }
    
    return 0;
}