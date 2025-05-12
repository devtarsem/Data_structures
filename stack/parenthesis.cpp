class Solution {
    public:
        bool isValid(string s) {
            if(s[0] == ']' || s[0] == ')' || s[0] == '}'){
                return false;
            }
            vector<char> stackBox;
    
            for(int i = 0 ; i<s.size(); i++){
                if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                    stackBox.push_back(s[i]);
                }else if(s[i] == ')'){
                    if(stackBox.size()==0) return false;
    
                    if(stackBox[stackBox.size()-1] == '('){
                        stackBox.pop_back();
                    }else{
                        return false;
                    }
                }
                else if(s[i] == '}'){
                    if(stackBox.size()==0) return false;
                    if(stackBox[stackBox.size()-1] == '{'){
                        stackBox.pop_back();
                    }else{
                        return false;
                    }
                }
                else if(s[i] == ']'){
                    if(stackBox.size()==0) return false;
    
                    if(stackBox[stackBox.size()-1] == '['){
                        stackBox.pop_back();
                    }else{
                        return false;
                    }
                }
            }
    
            return stackBox.size()==0 ? true : false;
        }
    };