class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();

        int revDeg = 0;

        for(int i=0;i<n;i++){
            revDeg += (i+1)*('z' - s[i] + 1);
        }

        return revDeg;
    }
};