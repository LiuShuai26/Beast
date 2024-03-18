//
// Created by Shuai Liu on 3/17/24.
//

#ifndef APPLICATION_H
#define APPLICATION_H

#include "Core.h"
#include "Events/Event.h"
#include "Events/ApplicationEvent.h"
#include "Window.h"

namespace Beast {

class Application {
public:
    Application();
    virtual ~Application();

    void Run();

    void OnEvent(Event& e);
private:
    bool OnWindowClose(WindowCloseEvent& e);
    std::unique_ptr<Window> m_Window;
    bool m_Running = true;

};
    // To be defined in CLIENT
    Application* CreateApplication();

} // Beast

#endif //APPLICATION_H
