SUMMARY = "Standalone Red-Black Tree Implementation in Standard ISO-C11"
HOMEPAGE = "https://github.com/c-util/c-rbtree"
LICENSE = "Apachev2"
SECTION = "libs"
LIC_FILES_CHKSUM = "file://LICENSE-APACHE;md5=7b486c2338d225a1405d979ed2c15ce8"

S = "${WORKDIR}/${PN}-${PV}"

inherit meson

BBCLASSEXTEND = "native nativesdk"
