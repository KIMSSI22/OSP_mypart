#include <iostream>
#include <cmath>  //round 사용을 위해
#include <iomanip>  //setprecision 사용을 위해

using namespace std;

int main() {
    int num[5];  //5개 숫자를 받기 위해 배열 사용
    double mean = 0;
    int sum = 0;
    int min = 99999;  //최솟값을 구하기 위해 큰수 넣음
    int max = -99999;  //최댓값을 구하기 위해 작은수 넣음

    cout << "Enter 5 intger >> ";

    for (int i = 0; i < 5; i++) {  //5번 반복
        cin >> num[i];  //배열에 수 저장

        if (num[i] < min) {  //최솟값을 찾기 위한 if문
            min = num[i];
        }
        if (num[i] > max) {  //최댓값을 찾기 위한 if문
            max = num[i];
        }

        sum += num[i];  //sum 계산
    }
    mean = (double)sum / 5;  //평균 계산

    cout << fixed << setprecision(1) << "Mean: " << round(mean * 10) / 10 << endl;  //setprecision로 소수점 1번째 자리까지 출력, round로 반올림
    cout << "Sum: " << sum << endl;
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}