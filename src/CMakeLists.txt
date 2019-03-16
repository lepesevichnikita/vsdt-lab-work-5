qt5_wrap_cpp(lab5QtClasses
        "${INCLUDE_DIR}/task1.h"
        )

set(lab5_SRCS
        main.cpp
        task1.cpp
        ${lab5QtClasses}
        )

qtquick_compiler_add_resources(RESOURCES
        "${RESOURCES_DIR}/qml.qrc"
        )
add_executable(lab5
        ${lab5_SRCS}
        ${RESOURCES}
        )

qt5_use_modules(lab5 Widgets Quick Core Network)
