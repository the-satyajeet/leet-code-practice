class Solution 
{
public:
    bool isPalindrome(int x) {

        long res = 0;
        int og = x;
        while (x > 0)
        {
            int digit = x % 10;
            res = res * 10 + digit;
            x /= 10;
        }

        return og == res;
    }
};

class driver
{
    int main()
    {
        Solution obj;
        cout<<obj.isPalindrome(141);

        return 0;
    }
};