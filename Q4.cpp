#include<iostream>
using namespace std;


void populate_array(int *array,int n){
    int rand;
    cout<<"Enter the array entry: "<<endl;
    for(int i = 0;i<n;i++){
        cin >> rand;
        *(array+i) = rand;
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

int countEven(int *array, int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] % 2 == 0) {
      count++;
    }
  }
  return count;
}

int main(){
    int n;
    cout <<"Enter the size:"<<endl; 
    cin >> n;
    int *array1 = create(n);
    populate_array(array1,n);
    int even = countEven(array1, n);
    cout<<"The number of even numbers in array is: "<<even;
    delete [] array1;
}
