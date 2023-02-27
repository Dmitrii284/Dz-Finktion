#include<iostream>
//using namespace std;


double mean(double num1, double num2) {
    return (num1 + num2)/2;
}

double mean_arr(double arr[], const double len) {
    int sum;
    for(int i = 0; i<len; i++) {
        sum += arr[i];
        return (sum/i);
    }
}
int main() {
    /*Task 1
    Create a mean function that returns
     the arithmetic mean of the two numbers
     passed into it.
    Don't forget to show it works
    by calling functio,n in the main block.*/
    /*std::cout<<"Inter the 2 namder -> ";
    int n, m;
    std::cin>>n>>m;
    std::cout <<"The arithmetic mean of the two number "<<mean(n, m);
    */
    /* Task 2
     Create a mean_arr function.
     She accepts array and its length,
         after which it returns the average
         arithmetic of all its elements.
    */
    const int size = 4;
    int a, b, c, d;
    std::cout<<"Inter the four namber -> \n";
    std::cin >>a>>b>>c>>d;
    int arr1[size] {a, b, c, d};
    std::cout<<"Initial Array -> ";
    for(int i = 0; i<size;i++){
    std::cout<< arr1[i]<<"\t";
    }    
   mean_arr(arr1, size);     
   std::cout<< n;

    
    


    return 0;
}





    