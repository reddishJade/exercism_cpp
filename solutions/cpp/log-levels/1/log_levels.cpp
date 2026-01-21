#include <string>

namespace log_line {
std::string message(std::string line) {
  // Find the position of ": " in the log line
  size_t pos = line.find(": ");

  // If found, return the substring after ": "
  if (pos != std::string::npos) {
    return line.substr(pos + 2); // +2 to skip ": "
  }

  // If not found, return empty string
  return "";
}

std::string log_level(std::string line) {
  // Find the position of "[" in the log line
  size_t pos = line.find("[");

  // If found, return the substring after "[" and before "]"
  if (pos != std::string::npos) {
    size_t end_pos = line.find("]");
    if (end_pos != std::string::npos) {
      return line.substr(pos + 1, end_pos - pos - 1); // +1 to skip "["
    }
  }

  // If not found, return empty string
  return "";
}

std::string reformat(std::string line) {
  // Get the message and log level using the existing functions
  std::string msg = message(line);
  std::string level = log_level(line);

  // Return the reformatted string: "message (log_level)"
  return msg + " (" + level + ")";
}
} // namespace log_line
