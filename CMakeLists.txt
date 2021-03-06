cmake_minimum_required(VERSION 3.12)
project(Server)

set(CMAKE_CXX_STANDARD 14)

include_directories(Client)
include_directories(Client/nlohmann)
include_directories(Client/nlohmann/detail)
include_directories(Client/nlohmann/detail/conversions)
include_directories(Client/nlohmann/detail/input)
include_directories(Client/nlohmann/detail/iterators)
include_directories(Client/nlohmann/detail/meta)
include_directories(Client/nlohmann/detail/output)
include_directories(Pointer/Single)
include_directories(Server)
include_directories(Server/nlohmann)
include_directories(Server/nlohmann/detail)
include_directories(Server/nlohmann/detail/conversions)
include_directories(Server/nlohmann/detail/input)
include_directories(Server/nlohmann/detail/iterators)
include_directories(Server/nlohmann/detail/meta)
include_directories(Server/nlohmann/detail/output)

add_executable(Server
        Client/nlohmann/detail/conversions/from_json.hpp
        Client/nlohmann/detail/conversions/to_chars.hpp
        Client/nlohmann/detail/conversions/to_json.hpp
        Client/nlohmann/detail/input/binary_reader.hpp
        Client/nlohmann/detail/input/input_adapters.hpp
        Client/nlohmann/detail/input/json_sax.hpp
        Client/nlohmann/detail/input/lexer.hpp
        Client/nlohmann/detail/input/parser.hpp
        Client/nlohmann/detail/iterators/internal_iterator.hpp
        Client/nlohmann/detail/iterators/iter_impl.hpp
        Client/nlohmann/detail/iterators/iteration_proxy.hpp
        Client/nlohmann/detail/iterators/json_reverse_iterator.hpp
        Client/nlohmann/detail/iterators/primitive_iterator.hpp
        Client/nlohmann/detail/meta/cpp_future.hpp
        Client/nlohmann/detail/meta/detected.hpp
        Client/nlohmann/detail/meta/is_sax.hpp
        Client/nlohmann/detail/meta/type_traits.hpp
        Client/nlohmann/detail/meta/void_t.hpp
        Client/nlohmann/detail/output/binary_writer.hpp
        Client/nlohmann/detail/output/output_adapters.hpp
        Client/nlohmann/detail/output/serializer.hpp
        Client/nlohmann/detail/exceptions.hpp
        Client/nlohmann/detail/json_pointer.hpp
        Client/nlohmann/detail/json_ref.hpp
        Client/nlohmann/detail/macro_scope.hpp
        Client/nlohmann/detail/macro_unscope.hpp
        Client/nlohmann/detail/value_t.hpp
        Client/nlohmann/adl_serializer.hpp
        Client/nlohmann/json.hpp
        Client/nlohmann/json_fwd.hpp
        Client/Client.cpp
        Client/json.hpp
        Client/main.cpp
        Pointer/Single/ListaSimple.h
        Pointer/Single/MPointer.cpp
        Pointer/Single/MPointerGC.h
        Pointer/main.cpp
        Server/nlohmann/detail/conversions/from_json.hpp
        Server/nlohmann/detail/conversions/to_chars.hpp
        Server/nlohmann/detail/conversions/to_json.hpp
        Server/nlohmann/detail/input/binary_reader.hpp
        Server/nlohmann/detail/input/input_adapters.hpp
        Server/nlohmann/detail/input/json_sax.hpp
        Server/nlohmann/detail/input/lexer.hpp
        Server/nlohmann/detail/input/parser.hpp
        Server/nlohmann/detail/iterators/internal_iterator.hpp
        Server/nlohmann/detail/iterators/iter_impl.hpp
        Server/nlohmann/detail/iterators/iteration_proxy.hpp
        Server/nlohmann/detail/iterators/json_reverse_iterator.hpp
        Server/nlohmann/detail/iterators/primitive_iterator.hpp
        Server/nlohmann/detail/meta/cpp_future.hpp
        Server/nlohmann/detail/meta/detected.hpp
        Server/nlohmann/detail/meta/is_sax.hpp
        Server/nlohmann/detail/meta/type_traits.hpp
        Server/nlohmann/detail/meta/void_t.hpp
        Server/nlohmann/detail/output/binary_writer.hpp
        Server/nlohmann/detail/output/output_adapters.hpp
        Server/nlohmann/detail/output/serializer.hpp
        Server/nlohmann/detail/exceptions.hpp
        Server/nlohmann/detail/json_pointer.hpp
        Server/nlohmann/detail/json_ref.hpp
        Server/nlohmann/detail/macro_scope.hpp
        Server/nlohmann/detail/macro_unscope.hpp
        Server/nlohmann/detail/value_t.hpp
        Server/nlohmann/adl_serializer.hpp
        Server/nlohmann/json.hpp
        Server/nlohmann/json_fwd.hpp
        Server/main.cpp
        Server/Server.cpp
        Server/Server.h)
