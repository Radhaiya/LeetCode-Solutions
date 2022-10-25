class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>ans;
        int temp;
        int value2;

        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                 temp = ans.top();
                ans.pop();
                 value2=temp+ans.top();
                ans.push(temp);
                ans.push(value2);
            }
             else if(operations[i]=="D"){
                ans.push(ans.top()*2);
            }
            else if(operations[i]=="C"){
                ans.pop();
            }
             else{
                ans.push(stoi(operations[i]));
             }
        }

        int sum=0;

        while(ans.size()!=0){
            sum=sum+ans.top();
            ans.pop();
        }

        return sum;
    }
};