class Solution {
public:
    bool isValid(string s) {
        stack<char> brStack;
        unordered_map<char, char> brMap = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (const auto& c : s) {
            if(brMap.find(c) != brMap.end()){
                if(!brStack.empty() && brMap[c] == brStack.top()){
                    brStack.pop();
                } else {
                    return false;
                }
            } else{
                brStack.push(c);
            }
        }
        return brStack.empty();
    }
};



