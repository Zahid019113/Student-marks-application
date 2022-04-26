#include<iostream>
#include<conio.h>
int main ()
{
    int n,sum=0;
    std::cout << "Enter total students number : ";
    std::cin >> n;
    int students[n];
    for (int i =0;i<n;i++)
    {
        std::cout << "Enter the student number  "  << i+1 << " = ";
        std::cin >> students [i];
        sum = sum + students [i];
    }
    std::cout << "Total marks : " << sum;
    std::cout << std::endl;
    float avg= (float) sum /n;
    std::cout << "Average marks : " << avg;
    std::cout << std::endl;
    int max = students[0];
    int min = students [0];
    for (int i = 1;i<n;i++)
    {
        if (max < students [i])
        {
            max = students [i];
        }
        if (min >students [i])
        {
            min = students [i];
        }
    }
    std::cout << "Maximum marks = " << max;
    std::cout << std::endl;
    std::cout << "Minimum marks = " << min;
    std::cout << std::endl;
    getch ();
}
