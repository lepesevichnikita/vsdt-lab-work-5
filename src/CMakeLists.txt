find_package(Qt5 COMPONENTS Widgets Qml Quick Core REQUIRED)
find_package(Qt5QuickCompiler)

set(lab5_SRCS
  main.cpp
  task1.cpp
  )

qtquick_compiler_add_resources(RESOURCES 
  qml.qrc
  )

add_executable(lab5
  ${lab5_SRCS}
  ${RESOURCES}
  )

qt5_use_modules(lab5 Widgets Quick Core Network)
