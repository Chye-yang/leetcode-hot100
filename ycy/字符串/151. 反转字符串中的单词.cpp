class Solution
{
public:
    string reverseWords(string s)
    {
        istringstream iss(s);
        vector<string> words;
        string word;

        while (iss >> word)
        {
            words.push_back(word);
        }

        string sss;
        sss += words[words.size() - 1];
        for (int i = words.size() - 2; i >= 0; i--)
        {
            sss += ' ' + words[i];
        }
        return sss;
    }
};