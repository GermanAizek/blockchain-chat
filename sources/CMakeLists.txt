cmake_minimum_required (VERSION 3.8)

add_executable (blockchain-chat "blockchain-chat.cpp" "blockchain-chat.h" "blockchain.cpp" "blockchain.h" "block.h")

include_directories(${YOUR_DIRECTORY}/sdk/openssl/include)
