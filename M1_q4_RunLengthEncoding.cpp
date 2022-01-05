string encode(string src)
{     
  //Your code here 
  string res="";
  res+=src[0];
  int count=1;
  int i;
  for(i=1;i<src.length();i++)
  {
      if(src[i]==src[i-1])
        count++;
      else{
          
          res+=to_string(count);
          res+=src[i];
          count=1;
      }
  }
    //res+=src[i];
    res+=to_string(count);
    return res;
}
