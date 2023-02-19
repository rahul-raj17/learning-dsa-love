// using recursion
void reverse(string& str, int i, int j) {
    // base case
    if(i > j) {
        return ;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str,i,j);
}

string reverseWord(string str){
    
  //Your code here
   reverse(str,0,str.length()-1);
    return str;
}