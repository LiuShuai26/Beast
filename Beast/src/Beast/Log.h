//
// Created by Shuai Liu on 3/18/24.
//

#ifndef LOG_H
#define LOG_H




#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Beast {

class Log {
public:
    static void Init();

    inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
    inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
private:
    static std::shared_ptr<spdlog::logger> s_CoreLogger;
    static std::shared_ptr<spdlog::logger> s_ClientLogger;
};

};

// Core log macros
#define BS_CORE_TRACE(...)    ::Beast::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BS_CORE_INFO(...)     ::Beast::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BS_CORE_WARN(...)     ::Beast::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BS_CORE_ERROR(...)    ::Beast::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BS_CORE_CRITICAL(...) ::Beast::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define BS_TRACE(...)         ::Beast::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BS_INFO(...)          ::Beast::Log::GetClientLogger()->info(__VA_ARGS__)
#define BS_WARN(...)          ::Beast::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BS_ERROR(...)         ::Beast::Log::GetClientLogger()->error(__VA_ARGS__)
#define BS_CRITICAL(...)      ::Beast::Log::GetClientLogger()->critical(__VA_ARGS__)

#endif //LOG_H