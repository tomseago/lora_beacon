#set(COMPONENT_ADD_INCLUDEDIRS . "include")

#set(COMPONENT_SRCS
#        "sysmon.cpp"
#        )


#set(COMPONENT_REQUIRES brain-common app_update esp_timer)

#register_component()

idf_component_register(SRCS "sysmon.cpp"
                       INCLUDE_DIRS "include"
                       REQUIRES brain-util app_update esp_timer)