//
// Created by Shuai Liu on 3/18/24.
//

#ifndef ENTRYPOINT_H
#define ENTRYPOINT_H

#endif //ENTRYPOINT_H

#include "Beast/Application.h"

int main(int argc, char** argv) {
    Beast::Log::Init();
    BS_WARN("Initialized Log!");
    int a = 5;
    BS_INFO("Hello! Var={0}", a);

    auto app = Beast::CreateApplication();
    app->Run();
    delete app;
}