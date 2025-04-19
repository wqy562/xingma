#include <iostream>
void weeksAndDays(int totalDays) {
    int weeks = totalDays / 7;  
    int days = totalDays % 7;  
    std::cout << "总天数为: " << totalDays << " 天，等于 "<< weeks << " 周，" << days << " 天。\n";
}
int main() {
    int days;
    std::cout << "请输入天数: ";
    std::cin >> days;
    weeksAndDays(days);
    return 0;
}