.PHONY : all clean build_time build_app build_ipa upload

ALLOW_BUILD = false

PROJECT = Goddess
BUILD_DIR = $(CURDIR)/build
IPA_NAME_PREFIX = goddess-online
IPA_NAME = $(IPA_NAME_PREFIX)-$(APP_VERSION)-$(BUILD_TIMESTAMP)
IPA_PATH = $(BUILD_DIR)/$(CONFIGURATION)-iphoneos/$(IPA_NAME).ipa
ITMS_SERVICES_PLIST_PATH = $(BUILD_DIR)/$(CONFIGURATION)-iphoneos/$(IPA_NAME).plist


# upload settings
SERVER_ALIAS = goddess-shared
UPLOAD_VERSION_PATH = $(BUILD_DIR)/$(CONFIGURATION)-iphoneos/version


PLIST_BUDDY  = /usr/libexec/PlistBuddy


CUR_TIME = $(shell date '+%Y-%m-%d %H:%M:%S')
BUILD_TIME_PATH = /tmp/.goddess-ipa-build-time

ifeq ($(BUILD_ENV), dev)
	APP_NAME = 女神开发版
	APP_PATH = $(BUILD_DIR)/$(CONFIGURATION)-iphoneos/$(APP_NAME).app
	ALLOW_BUILD = true
	TARGET = dev
	CONFIGURATION = Debug
	DEVELOPER_NAME = DEVELOPER_NAME
	PROVISONING_PROFILE = PROVISONING_PROFILE
	UPLOAD_DIR = /home/goddess-shared/ota/ipa/dev
	DOWNLOAD_URL = http://192.168.1.32/ota/ipa/dev
endif

ifeq ($(BUILD_ENV), test)
	APP_NAME = 女神贺岁版
	APP_PATH = $(BUILD_DIR)/$(CONFIGURATION)-iphoneos/$(APP_NAME).app
	ALLOW_BUILD = true
	TARGET = test
	CONFIGURATION = Debug
	DEVELOPER_NAME = DEVELOPER_NAME
	PROVISONING_PROFILE = PROVISONING_PROFILE
	UPLOAD_DIR = /home/goddess-shared/ota/ipa/test
	DOWNLOAD_URL = http://192.168.1.32/ota/ipa/test
endif

ifeq ($(BUILD_ENV), prod)
	APP_NAME = 女神Online
	APP_PATH = $(BUILD_DIR)/$(CONFIGURATION)-iphoneos/$(APP_NAME).app
	ALLOW_BUILD = true
	TARGET = goddess
	CONFIGURATION = Release
	DEVELOPER_NAME = DEVELOPER_NAME
	PROVISONING_PROFILE = PROVISONING_PROFILE
	UPLOAD_DIR = /home/goddess-shared/ota/ipa/prod
	DOWNLOAD_URL = http://192.168.1.32/ota/ipa/prod
endif

ifeq ($(ALLOW_BUILD), false)
	TASKS = usage
else
	TASKS = build_time build_app build_ipa upload
endif

define BUILD_TIME
$(shell cat $(BUILD_TIME_PATH))
endef

define BUILD_TIMESTAMP
$(shell cat $(BUILD_TIME_PATH) | sed 's/://g' | sed 's/-//g' | sed 's/ //g')
endef

define APP_TITLE
$(APP_DISPLAY_NAME) $(APP_VERSION)
endef

define APP_DISPLAY_NAME
$(shell $(PLIST_BUDDY) -c 'Print :CFBundleDisplayName' '$(APP_PATH)/Info.plist')
endef

define APP_VERSION
$(shell $(PLIST_BUDDY) -c 'Print :CFBundleShortVersionString' '$(APP_PATH)/Info.plist')
endef

#define APP_REVISION
#$(shell $(PLIST_BUDDY) -c 'Print :CFBundleVersion' '$(APP_PATH)/Info.plist')
#endef

define APP_BUNDLE_IDENTIFIER
$(shell $(PLIST_BUDDY) -c 'Print :CFBundleIdentifier' '$(APP_PATH)/Info.plist')
endef

define ITMS_SERVICES_PLIST
'<?xml version="1.0" encoding="UTF-8"?>\
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">\
<plist version="1.0">\
<dict>\
<key>items</key>\
<array>\
<dict>\
<key>assets</key>\
<array>\
<dict>\
<key>kind</key>\
<string>software-package</string>\
<key>url</key>\
<string>$(DOWNLOAD_URL)/$(IPA_NAME).ipa</string>\
</dict>\
<dict>\
<key>kind</key>\
<string>full-size-image</string>\
<key>needs-shine</key>\
<true/>\
<key>url</key>\
<string>$(DOWNLOAD_URL)/$(IPA_NAME_PREFIX)_icon.png</string>\
</dict>\
<dict>\
<key>kind</key>\
<string>display-image</string>\
<key>needs-shine</key>\
<true/>\
<key>url</key>\
<string>$(DOWNLOAD_URL)/$(IPA_NAME_PREFIX)_icon.png</string>\
</dict>\
</array>\
<key>metadata</key>\
<dict>\
<key>bundle-identifier</key>\
<string>$(APP_BUNDLE_IDENTIFIER)</string>\
<key>bundle-version</key>\
<string>$(APP_VERSION)</string>\
<key>kind</key>\
<string>software</string>\
<key>subtitle</key>\
<string>$(APP_TITLE)</string>\
<key>title</key>\
<string>$(APP_TITLE)</string>\
</dict>\
</dict>\
</array>\
</dict>\
</plist>'
endef


all: $(TASKS)

usage:
	@echo "usage:"
	@echo "    make BUILD_ENV=dev|test|prod"
	@echo "    make debug_sim_6|release_sim_6|debug_sim_7|release_sim_7"

clean:
	@rm -rf $(BUILD_DIR)
	@echo "** CLEAN SUCCEEDED **"

debug_sim_6:
	@xcodebuild -sdk iphonesimulator6.0 -project $(PROJECT).xcodeproj -target dev -configuration Debug build
	@rm -rf build/Goddess
	@mkdir -p build/Goddess/Documents
	@mkdir -p build/Goddess/Library/Caches
	@mkdir -p build/Goddess/Library/Preferences
	@mkdir -p build/Goddess/tmp
	@mv build/Debug-iphonesimulator/*.app build/Goddess/

release_sim_6:
	@xcodebuild -sdk iphonesimulator6.0 -project $(PROJECT).xcodeproj -target dev -configuration Release build
	@rm -rf build/Goddess
	@mkdir -p build/Goddess/Documents
	@mkdir -p build/Goddess/Library/Caches
	@mkdir -p build/Goddess/Library/Preferences
	@mkdir -p build/Goddess/tmp
	@mv build/Release-iphonesimulator/*.app build/Goddess/

debug_sim_7:
	@xcodebuild -sdk iphonesimulator7.0 -project $(PROJECT).xcodeproj -target dev -configuration Debug build
	@rm -rf build/Goddess
	@mkdir -p build/Goddess/Documents
	@mkdir -p build/Goddess/Library/Caches
	@mkdir -p build/Goddess/Library/Preferences
	@mkdir -p build/Goddess/tmp
	@mv build/Debug-iphonesimulator/*.app build/Goddess/

release_sim_7:
	@xcodebuild -sdk iphonesimulator7.0 -project $(PROJECT).xcodeproj -target dev -configuration Release build
	@rm -rf build/Goddess
	@mkdir -p build/Goddess/Documents
	@mkdir -p build/Goddess/Library/Caches
	@mkdir -p build/Goddess/Library/Preferences
	@mkdir -p build/Goddess/tmp
	@mv build/Release-iphonesimulator/*.app build/Goddess/

build_time:
	@touch $(BUILD_TIME_PATH)
	@echo $(CUR_TIME) > $(BUILD_TIME_PATH)

build_app:
	@xcodebuild -project $(PROJECT).xcodeproj -target $(TARGET) -configuration $(CONFIGURATION) build

build_ipa:
	@xcrun --sdk iphoneos PackageApplication -v $(APP_PATH) -o $(IPA_PATH)
	@echo "** BUILD IPA SUCCEEDED **"

upload:
	@touch $(UPLOAD_VERSION_PATH)
	@cat $(BUILD_TIME_PATH) > $(UPLOAD_VERSION_PATH)
	@echo $(BUILD_TIMESTAMP) >> $(UPLOAD_VERSION_PATH)
	@echo $(APP_VERSION) >> $(UPLOAD_VERSION_PATH)
	@echo $(ITMS_SERVICES_PLIST) > $(ITMS_SERVICES_PLIST_PATH)
	@ssh $(SERVER_ALIAS) "mkdir -p $(UPLOAD_DIR)"
	@ssh $(SERVER_ALIAS) "> $(UPLOAD_DIR)/version"
	@scp $(IPA_PATH) $(SERVER_ALIAS):$(UPLOAD_DIR)
	@scp $(ITMS_SERVICES_PLIST_PATH) $(SERVER_ALIAS):$(UPLOAD_DIR)
	@scp $(UPLOAD_VERSION_PATH) $(SERVER_ALIAS):$(UPLOAD_DIR)
	@echo "** UPLOAD SUCCEEDED **"