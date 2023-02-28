#include <iostream>
#include <cstdlib>  // arr[i] = rand() % (10 + 1 - 1) + 1; // [1 ...10] Случайные числа  массива
#include <ctime> //srand(time(NULL)); Случайные числа  массива
#include <algorithm> // функция  stor  Быстрая сортировка std::sort(arr, arr + size); std::swap(arr[j], arr[j + 1]);
#include <cmath> // pow



double mean(double num1, double num2) {
    return (num1 + num2) / 2;
}
double mean_arr(int arr[], const int length) {
    int sum = 0;
    for (int i = 0; i < length; i++)
        sum += arr[i];
    return (double)sum / length;
}
 unsigned long long powers(int N, int M) {
   unsigned long long num = 0;
    
    do {
        std::cout << N << "^" << num << " = " << pow(N, num) << " \n"; 
        num++;
    } while (num < M);
    std::cout << N << "^" << num << " = ";
    return pow(N, M);
}

int main(){
	setlocale(LC_ALL, "Rus");   
    int n, m;
         /*Task 1
        Create a mean function that returns
         the arithmetic mean of the two numbers
         passed into it.
         Don't forget to show it works
         by calling functio,n in the main block.
         */
         /*
         std::cout<<"Let's derive the arithmetic mean from the sum of the two nambers.\n\n";
         std::cout<<"Inter the 2 namder -> ";
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
        /*
        std::cout<<"Let's derive the arithmetic mean from the sum of the numbers in the array.\n\n";
        const int size = 4;
        std::cout << "Inter the four namber -> \n";
        int arr1[size]{};
        std::cin >> arr1[0] >> arr1[1] >> arr1[2] >> arr1[3];
        std::cout << "The average arithmetic of all its elements -> "<< mean_arr(arr1, size) << "\t";
        */
        /*Task 3
            Create a function powers(N, M) that
            takes two numeric values.The function should
            print to the console all powers of N from power 0 to
            degree M inclusive.
         */
        std::cout << "Task 3 \nRaise H to the power of M and output each value.\n\n";
        std::cout << "Inter the two numeric values: \n";
        std::cin >> n >> m;
        std::cout << powers(n, m);

        /*Task 4
Create a positive_arr function that takes
array and its length, after which it changes all negative values ​​into positive ones. themselves
positive numbers should not change in any way.
*/



	return 0;
}