#include <iostream>
#include <cstdlib>  // arr[i] = rand() % (10 + 1 - 1) + 1; // [1 ...10] ��������� �����  �������
#include <ctime> //srand(time(NULL)); ��������� �����  �������
#include <algorithm> // �������  stor  ������� ���������� std::sort(arr, arr + size);  
// ������� swap ���������� ����� ����������������� std::swap(arr[j], arr[j + 1]);
#include <string>
#include <time.h>

double mean(double num1, double num2) {
    return (num1 + num2) / 2;
}
double mean_arr(int arr[], const int length) {
    int sum = 0;
    for (int i = 0; i < length; i++)
        sum += arr[i];
    return (double)sum / length;
}
int  powers(int N, int M) {
    int num = 0;
    for (int i = 0; i <= M; i++) {
        num = pow(N, M);
        //std::cout << "Power: " << '\n';
        return num;
    }
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



	return 0;
}