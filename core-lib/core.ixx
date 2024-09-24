module;

#include <string>

export module core;

namespace core
{
    export std::string getMessage();
}

namespace core
{
    std::string getMessage()
    {
        return "Core module";
    }
}