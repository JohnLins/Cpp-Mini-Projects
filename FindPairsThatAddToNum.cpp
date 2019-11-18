#include <vector>
#include <iostream>

/*
Find all the pairs in the vector that adds up to 8
*/

int main()
{
    std::vector<int> arr = {6, 9, 3, 8, 0, 2};
    for(int a = 0; a <= arr.size(); a++){
        //std::cout << arr[a];
        for(int b = a + 1; b <= arr.size() - 1; b++){
        //std::cout << arr[b];
            if(arr[a] + arr[b] == 8){
                std::cout << arr[a] << "," << arr[b] << std::endl;
            }
        }
    }
    return 0;
}
