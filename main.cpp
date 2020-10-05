#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <thread>
#include <zconf.h>
#include "c20200506/Paly605/Paly605.h"
#include "c20201005/thread-1/TestThread1.h"
#include "c20201005/thread-1/TestThread1.cpp"

class Greet
{
    const char *owner = "Greet";
public:
    void SayHello(const char *name) {
        // sleep(1);
        for (int i=0;i<99999999;i++) {
            i = i + i;
        }
        // std::cout << "Hello " << name << " from " << this->owner << std::endl;
    }
};
int main() {
    Greet greet;

    time_t first, second;
    first = time(NULL);
    for (int i = 0; i < 100000; i++) {
        //std::thread thread(&Greet::SayHello, &greet, "C++11");
        //thread.join();
        //greet.SayHello("C++11");
    }
    second = time(NULL);
    printf("The difference is: %f seconds\n",difftime(second,first));



    return 0;
}
//输出：Hello C++11 from Greet