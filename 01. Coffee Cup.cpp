#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    // Let's challenge in my favorite language!!
    int N = 0;
    int mode = 0; //what to do?!?
    double operation = 0; //do according to mode
    double X = 0; //water
    double Y = 0; //coffee
    double concentration = 0;
    cin >> N;
    for (int index = 0; index < N; index++)
    {
        cin >> mode;
        cin >> operation;
        if (mode == 1) //Add water
        {
            X += operation;
        }
        else if (mode == 2) //Add coffee
        {
            Y += operation;
        }
        else if (mode == 3) //Taste
        {
            X -= operation*X/(X+Y);
            Y -= operation*Y/(X+Y);
        }
    }
    concentration = (int)(X/(X+Y)*100);
    cout << concentration << endl;
    return 0;
}
