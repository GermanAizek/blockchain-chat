cmake_minimum_required (VERSION 3.8)

add_executable (blockchain-chat "blockchain-chat.cpp" "blockchain-chat.h" "blockchain.cpp" "Classes/blockchain.h" "block.cpp" "Classes/block.h")

include_directories(thirdparty/openssl/include)
include_directories(thirdparty/boost)
