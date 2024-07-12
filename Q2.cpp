#include<iostream>
using namespace std;



void populate_array(int *array,int n){
    int rand;
    for(int i = 0;i<n;i++){
        cin >> rand;
        array[i] = rand;
    }
}

void output_array(int *array, int n){
    for(int i = 0;i<n;i++){       
        cout << *(array+i)<< " "; 
    }
}

int* create(int n){
    int *array = new int[n];
    return(array);
}

int main(){
    int n;
    cin >> n;
    int *array = create(n);
    populate_array(array,n);
    output_array(array,n);
    delete [] array;

}
