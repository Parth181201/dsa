


/*
Basically in this I am calling recursion function with different parameter with 
based on the different condition.
*/



void solve(vector<string> &v,string s,int index,string output,int pos){
        
        //Base condition
        if(index==s.length()){
            v.push_back(output);
            return;
        }
        
        if(pos==output.length()){
            output.push_back(s[index]);
            solve(v,s,index+1,output,0);
            return;
        }
        
        //Hypothesis + induction
        
        solve(v,s,index,output,pos+1);
        
        output.insert(pos,1,s[index]);
        
        solve(v,s,index+1,output,0);
        
    }
    
    vector<string> permutation(string s)
    {
        vector<string> v;
        
        string output = s.substr(0,1);

        solve(v,s,1,output,0);
        
        sort(v.begin(),v.end());
        
        return v;
        
    }