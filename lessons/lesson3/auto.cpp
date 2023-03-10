#include <iostream>

int main(){
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {'e'};

    //int modifier suffixes

    auto var6 { 123u}; //unsigned
    auto var7 { 123ul}; //unsigned long
    auto var8 {123ll}; //long long
}