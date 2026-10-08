cmake_minimum_required(VERSION 3.14)
project(TonalyzeModel CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(tonalyze_tests
  UploadQuota.cpp
  Feedback.cpp
  SystemClock.cpp
  tests/test_uploadquota_plain.cpp
  tests/test_uploadquota_stub.cpp
  tests/test_feedback_mock.cpp
)

target_link_libraries(tonalyze_tests gtest_main gmock)

include(GoogleTest)
gtest_discover_tests(tonalyze_tests)
