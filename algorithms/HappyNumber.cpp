class Solution {
public:
    bool isHappy(int n) {
      int result = false;
      for(int i=0;i<100;i++){
        int sum = 0; 
        int m = 0;
        while (n!=0){
            m = n%10;  
            sum = sum + (m*m); 
            n = n/10;  
        } 
        if(sum ==1){
            result = true;
            break;
        }
        else{
            n = sum;  
        }
      }
    return result;
    }
        
};
