#include<iostream>
#include<thread>
#include<map>
#include<string>
using namespace std;

void RefreshForecast(std::map<std::string, int> forecastMap) {
    for(auto item: forecastMap) {
        item.second++;
        std::cout << item.first<<" - " << item.second<<std::endl;
    }

}

int main() {
    map<string, int> forecastMap = {
        {"New York",15},
        {"Mumbai",20},
        {"Berlin",18}
    };


    system("pause>nul"); // Pause the console to see the output
}