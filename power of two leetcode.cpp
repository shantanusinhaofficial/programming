class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1) {return true;}  // 2**0 case.
        else if (n < 2) {return false;} // for -ve numbers
        
        while (n%2 == 0 && n != 0) { 
            if (n != 2) {n = n/2;}
            else {n = 0;}   // As 2/2 = 1. But it would be better to make it zero to avoid confusion between odd and 2**powers.
        }
        
        return (n == 0);
    }
};
