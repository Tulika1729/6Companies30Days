class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //Let n words, each with max m length

        // key:Map of freq of characters of each word, value: vector of original words
        map< map<char,int> , vector<string>> ump;
        
        
        //populate map, T= o(n*m), n words each take m
        for(auto word : strs){
            //frequency map for current word. T = o(m)
            map<char , int> freqMap; 
            for(char ch : word)
                ++freqMap[ch];
            
            ump[freqMap].push_back(word); 
        }
        
        vector<vector<string>> result;
        
        //T = o(n) since no. of keys in map can be max as total no of word
        for(auto mapElement : ump){
            result.push_back(mapElement.second);
        }
        
        return result;   
    }
};

// Total T = o(n*m + n) = o(n*m)
