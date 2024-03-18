//
// Created by Shuai Liu on 3/18/24.
//

#ifndef MACWINDOW_H
#define MACWINDOW_H


#include "Beast/Window.h"

#include <GLFW/glfw3.h>

namespace Beast {

    class MacWindow : public Window
    {
    public:
        MacWindow(const WindowProps& props);
        virtual ~MacWindow();

        void OnUpdate() override;

        inline unsigned int GetWidth() const override { return m_Data.Width; }
        inline unsigned int GetHeight() const override { return m_Data.Height; }

        // Window attributes
        inline void SetEventCallback(const EventCallbackFn& callback) override { m_Data.EventCallback = callback; }
        void SetVSync(bool enabled) override;
        bool IsVSync() const override;
    private:
        virtual void Init(const WindowProps& props);
        virtual void Shutdown();
        GLFWwindow* m_Window;

        struct WindowData
        {
            std::string Title;
            unsigned int Width, Height;
            bool VSync;

            EventCallbackFn EventCallback;
        };

        WindowData m_Data;
    };
}

#endif //MACWINDOW_H
