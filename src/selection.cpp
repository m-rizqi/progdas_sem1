#include <iostream>
#include <math.h>
#define PI 3.14

using namespace std;

int main()
{
    // prompt input_shape, diameter, height, volume, surface_area
    int input_shape;
    float diameter, height, volume, surface_area;

    // get input_shape, diameter, height
    cout << "--- Bentuk Bangun Ruang ---" << endl;
    cout << "---------------------------" << endl;
    cout << "1.| Tabung" << endl;
    cout << "2.| Kerucut\n" << endl;
    cout << "Mana yang anda pilih ? (angka)"<< endl;
    cin >> input_shape;
    cout << "Diameter(meter) : ";
    cin >> diameter;
    cout << "Tinggi(meter) : ";
    cin >> height;

    //prompt and assign radius
    float radius = diameter / 2;
    
    // if input == 1 which is a tube
    if (input_shape == 1)
    {
        volume = PI * radius * radius * height;
        surface_area = 2 * PI * radius * (radius + height);
    }
    //else, which is the shape is cone
    else
    {
        volume = PI * radius * radius * height / 3;
        float s = sqrt(radius*radius + height*height);
        surface_area = PI * radius * (radius + s);
    }
    
    // display output to the screen
    printf("Volume = %.2f meter^3\n", volume);
    printf("Luas Permukaan = %.2f meter^2", surface_area);
    
    return 0;
}