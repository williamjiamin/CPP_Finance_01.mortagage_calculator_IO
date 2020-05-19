//乐学偶得版权所有，主讲人：William 公众号：乐学Fintech 网站：lexueoude.com
// Created by william from lexueoude.com
//

#include <iostream>

using namespace std;

int main() {
    const int howManyMonthsInAYear = 12;
//    建议加入初始数据进行占位
    double originalPrincipal = 0.0;

    cout << "------欢迎来到乐学偶得金融贷款计算器------" << endl;
    cout << "请输入您需要计算的贷款本金：" << flush;
    cin >> originalPrincipal;

    double yearInterestRate = 0.0;

    cout << "请输入您需要计算的贷款利息（年）：" << flush;
    cin >> yearInterestRate;

    int howManyYearsOfYourLoan = 0;

    cout << "请输入您需要计算的贷款期限（年）：" << flush;
    cin >> howManyYearsOfYourLoan;


    double monthInterestRate = yearInterestRate / howManyMonthsInAYear;
    long howManyMonthsOfLoan = howManyMonthsInAYear * howManyYearsOfYourLoan;

//    乐学偶得小tips：可通过std::fixed, std::scientific, std::hexfloat, std::defaultfloat进行输出调整，并注意观察数据类型
    cout << fixed << "贷款本金:" << originalPrincipal << "   " << "年利率:" << yearInterestRate << "   " << "贷款年限:"
         << howManyYearsOfYourLoan << "   " << "折合每月利率:" << monthInterestRate << "   " << "贷款期限（月）："
         << howManyMonthsOfLoan
         << endl;

}