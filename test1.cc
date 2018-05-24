#include<iostream>
#include<string>
class Solution {
public:
    static int myAtoi(string str) {
        int first_non_whs = -1;
        bool is_minus = false;
        int size = str.size();
        while(first_non_whs < size)
            if(str[++first_non_whs] != ' ' )
                break;
        if (str[first_non_whs] == '-'){
            is_minus = true;
            first_non_whs += 1;
        }
         if (!is_minus && str[first_non_whs] == '+')
            first_non_whs += 1;
        if(first_non_whs == size)
            return 0;
        if(str[first_non_whs] > '9' || str[first_non_whs] < '0')
            return 0;
        int result = 0;
        while((first_non_whs  < size) && (str[first_non_whs] <= '9') && (str[first_non_whs] >= '0')){
            result = result * 10 + (str[first_non_whs ++] - '0');
        }
        long max = 1;
        max = max << 31;
        long min =  -max;
        if(is_minus)
            result = -result;
        if(result < 0)
          if(!is_minus)
             return max - 1;
        else
          if(is_minus)
             return min;

        return result;
    }
};
int main(){
	std::cout << Solution::myAtoi("  -43dcd") << std::endl;
	return 0;
}
