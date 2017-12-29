require ${PN}.inc

SRC_URI = " \
	https://github.com/c-util/c-sundry/archive/v${PV}.tar.gz \
	file://0001-test-don-t-hardcode-64bit-long.patch \
"
SRC_URI[md5sum] = "f4018386255e466518b8d49a3c4020e0"
SRC_URI[sha256sum] = "6ff70a30535c357c61d8ece03527b7a95fc35ed04214987fc31b2d7275bd04a8"
