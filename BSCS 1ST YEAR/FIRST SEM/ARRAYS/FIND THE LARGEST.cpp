#include <iostream>

using namespace std;

int main()
{
    int arr[2][3][3];
    int largest;

        cout<<"Input 18 Numbers: ";


        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 3; k++){
                    cin>>arr[i][j][k];

                if (i == 0 && j == 0 && k == 0) {
                largest = arr[i][j][k];
                }

                if (arr[i][j][k] > largest) {
                    largest = arr[i][j][k];
                    }
                }
            }
        }



        for(int i = 0; i < 2; i++){
            cout<<"Layer "<< i <<": "<<endl;
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 3; k++){

                    cout<<arr[i][j][k]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
        }

        cout<<"The Largest Number is: "<<largest<<endl;

    return 0;
}
