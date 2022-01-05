string printMinNumberForPattern(string s){
        stack<int>st;
        string res="";
        int num=1;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='D')
            {
                st.push(num);
                num++;
            }
            else if(s[i]=='I')
            {
                st.push(num);
                num++;
                
                while(!st.empty())
                {
                    res=res+to_string(st.top());
                    st.pop();
                }
            }
        }
        
        st.push(num);
        while(!st.empty())
        {
            res=res+to_string(st.top());
            st.pop();
        }
        return res;
    }
