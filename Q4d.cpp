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




void swapArrays(double *array1, double *array2, int size) {
  for (int i = 0; i < size; i++) {
    double temp = *(array1+i);
    *(array1+i) = *(array2+i);
    *(array2+i) = temp;
  }
}


int main()
{
    int n;
    cout <<"Enter the size:"<<endl; 
    cin >> n;
    double *array1 = create(n);
    double *array2 = create(n);
    populate_array(array1,n);
    populate_array(array2,n);
    swapArrays(array1, array2,n);
    cout<< "The array1 is now: ";
    output_array(array1,n);
    cout<<endl;
    cout<< "The array2 is now: ";
    output_array(array2,n);
    
    delete [] array1;
    delete [] array2;

}