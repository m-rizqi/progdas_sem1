#include <iostream>

using namespace std;

int main()
{

    int n_student = 10;
    float score, sum, average;
    for (int i = 1; i <= n_student; i++)
    {
        cout << "Masukkan nilai mahasiswa " << i << " : ";
        cin >> score;
        sum += score;
    }
    average = sum / n_student;
    cout << "Rata-rata nilai = " << average << endl;

    return 0;
}