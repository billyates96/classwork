#include <iostream>
#include <ctime>

using namespace std;

void swap(int& a, int& b);

//void sort(int[10]& a);

int main()
{
    int sortNum[10];

    srand(time(NULL));
    cout<<"Unsorted: ";
    for(int i = 0;i< sortNum.size();i++){
        sortNum[i] = (rand()%10) + 1;
        cout<<sortNum[i]<< "  ";
    }

    //block of code for the sorting algorithm...uses xyz as throwaway variables

    int x = sortNum.size();
    for(int y = 0; y < (x - 1); y++){
        int small = y;
        for(int z = y + 1; z < x; z++){
            if(sortNum[z] < sortNum[small]){
                small = z;
            }
        }
        if(y != small){
            swap(sortNum[y], sortNum[small]);
        }
    }
    //end block

    //sort(sortNum[])

    cout<<endl<<"Sorted: ";
    for(int n = 0; n < sortNum.size(); n++){
        cout<<sortNum[n];
    }



    return 0;
}

void swap(int& a, int& b){      //swapping function
    int temp = a;
    a = b;
    b = temp;
}

//function version of the sorting algorithm.

/*void sort(int[10]& a){
    int n = a.size();
    for(int i = 0; i < (n - 1); i++){
        int small = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[small]){
                small = j;
            }
        }
        if(i != small){
            swap(a[i], a[small]);
        }
    }
}*/
