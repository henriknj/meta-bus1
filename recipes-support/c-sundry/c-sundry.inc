SUMMARY = "Collection of C sundries"
HOMEPAGE = "https://github.com/c-util/c-sundry"
LICENSE = "Apachev2"
SECTION = "libs"
LIC_FILES_CHKSUM = "file://LICENSE-APACHE;md5=7b486c2338d225a1405d979ed2c15ce8"

S = "${WORKDIR}/${PN}-${PV}"

inherit meson

BBCLASSEXTEND = "native nativesdk"
