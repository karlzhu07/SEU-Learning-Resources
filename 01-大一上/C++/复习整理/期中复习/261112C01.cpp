//
// Created by Karl Zhu on 2026/11/12.
/*给定三个弧度值 \(x_1,x_2,x_3\)，计算 \(f(x)=\pi/2+3\sin^2(x)+0.5c\)，其中 \(\pi=3.141592653589793\)，\(c=4.5\)。用 #define 声明 \(\pi\)，用 const double 声明 \(c\)。把三个结果依次存入 double 数组。

输入　一行三个实数，均在 \([-10,10]\) 内。

输出　一行三个结果，每个结果恰好保留 4 位小数，中间以一个空格分隔。*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define pi 3.141592653589793

int main()
{
    const double c = 4.5;
    double result[3];
    for (int i = 0; i < 3; i++)
    {
        double x;
        cin >> x;
        result[i] = pi / 2 + 3 * sin(x) * sin(x) + 0.5 * c;
    }
    cout << fixed << setprecision(4)
         << result[0] << " " << result[1] << " " << result[2] << endl;
    return 0;
}
