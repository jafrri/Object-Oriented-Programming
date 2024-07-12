#include<iostream>
using namespace std;


void populate_array(double *array,int n){
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

double* create(int n){
    double *array = new double[n];
    return(array);
}

double *findMax(double *array, int size) {
  if (size == 0) {
    return NULL;
  }
  double *max = &array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > *max) {
      max = &array[i];
    }
  }
  return max;
}


int main()
{
    int n;
    cout <<"Enter the size:"<<endl; 
    cin >> n;
    double *array1 = create(n);
    populate_array(array1,n);
    double *max_number = findMax(array1, n);
    cout<<"The max value in array is: "<<*max_number;
    delete [] array1;
}