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

if(ANDROID)
  set(BINARY_NAME ${LIBRARY_NAME})
  add_library(${LIBRARY_NAME}
          SHARED
          ${lab5_SRCS}
          ${RESOURCES}
          )
  add_qt_android_apk(${APK_NAME} ${LIBRARY_NAME})
else()
  set(BINARY_NAME ${EXECUTABLE_NAME})
  add_executable(${EXECUTABLE_NAME}
          ${lab5_SRCS}
          ${RESOURCES}
          )
endif()

qt5_use_modules(${BINARY_NAME} Widgets Quick Core Network)

if(ANDROID)
  add_qt_android_apk(${APK_NAME} ${BINARY_NAME})
endif()
