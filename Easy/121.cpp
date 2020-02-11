class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_element=0,min_element=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(min_element>prices[i])
                min_element=prices[i];
            else
                max_element=max(max_element,prices[i]-min_element);
        }
        if(max_element<=0)
            return 0;
        return max_element;
    }
};
