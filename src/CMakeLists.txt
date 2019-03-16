find_package(Qt5 COMPONENTS Widgets Qml Quick Core REQUIRED)
find_package(Qt5QuickCompiler)

qt5_wrap_cpp(lab5QtClasses
        "${INCLUDE_DIR}/task1.h"
        )

message(STATUS
        ${BINARY_RESOURCES}
        )

set(lab5_SRCS
        main.cpp
        task1.cpp
        ${lab5QtClasses}
        )



qtquick_compiler_add_resources(RESOURCES
        qml.qrc
        )

add_executable(lab5
        ${lab5_SRCS}
        ${RESOURCES}
        )

qt5_use_modules(lab5 Widgets Quick Core Network)
