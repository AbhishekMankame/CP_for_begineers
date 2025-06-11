#include<iostream>
#include<thread>
#include<map>
#include<string>
#include<chrono>
using namespace std;
using namespace std::chrono_literals;

void RefreshForecast(std::map<std::string, int> forecastMap) {
    while(true){
        for(auto& item: forecastMap) {
            item.second++;
            std::cout << item.first<<" - " << item.second<<std::endl;
        }
        std::this_thread::sleep_for(2000ms);
    }  
}

int main() {
    map<string, int> forecastMap = {
        {"New York",15},
        {"Mumbai",20},
        {"Berlin",18}
    };
    std::thread bgWorker(RefreshForecast, forecastMap);

    system("pause>nul"); // Pause the console to see the output
}