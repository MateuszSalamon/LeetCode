class Solution {
    private:
    bool Vowel(char c)
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
public:
    long long countOfSubstrings(string word, int k) {
        long numValidSubS = 0;
        int start = 0;
        int end = 1;
        int numValidSubS = 0;
        unordered_map<char, int> vowelC;
        int constantC = 0;

        vector<int> nextConst(word.length());
        int nextConstIndex = word.length();
        for(int i = word.length() - 1; i >= 0; i--)
        {
            nextConst[i] = nextConstIndex;
            if(!Vowel(word[i]))
            {
                nextConstIndex = 1;
            }
        }

        while(end < word.length())
        {
            char newLtr = word[end];/*new letter*/
            
            if(Vowel(newLtr))
            {
                vowelC[newLtr]++;
            }
            else
            {
                constantC++;
            }

            while(constantC > k)
            {
                char startLtr = word[start];
                if(Vowel(startLtr))
                {
                    vowelC[startLtr]--;
                    if(vowelC[startLtr] ==0)
                    {
                        vowelC.erase(startLtr);
                    }
                }
                else
                {
                    constantC--;
                }
                start++;
            }

            while (start < word.length() && vowelC.size() == 5 && constC == k)
            {
                numValidSubS += nextConstant[end] - end;
                char startLtr = word[start];
                if(Vowel(startLtr))
                {
                    vowelC[startLtr]--;
                    if(vowelC[startLtr] == 0)
                    {
                        vowelC.erase(startLtr);
                    } 
                }
                else
                {
                    constarntC--;
                }
                start++;
            }
            end++;
        }
        return numValidSubS;
    }
};
