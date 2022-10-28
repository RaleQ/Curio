#pragma once
#include <memory>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "Core.h"

class CURIO_API Log {
public:
	static void Init();

	inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
private:
	static std::shared_ptr<spdlog::logger> s_CoreLogger;
};

//Core Logging macros
#define CURIO_CORE_TRACE(...)     Log::GetCoreLogger() ->trace(__VA_ARGS__);
#define CURIO_CORE_INFO(...)      Log::GetCoreLogger() ->info(__VA_ARGS__);
#define CURIO_CORE_WARN(...)      Log::GetCoreLogger() ->warn(__VA_ARGS__);
#define CURIO_CORE_ERROR(...)     Log::GetCoreLogger() ->error(__VA_ARGS__);
#define CURIO_CORE_CRITICAL(...)  Log::GetCoreLogger() ->critical(__VA_ARGS__);
