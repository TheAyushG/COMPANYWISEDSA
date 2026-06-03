-----------------------------------
Recursive Solution
Time  - O(2^n)
Space - O(n)
-----------------------------------
  
class Solution {
public:
    int fib(int n) {
        
        if(n == 0){
            return 0;
        }

        if(n == 1){
            return 1;
        }

        return fib(n-1) + fib(n-2);
    }
};


******************************************************************************************************


------------------------------------------
iterative solution, Better then recursive
Time  - O(n)
Space - O(1)
------------------------------------------


class Solution {
public:
    int fib(int n) {

        if(n == 0) return 0;
        if(n == 1) return 1;

        int a = 0;
        int b = 1;

        for(int i = 2; i <= n; i++) {
            int c = a + b;
            a = b;
            b = c;
        }

        return b;
    }
};
