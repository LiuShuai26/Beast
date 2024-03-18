//
// Created by Shuai Liu on 3/17/24.
//

#include "bspch.h"
#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Beast {

    void Application::Run() {
        WindowResizeEvent e(1280, 720);
        if (e.IsInCategory(EventCategoryApplication)) {
            BS_TRACE(e);
        }
        if (e.IsInCategory(EventCategoryInput)) {
            BS_TRACE(e);
        }

        while (true);
    }
} // Beast