//���������
//�������� �������, ������� ������� ����� ��������� � ������ �������.
//
//F(1) = 0
//F(2) = 1
//F(N) = F(N - 1) + F(N - 2), N >= 3
//���� ��������� ������ ���������� � ������ ������������������, ������ ��������, ��������, �����.
//
//unsigned long long int fibonacci(unsigned int n);
//���������
//���� ����� ������������� �����.
//
//������������ ��������
//����� ��������� � ��������������� �������.

#include <iostream>
using namespace std;

unsigned int sum_of_numbers(unsigned long long int n);
unsigned long long int fibonacci(unsigned int n);

//----------------------------------------------------

unsigned long long int fibonacci(unsigned int n)
{
    int res;

    return res;
}

unsigned int sum_of_numbers(unsigned long long int n)
{
    unsigned int res = 0;
    while (n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << sum_of_numbers(fibonacci(n)) << endl;
    return 0;
}