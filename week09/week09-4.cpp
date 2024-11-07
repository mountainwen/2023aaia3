//average salary excluding the minimum andmaximum salary
class Solution {
public:
    double average(vector<int>& salary) {
        int max=salary[0];//找最大值,拿最前面的人當預設值
        int min=salary[0];//找最小值,拿最前面的人當預設值
        double total=0;
        for(int i=0;i<salary.size();i++){
            if(salary[i]>max) max= salary[i];//比最大值大,換人
            if(salary[i]<min) min= salary[i];//比最小值小,換人
            total+=salary[i];
        }
        return(total-max-min)/(salary.size()-2);
    }
};
