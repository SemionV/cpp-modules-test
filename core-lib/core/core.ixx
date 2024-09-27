export module core;

import std.core;

namespace core
{
    export class Messages
    {
    public:
        template<class T>
        void printLine(const T& message)
        {
            std::cout << message << "\n";
        }
    };
}