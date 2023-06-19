#include <iostream>

template <typename T>  //템플릿
class Queue {  //큐 클레스
private:
    T data[10];
    int front;  //앞 데이터 변수
    int rear;  //끝 데이터 변수

public:
    Queue() {  //변수 초기화
        front = -1;
        rear = -1;
    }

    void add(T item) {  //데이터 추가 함수
        if (rear == 9) {
            throw std::overflow_error("Queue is full");  //다 찼을 때
        }
        if (front == -1) {
            front = 0;
        }
        rear++;
        data[rear] = item;
    }

    T remove() {  //데이터 제거 함수
        if (front == -1 || front > rear) {
            throw std::underflow_error("Queue is empty");  //다 비었을 때
        }
        T item = data[front];
        front++;
        return item;
    }
};

int main() {
    Queue<int> intQueue;
    Queue<std::string> stringQueue;

    try {  //예외 탐색
        intQueue.add(1);
        intQueue.add(2);
        intQueue.add(3);
        std::cout << intQueue.remove() << std::endl;
        std::cout << intQueue.remove() << std::endl;
        std::cout << intQueue.remove() << std::endl;
        std::cout << intQueue.remove() << std::endl; // 예외 발생
    }
    catch (std::exception& e) {  //예외 처리 
        std::cout << e.what() << std::endl;
    }

    try {  //예외 탐색
        stringQueue.add("1");
        stringQueue.add("2");
        stringQueue.add("3"); 
        stringQueue.add("4"); 
        stringQueue.add("5"); 
        stringQueue.add("6"); 
        stringQueue.add("7"); 
        stringQueue.add("8"); 
        stringQueue.add("9");
        stringQueue.add("10");
        stringQueue.add("11");   //예외 발생
    }
    catch (std::exception& e) {  //예외 처리
        std::cout << e.what() << std::endl;
    }

    return 0;
}