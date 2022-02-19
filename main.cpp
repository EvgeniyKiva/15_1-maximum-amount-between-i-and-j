#include <iostream>
#include <vector>

int main() {
    std::vector <int> vec {-2,1,-3,4,-1,2,1,-5,4};
    int sum_temp;
    int sum_max=0;
    int min=0;
    int max=vec.size()-1;

    for (int i=0; i<vec.size(); i++){
        sum_max+=vec[i];

    }
    //std::cout << sum_max << std::endl;
    for(int j=0; j<vec.size(); j++){
        sum_temp=0;
        for (int i=j; i<vec.size(); i++ ){

            if(sum_temp+vec[i]>sum_max){
                sum_max=sum_temp+vec[i];
                min=j;
                max=i;
                sum_temp+=vec[i];
            }
            else {
                sum_temp+=vec [i];

            }


        }
        //sum_temp=0;
    }
    std::cout << "Sum - " <<sum_max << " i - " << min<< " j - "<< max <<  std::endl;
    return 0;
}
