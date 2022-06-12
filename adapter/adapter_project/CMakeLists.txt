cmake_minimum_required(VERSION 3.22)
project(adapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(adapter main.cpp SystemRejestracji.cpp SystemRejestracji.h User.cpp User.h DbAdapter.cpp DbAdapter.h RedisAdapter.cpp RedisAdapter.h PostgresAdapter.cpp PostgresAdapter.h OracleAdapter.cpp OracleAdapter.h RedisORM.cpp RedisORM.h PostgresORM.cpp PostgresORM.h OracleORM.cpp OracleORM.h)
