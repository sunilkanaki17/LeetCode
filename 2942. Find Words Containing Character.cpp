class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        string y;
        vector<int> z;
    for(int i=0;i<words.size();i++)
    {
        y = words[i];
        //cout<<y<<"\n";
        for(int j=0;j<y.size();j++)
        {
            if(x==y[j])
            {
                z.push_back(i);
                break;
            }
    
        }

    }
        return z;
    }
};
