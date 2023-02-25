#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Rion {
	class RION_API Log
	{
	private:
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
		static std::shared_ptr<spdlog::logger> s_CoreLogger;

	public:
		Log();
		~Log();

		static void init();
		inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return s_ClientLogger; }
	};

}

//macros for Core logging
#define RN_CORE_TRACE(...)  ::Rion::Log::getCoreLogger()->trace(__VA_ARGS__)
#define RN_CORE_INFO(...)   ::Rion::Log::getCoreLogger()->info(__VA_ARGS__)
#define RN_CORE_WARN(...)   ::Rion::Log::getCoreLogger()->warn(__VA_ARGS__)
#define RN_CORE_ERROR(...)  ::Rion::Log::getCoreLogger()->error(__VA_ARGS__)
#define RN_CORE_FATAL(...)  ::Rion::Log::getCoreLogger()->fatal(__VA_ARGS__)


//macros for Client logging
#define RN_TRACE(...)       ::Rion::Log::getClientLogger()->trace(__VA_ARGS__)
#define RN_INFO(...)        ::Rion::Log::getClientLogger()->info(__VA_ARGS__)
#define RN_WARN(...)        ::Rion::Log::getClientLogger()->warn(__VA_ARGS__)
#define RN_ERROR(...)       ::Rion::Log::getClientLogger()->error(__VA_ARGS__)
#define RN_FATAL(...)       ::Rion::Log::getClientLogger()->fatal(__VA_ARGS__)