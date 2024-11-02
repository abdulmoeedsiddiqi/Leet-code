#include<iostream>
using namespace std;
class Solution{
    public:
    bool isPalindrome(int x){
        if(x < 0 || (x!=0 && x % 10 == 0) ){
            return false ;
        }
        int returnedNumber = 0;
        while(x > returnedNumber){
            returnedNumber = 10 * returnedNumber + x % 10;
            x=x/10;
        }
        return returnedNumber == x || returnedNumber == x / 10 ; 
    }
};
int main()
{
    Solution solution;
    int n ;
    cout << "Enter a number: ";
    cin >> n;
    if(solution.isPalindrome(n)){
        cout<< << "Entered number is Palindrome.";
    }
    else{
        cout << "Entered number is not a Palindrome. ";
    }
    
    return 0;
}