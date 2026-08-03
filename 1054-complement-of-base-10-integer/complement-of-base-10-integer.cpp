class Solution {
public:
    int count(int n){
  int count =0;
        while(n){

        int bit=n%2;
        count++;
        n=n/2;}
        return count;
    }
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
    return (pow(2,count (n))-1)-n;}
};