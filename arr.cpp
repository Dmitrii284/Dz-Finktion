#include <iostream>
#include <cstdlib>  // arr[i] = rand() % (10 + 1 - 1) + 1; // [1 ...10] Случайные числа  массива
#include <ctime> //srand(time(NULL)); Случайные числа  массива
#include <algorithm> // функция  stor  Быстрая сортировка std::sort(arr, arr + size);  
// функцию swap Сортировка через сравнениемассивов std::swap(arr[j], arr[j + 1]);
#include <string>
#include <time.h>

double mean(double num1, double num2) {
    return (num1 + num2) / 2;
}

double mean_arr(double arr[], const int len) {
    double sum = 0;
    
    for (int i = 0; i < len; i++) {
        sum += arr[i];
       
        return sum/len;
    }
}


int main(){
	setlocale(LC_ALL, "Rus");    
   
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
         It accepts array and its length,
             after which it returns the average
             arithmetic of all its elements.
        */
        const int size = 4;
        std::cout << "Inter the four namber -> \n";
        double arr1[size]{};
        std::cin >> arr1[0] >> arr1[1] >> arr1[2] >> arr1[3];
        std::cout << "Initial Array -> ";
       /* for (int i = 0; i < size; i++) {*/
            //std::cout << arr1[i] << "\t";
          //  mean_arr(arr1, size);
            std::cout << mean_arr(arr1, size) << "\t";
        
        




	return 0;
}