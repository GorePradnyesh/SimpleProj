#include <string>
#include <algorithm>

std::string Substr(const std::string& inString)
{
    const std::uint32_t kDefaultLen = 5;
    auto subStrLen =  std::min(static_cast<std::uint32_t>(inString.length()), kDefaultLen);
    return inString.substr(0, subStrLen);
}
