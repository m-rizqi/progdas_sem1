#include <iostream>

using namespace std;

int main()
{
    float start_celcius, end_celcius, fahrenheit;
    cout<< "Masukkan suhu awal(Celcius) : ";
    cin>> start_celcius;
    cout<< "Masukkan batas suhu akhir(Celcius): ";
    cin>> end_celcius;
    cout<< "\n+---------+------------+"<<endl;
    cout<< "| Celcius | Fahrenheit |"<<endl;
    cout<< "+---------+------------+"<<endl;
    for (double i = start_celcius; i <= end_celcius; i += 15)
    {
        fahrenheit = (i * 9/5)+32;
        printf("| %-7.1f | %-10.1f |\n",i,fahrenheit);
    }
    
    return 0;
}
