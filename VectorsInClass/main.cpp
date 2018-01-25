#include <iostream>
#include <ctime>

using namespace std;

void swap(int& a, int& b);


int main()
{
    int sortNum[10];

    srand(time(NULL));
    cout<<"Unsorted: ";
    for(int i = 0;i< 10;i++){
        sortNum[i] = (rand()%10) + 1;
        cout<<sortNum[i]<< "  ";
    }



    return 0;
}

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
