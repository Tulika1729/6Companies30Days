class Solution {
    public:
        string decodeString(string s) {
            //1. push every character of string into the stack but on getting closing braces pop elements from the stack until opening braces is not found.
            //2. just pop the opening bracket
            //3. after removing opening bracet, obviously a number will be found , convert that number into integer
            //4. and the number we countered is the number of times our string which we have found previously needs to be repeated
            stack < char > st;
            string temp = "";
            
            
            for(int i=0 ; i<s.size() ; ++i) {
                if (s[i] == ']') //pop until we get opening braces
                {
                    temp = "";
                    while (!st.empty() && st.top() != '[') {
                        temp = st.top() + temp;
                        st.pop();
                    }

                    st.pop(); //pop the opening bracket
                    string num = "";

                    while (!st.empty() && isdigit(st.top())) {
                        num = st.top() + num;
                        st.pop();
                    }
                    int number = stoi(num); //converting  number into integer
                    string repeat = "";
                    for (int j = 0; j < number; j++)
                        repeat += temp;
                    
                    //put back char of 'repeat' string back to stack
                    //since this 'repeat' string is part of mid of the pattern
                    for(char c: repeat)
                        st.push(c);
                    
                } else {
                    st.push(s[i]);
                }
                
            }

            string res = "";
            while (!st.empty()) {
                res = st.top() + res;
                st.pop();
            }
            return res;

        }
};
