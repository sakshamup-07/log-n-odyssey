class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cnt5 =0;
        int cnt10 =0;
        bool flag = true ;
        for(int i =0;i<bills.size();i++)
        {
           
            if(bills[i]==5)
            {
                cnt5++;
                flag=false;
            }
            if(bills[i]==10 && cnt5==0)
            {
                return false;
            }
            else if(bills[i]==10 && cnt5>0)
            {
                cnt10++;
                cnt5--;
            }
             if(bills[i]==20 && cnt5<3 && cnt10==0)
            {
                return false;
            }
            else if(bills[i]==20 && cnt5>0 && cnt10>0)
            {
                cnt10--;
                cnt5--;
            }  
            else if(bills[i]==20 && cnt5>=3 && cnt10==0)
            {
                cnt5-=3;
            }
            else if (bills[i]==20) return false;
           
        }
        return true;
    }
};