ARCHS = armv7 armv7s arm64
TARGET = iphone:clang:latest:latest
DEBUG = 0

THEOS_BUILD_DIR = debs

include theos/makefiles/common.mk

TWEAK_NAME = Handwrype
Handwrype_FILES = Tweak.xm
Handwrype_FRAMEWORKS = UIKit

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"
