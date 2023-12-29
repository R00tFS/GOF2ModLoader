TARGET := iphone:clang:latest:12.2
INSTALL_TARGET_PROCESSES = "Galaxy on Fire 2 HD"


include $(THEOS)/makefiles/common.mk

TWEAK_NAME = GOF2ModLoader

GOF2ModLoader_FILES = $(shell find Sources/GOF2ModLoader -name '*.swift') $(shell find Sources/GOF2ModLoaderC -name '*.m' -o -name '*.c' -o -name '*.mm' -o -name '*.cpp')
GOF2ModLoader_SWIFTFLAGS = -ISources/GOF2ModLoaderC/include
GOF2ModLoader_CFLAGS = -fobjc-arc -ISources/GOF2ModLoaderC/include

include $(THEOS_MAKE_PATH)/tweak.mk
