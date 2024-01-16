#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <condition_variable>

const int BUFFER_SIZE = 5;
std::vector<int> buffer(BUFFER_SIZE);
std::mutex mtx;
std::condition_variable producer_cv, consumer_cv;

void producer() {
    for (int i = 0; i < 10; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        producer_cv.wait(lock, [] { return buffer.size() < BUFFER_SIZE; });
        int item = rand() % 100;
        buffer.push_back(item);
        std::cout << "Produced: " << item << ", Buffer size: " << buffer.size() << std::endl;
        lock.unlock();
        consumer_cv.notify_one();
    }
}

void consumer() {
    for (int i = 0; i < 10; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        consumer_cv.wait(lock, [] { return !buffer.empty(); });
        int item = buffer.back();
        buffer.pop_back();
        std::cout << "Consumed: " << item << ", Buffer size: " << buffer.size() << std::endl;
        lock.unlock();
        producer_cv.notify_one();
    }
}

int main() {
    std::thread producer_thread(producer);
    std::thread consumer_thread(consumer);
    
    producer_thread.join();
    consumer_thread.join();
    
    return 0;
}
