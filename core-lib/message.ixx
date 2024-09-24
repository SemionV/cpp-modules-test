module;

#include <string>

export module message;

namespace message
{
    export std::string getMessage();
}

namespace message
{
    std::string getMessage()
    {
        return "Core module";
    }
}