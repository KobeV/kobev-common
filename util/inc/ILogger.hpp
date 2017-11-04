#include <ostream>

#ifndef I_LOGGER_HPP
#define I_LOGGER_HPP

namespace kobev
{
  namespace logging
  {
    enum class Severity : int {
      kNone = 0x00,
      kError = 0x01,
      kWarning = 0x02,
      kInfo = 0x04,
      kTrace = 0x08,
      kDebug = 0x10,
      kAll = 0xff
    };

    auto ToString(const Severity severity)
    {
      switch (severity)
      {
        case (Severity::kError):
          return "ERROR";
        case (Severity::kWarning):
          return "WARNING";
        case (Severity::kInfo):
          return "INFO";
        case (Severity::kTrace):
          return "TRACE";
        case (Severity::kDebug):
          return "DEBUG";
        default:
          return "UNKNOWN";
      }
    }
  }
}

#endif
