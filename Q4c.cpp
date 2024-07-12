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

void output_array(double *array, int n){
    for(int i = 0;i<n;i++){       
        cout << *(array+i)<< " "; 
    }
}

double* create(int n){
    double *array = new double[n];
    return(array);
}

double *copyArray(double *array, int size) {
  double *newArray = create(size);
  for (int i = 0; i < size; i++) {
    *(newArray + i) = *(array + i);
  }
  return newArray;
}

int main(){
    int n;
    cout <<"Enter the size:"<<endl; 
    cin >> n;
    double *array1 = create(n);
    populate_array(array1,n);
    double *copy = copyArray(array1, n);
    cout<< "The copied array is: "<<endl;
    output_array(array1,n);
    delete [] array1;
    delete [] copy;
}
