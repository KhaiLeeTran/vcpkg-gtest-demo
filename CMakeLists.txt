cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Thêm toolchain của vcpkg
set(CMAKE_TOOLCHAIN_FILE "/home/quangkhai/vcpkg/scripts/buildsystems/vcpkg.cmake")

# Tìm thư viện gtest qua vcpkg
find_package(GTest CONFIG REQUIRED)

# Thêm các thư mục nguồn và header vào build
include_directories(include)
file(GLOB SOURCES "src/*.cpp")

# Tạo executable cho dự án và liên kết với GTest
add_executable(my_test ${SOURCES} tests/test_main.cpp)
target_link_libraries(my_test PRIVATE GTest::gtest GTest::gtest_main)
