cmake_minimum_required(VERSION 3.8)

set(This_lib 2020_day4_lib)
set(This_bin 2020_day4_bin)

set(Headers
    Batch.hpp
    Interpreter.hpp
    passport/Builder.hpp
    passport/IToken.hpp
    passport/Passport.hpp
    passport/Scanner.hpp
    passport/Tokens.hpp
    passport/ValidationDetail.hpp
    passport/tokens/BirthYear.hpp
    passport/tokens/ChainBuilder.hpp
    passport/tokens/CountryID.hpp
    passport/tokens/ExpirationYear.hpp
    passport/tokens/EyeColor.hpp
    passport/tokens/HairColor.hpp
    passport/tokens/Height.hpp
    passport/tokens/IssueYear.hpp
    passport/tokens/PassportID.hpp
    passport/tokens/TokenBase.hpp
)

set(Sources_lib
    Batch.cpp
    passport/Builder.cpp
    passport/Passport.cpp
    passport/Scanner.cpp
    passport/tokens/BirthYear.cpp
    passport/tokens/ChainBuilder.cpp
    passport/tokens/CountryID.cpp
    passport/tokens/ExpirationYear.cpp
    passport/tokens/EyeColor.cpp
    passport/tokens/HairColor.cpp
    passport/tokens/Height.cpp
    passport/tokens/IssueYear.cpp
    passport/tokens/PassportID.cpp
    passport/tokens/TokenBase.cpp
)

set(Sources_bin
    ${Sources_lib}
    main.cpp
)

add_library(${This_lib} STATIC ${Sources_lib} ${Headers})
target_link_libraries(${This_lib} PUBLIC SrcFiles)

add_executable(${This_bin} ${Sources_bin})
target_link_libraries(${This_bin} PUBLIC SrcFiles)
