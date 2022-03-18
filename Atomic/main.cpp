#include <iostream>
#include <thread>
#include <vector>
#include <atomic>
#include <chrono>


// 0.001896 sec
// static int counter = 0;

// 0.002157 sec by sequential
// 0.001967 sec by memory_order_relaxed
static std::atomic<int> counter(0);

void incrementCOunter() {
    for (int i = 0; i < 100; i++) {
        counter.fetch_add(1, std::memory_order_relaxed);
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::vector<std::thread> vec;

    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 100; i++) {
        vec.push_back(std::thread(incrementCOunter));
    }

    for (std::thread &th : vec) {
        th.join();
    }

    auto end = std::chrono::high_resolution_clock::now();

    std::cout << counter << std::endl;


    // Calculating total time taken by the program.
    double time_taken =
            std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();

    time_taken *= 1e-9;

    std::cout << "Time taken by program is : " << std::fixed
         << time_taken;
    std::cout << " sec" << std::endl;



    return 0;
}
