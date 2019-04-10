deps_config := \
	/home/msh62/esp/esp-idf/components/app_trace/Kconfig \
	/home/msh62/esp/esp-idf/components/aws_iot/Kconfig \
	/home/msh62/esp/esp-idf/components/bt/Kconfig \
	/home/msh62/esp/esp-idf/components/driver/Kconfig \
	/home/msh62/esp/esp-idf/components/esp32/Kconfig \
	/home/msh62/esp/esp-idf/components/esp_adc_cal/Kconfig \
	/home/msh62/esp/esp-idf/components/esp_http_client/Kconfig \
	/home/msh62/esp/esp-idf/components/ethernet/Kconfig \
	/home/msh62/esp/esp-idf/components/fatfs/Kconfig \
	/home/msh62/esp/esp-idf/components/freertos/Kconfig \
	/home/msh62/esp/esp-idf/components/heap/Kconfig \
	/home/msh62/esp/esp-idf/components/libsodium/Kconfig \
	/home/msh62/esp/esp-idf/components/log/Kconfig \
	/home/msh62/esp/esp-idf/components/lwip/Kconfig \
	/home/msh62/esp/esp-idf/components/mbedtls/Kconfig \
	/home/msh62/esp/esp-idf/components/nvs_flash/Kconfig \
	/home/msh62/esp/esp-idf/components/openssl/Kconfig \
	/home/msh62/esp/esp-idf/components/pthread/Kconfig \
	/home/msh62/esp/esp-idf/components/spi_flash/Kconfig \
	/home/msh62/esp/esp-idf/components/spiffs/Kconfig \
	/home/msh62/esp/esp-idf/components/tcpip_adapter/Kconfig \
	/home/msh62/esp/esp-idf/components/vfs/Kconfig \
	/home/msh62/esp/esp-idf/components/wear_levelling/Kconfig \
	/home/msh62/esp/esp-idf/components/bootloader/Kconfig.projbuild \
	/home/msh62/esp/esp-idf/components/esptool_py/Kconfig.projbuild \
	/home/msh62/esp/esp-idf/examples/protocols/aws_iot/subscribe_publish/main/Kconfig.projbuild \
	/home/msh62/esp/esp-idf/components/partition_table/Kconfig.projbuild \
	/home/msh62/esp/esp-idf/Kconfig

include/config/auto.conf: \
	$(deps_config)

ifneq "$(IDF_CMAKE)" "n"
include/config/auto.conf: FORCE
endif

$(deps_config): ;
