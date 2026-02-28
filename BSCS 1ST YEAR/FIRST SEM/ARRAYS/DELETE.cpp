#include <iostream>

using namespace std;

int main()
{
    int car[5] = {10,20,30,40,50};
    int cars = 5;
    int pos;
    string tryagain;

    do{
    for(int i = 0; i < cars; i++){
        cout<<car[i]<<endl;
    }

    cout<<endl;

    cout << "Input position you want to delete (0-" << cars-1 << "): ";
    cin >> pos;

    if(pos >= 0 && pos < cars){
        for (int i = pos; i < cars - 1; i++) {
            car[i] = car[i + 1];
    }
    cars--;
    }else{
        cout<<"Invalid Input";
    }

    cout<<endl;

    for(int i = 0; i < cars; i++){
        cout<<car[i]<<endl;
    }

    cout<<"Do you try again? [Y/N]: ";
    cin>>tryagain;

    if(tryagain == "Y" || tryagain == "y"){
        continue;
    }else{
        cout<<"The Final Output is: "<<endl;
        break;
    }


    }while(true);

     for(int i = 0; i < cars; i++){
        cout<<car[i]<<endl;
    }

    return 0;
}
