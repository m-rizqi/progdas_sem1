#include <iostream>

using namespace std;

int main(){

    int sum, n_numbers, value;
    cout<< "The number of even numbers (n): ";
    cin>> n_numbers;
    cout<< "+---------+---------+"<<endl;
    cout<< "|  Value  |   Sum   |"<<endl;
    cout<< "+---------+---------+"<<endl;
    for(int i = 1; i <= n_numbers; i++){
        value = i*2;
        sum += value;
        printf("| %-7d | %-7d |\n", value, sum);
    }

    return 0;
}