#include <iostream>
#include <thread>

static bool is_finished = false;

void doWork() {

    using namespace std::chrono_literals;

    std::cout << "thread_id " << std::this_thread::get_id() << std::endl;

    while(!is_finished) {
        std::cout << "Working.." << std::endl;
        std::this_thread::sleep_for(1s);
    }
}
int main() {
    std::cout << "Hello, World!" << std::endl;

    std::thread worker(doWork);

    std::cin.get();
    is_finished = true;

    worker.join();
    std::cout << "Finished.." << std::endl;
    std::cout << "thread_id " << std::this_thread::get_id() << std::endl;

    return 0;
}
