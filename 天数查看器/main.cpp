#include <iostream>
void weeksAndDays(int totalDays) {
    int weeks = totalDays / 7;  
    int days = totalDays % 7;  
    std::cout << "������Ϊ: " << totalDays << " �죬���� "<< weeks << " �ܣ�" << days << " �졣\n";
}
int main() {
    int days;
    std::cout << "����������: ";
    std::cin >> days;
    weeksAndDays(days);
    return 0;
}