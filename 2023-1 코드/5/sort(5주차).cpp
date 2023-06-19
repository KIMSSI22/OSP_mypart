#include <iostream>
const int NUMBER_TOTAL_SIZE = 10;
using namespace std;

int main() {
    int number[NUMBER_TOTAL_SIZE] = {2,4,3,5,7,6,8,9,0};
    int cnt = 0;  //카운트할 변수
    int used[10] = {NULL};  //사용된 숫자를 확인하는 배열 null로 초기화
    int min, temp;

    for(int i = 0; i < NUMBER_TOTAL_SIZE; i++){
      if(number[i]!=NULL){  //배열 number의 자리가 어디까지 사용되었는지 카운트
        cnt++;
      }
    }

    for (int i = 0; i < cnt; i++) {  //사용된 숫자들의 자리에 1을 넣어줌으로 유무 확인
        used[number[i]] = 1;
    }

    for (int i = 0; i < NUMBER_TOTAL_SIZE; i++) {
        if (used[i]==NULL) {  //0~9까지 숫자 중 null인 숫자를 number 배열에 삽입
            number[cnt] = i;
            cnt++;
        }
    }

    for (int i = 0; i < cnt - 1; i++) {  //선택 정렬
        min = i;
        for (int j = i + 1; j < cnt; j++) {
            if (number[j] < number[min]) {  //가장 작은 숫자를 가진 number을 찾을 때까지 돌림
                min = j;  //j for문으로 가장 작은 숫자가 있는 number의 j가 min으로 
            }
        }
        temp = number[i];  //i는 0에서 9가 될때까지 가장 작은 값을 차곡차곡 가지게 됨
        number[i] = number[min];
        number[min] = temp;
    }

    for (int i = 0; i < cnt - 1; i++) { 
        cout << number[i] << ",";  //정렬된 배열 출력
    }
    cout << number[cnt - 1] << endl;  //출력 예시와 같게 하기위해서

    return 0;
}
