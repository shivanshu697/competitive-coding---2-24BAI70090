class Solution {
public:
    bool isHappy(int n) {
        int slow = ss(n);
        int fast = ss(ss(n));
        while(slow!=fast){
            slow = ss(slow);
            fast = ss(ss(fast));
        }
        return slow == 1;}
        int ss(int n)
        {int sum = 0;
        while(n>0){
            int digit = n%10;
            n = n/10;
            sum += digit*digit;

        }
        return sum;}
    
};