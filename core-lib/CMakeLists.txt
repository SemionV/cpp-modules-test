add_library(core
        message/message.cpp)
target_sources(core
        PUBLIC FILE_SET CXX_MODULES FILES
            core/core.ixx
        core/stdlib.ixx
            message/message.ixx)
target_sources(core
        PRIVATE
            message/message.cpp)

add_dependencies(core std.compat)
target_link_libraries(core std.compat)