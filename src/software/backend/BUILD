package(default_visibility = ["//visibility:public"])

cc_library(
    name = "backend",
    srcs = ["backend.cpp"],
    hdrs = ["backend.h"],
    deps = [
        "//software/multithreading:subject",
        "//software/multithreading:threaded_observer",
        "//software/proto:sensor_msg_cc_proto",
        "//software/world",
    ],
)

cc_library(
    name = "radio_backend",
    srcs = ["radio_backend.cpp"],
    hdrs = ["radio_backend.h"],
    deps = [
        ":backend",
        ":ssl_proto_client",
        "//software/backend/radio:radio_output",
        "//software/util/design_patterns:generic_factory",
    ],
    # We force linking so that the static variables required for the "factory"
    # design pattern to work are linked in
    # https://www.bfilipek.com/2018/02/static-vars-static-lib.html
    alwayslink = True,
)

cc_library(
    name = "wifi_backend",
    srcs = ["wifi_backend.cpp"],
    hdrs = ["wifi_backend.h"],
    deps = [
        ":backend",
        ":ssl_proto_client",
        "//shared:constants",
        "//software:constants",
        "//software/networking:threaded_proto_multicast_listener",
        "//software/networking:threaded_proto_multicast_sender",
        "//software/proto:defending_side_msg_cc_proto",
        "//software/proto/message_translation:defending_side",
        "//software/proto/message_translation:tbots_protobuf",
        "//software/util/design_patterns:generic_factory",
    ],
    # We force linking so that the static variables required for the "factory"
    # design pattern to work are linked in
    # https://www.bfilipek.com/2018/02/static-vars-static-lib.html
    alwayslink = True,
)

cc_library(
    name = "all_backends",
    deps = [
        ":radio_backend",
        ":wifi_backend",
    ],
)

cc_library(
    name = "ssl_proto_client",
    srcs = ["ssl_proto_client.cpp"],
    hdrs = ["ssl_proto_client.h"],
    deps = [
        "//software:constants",
        "//software/networking:threaded_proto_multicast_listener",
        "//software/parameter:dynamic_parameters",
        "//software/proto:ssl_cc_proto",
    ],
)
