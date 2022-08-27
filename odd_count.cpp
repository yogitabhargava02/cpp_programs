class Solution {
public:
    
    int countOdds(int low, int high) {
       
 int x=(high-low)/2;
	//For edge elements.
    if(low%2!=0 || high%2!=0)
return x+1;
    return x;
    }};
   