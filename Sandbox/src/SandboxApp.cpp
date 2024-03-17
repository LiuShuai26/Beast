//
// Created by Shuai Liu on 3/17/24.
//


#include <Beast.h>

class Sandbox : public Beast::Application {
public:
    Sandbox() {

    }
    ~Sandbox() {

    }
};


Beast::Application* Beast::CreateApplication() {
    return new Sandbox();
}

// int main() {
//     Sandbox* sandbox = new Sandbox();
//     sandbox->Run();
//     delete sandbox;
// }