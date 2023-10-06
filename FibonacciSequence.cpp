#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long double initialNumber = 0;
    long double secondNumber = 1;
    long double thirdNumber = 0;
    int number;

    cout << "********** FIBONACCI SEQUENCE **********\n";
    cout << "Enter nth term in the sequence: " << "\n";
	
	while(number >= 0){
       
        thirdNumber = 0;
        secondNumber = 1;
        initialNumber = 0;
        
        cout << "\n";
        cin >> number;
        cout << "\n";
            
            for(int i = 0; i < number - 1; i++){
                thirdNumber = initialNumber + secondNumber;
                initialNumber = secondNumber;
                secondNumber = thirdNumber;
            }
        cout << setprecision(100) << thirdNumber << "\n";
	}

    if(number == -1){
        cout << "\n" << "***** END OF PROGRAM *****";
    }

    // while(cin >> number){
    //     cin >> number;
    //     cout << number << '\n';

    //     if(number == -1){
            
    //         thirdNumber = 0;
    //         secondNumber = 1;
    //         initialNumber = 0;
            
    //         for(int i = 0; i < number - 1; i++){
    //             thirdNumber = initialNumber + secondNumber;
    //             initialNumber = secondNumber;
    //             secondNumber = thirdNumber;
    //         }
    //     cout << thirdNumber;
    //     }
    // }


    // cout << "\n" << "***** END OF PROGRAM *****";

    return 0;
}





  