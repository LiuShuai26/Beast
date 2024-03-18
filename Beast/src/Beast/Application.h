//
// Created by Shuai Liu on 3/17/24.
//

#ifndef APPLICATION_H
#define APPLICATION_H

#include "Events/Event.h"

namespace Beast {

class Application {
public:
    void Run();

};
    // To be defined in CLIENT
    Application* CreateApplication();

} // Beast

#endif //APPLICATION_H
