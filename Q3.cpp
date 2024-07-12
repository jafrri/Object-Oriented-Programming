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

void add_vectors(int size, int *vec1,int *vec2, int *res){
    for (int i = 0; i < size; i++) {
    *(res+i) = *(vec1+i) + *(vec2+i);}
    cout << "The sum between the vector is:";
    for(int j = 0;j<size;j++){
        cout << " "<<*(res+j);
    } 
cout<< endl;}
    
void subtract_vectors(int size, int *vec1,int *vec2, int *res){
    for (int i = 0; i < size; i++) {
    *(res+i) = *(vec1+i) - *(vec2+i);
    } 
    cout << "The difference between the vector is:";
    for(int j = 0;j<size;j++){
        cout << " "<<*(res+j);
    } 
}

int main(){
    int n;
    cout <<"Enter the size:"<<endl; 
    cin >> n;
    int *array1 = create(n);
    int *array2 = create(n);
    int *array3 = create(n);
    int *array4 = create(n);
    populate_array(array1,n);
    populate_array(array2,n);
    add_vectors(n, array1,array2, array3);
    subtract_vectors(n, array1,array2, array4);
    delete [] array1;
    delete [] array2;
    delete [] array3;
    delete [] array4;
}