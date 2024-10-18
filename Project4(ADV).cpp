
#include <iostream>
using namespace std; 


int main()
{
    double total = 0;
    double rainfall[12];
    for (int i = 0; i < 12; i++)
    {
        cout << "how many inches of rainfall for month " << (i+1) << "\n";      // prints the question
        cin >> rainfall[i];                                                     // takes in the amount of rainfall for the month asked
         total = total + rainfall[i];                                           // adds the rainfall entered into the total rainfall over the months asked already   
    }

    cout << "total rainfall was " << total << "\n";                // prints the total rainfall over the months
    cout << "average rainfall is " << (total / 12);                // divides the total by the number of months for the average

}


