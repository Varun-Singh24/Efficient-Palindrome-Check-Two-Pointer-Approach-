class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int st = 0 ; 
        int end = s.length() -1 ;
        
        while(st < end){
            if (s[st] != s[end]){
                return false ;
            }
            st++ ; 
            end-- ;             
        }
        return true ; 
    }
};

