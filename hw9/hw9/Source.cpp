#include <iostream>
using namespace std;

int main() {

    double totalDistance;      // 一整天的總里程數 (公里)
    double fuelCost;           // 汽油一公升/加侖多少錢
    double fuelEfficiency;     // 平均一公升/加侖能行駛多少公里
    double parkingFee;         // 一天的停車費
    double tollFee;            // 一天的通行費(過路費)

    cout << "請輸入一整天的總里程數 (公里): ";
    cin >> totalDistance;

    cout << "請輸入汽油一公升的價格: ";
    cin >> fuelCost;

    cout << "請輸入平均每公升能行駛多少公里: ";
    cin >> fuelEfficiency;

    cout << "請輸入一天的停車費: ";
    cin >> parkingFee;

    cout << "請輸入一天的通行費 (過路費): ";
    cin >> tollFee;

    // 計算油費
    double fuelNeeded = totalDistance / fuelEfficiency; // 幾公升
    double fuelExpense = fuelNeeded * fuelCost;         // 油費

    // 總花費
    double totalExpense = fuelExpense + parkingFee + tollFee;

    cout << "油費: " << fuelExpense << " 元" << endl;
    cout << "停車費: " << parkingFee << " 元" << endl;
    cout << "通行費: " << tollFee << " 元" << endl;
    cout << "總花費: " << totalExpense << " 元" << endl;

    return 0;
}
