#include <iostream>
using namespace std;

int main() {

    double totalDistance;      // �@��Ѫ��`���{�� (����)
    double fuelCost;           // �T�o�@����/�[�ڦh�ֿ�
    double fuelEfficiency;     // �����@����/�[�گ��p�h�֤���
    double parkingFee;         // �@�Ѫ������O
    double tollFee;            // �@�Ѫ��q��O(�L���O)

    cout << "�п�J�@��Ѫ��`���{�� (����): ";
    cin >> totalDistance;

    cout << "�п�J�T�o�@���ɪ�����: ";
    cin >> fuelCost;

    cout << "�п�J�����C���ɯ��p�h�֤���: ";
    cin >> fuelEfficiency;

    cout << "�п�J�@�Ѫ������O: ";
    cin >> parkingFee;

    cout << "�п�J�@�Ѫ��q��O (�L���O): ";
    cin >> tollFee;

    // �p��o�O
    double fuelNeeded = totalDistance / fuelEfficiency; // �X����
    double fuelExpense = fuelNeeded * fuelCost;         // �o�O

    // �`��O
    double totalExpense = fuelExpense + parkingFee + tollFee;

    cout << "�o�O: " << fuelExpense << " ��" << endl;
    cout << "�����O: " << parkingFee << " ��" << endl;
    cout << "�q��O: " << tollFee << " ��" << endl;
    cout << "�`��O: " << totalExpense << " ��" << endl;

    return 0;
}
