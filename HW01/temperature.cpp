#include <iostream>

using namespace std;
//careful better to use 5. 9. to make sure none of the multiplications or division give you an integer
//must use a float for the temperature!
int temperature_conversion(int temp){

    return (((temp - 32) * 5) / 9);
    
}

int main(){


    int to = 40; //initial temperature that is in Farhenhite 

    cout << "The temperature in Farhenheit is: " << to << " The temperature in Celsius is: " << temperature_conversion(to) << endl;

    return 0;


}
