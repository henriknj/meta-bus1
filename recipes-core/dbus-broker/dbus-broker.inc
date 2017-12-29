jUMMARY = "The dbus-broker project is an implementation of a message bus as defined by the D-Bus specification"
HOMEPAGE = "https://github.com/bus1/dbus-broker"
LICENSE = "Apachev2"
SECTION = "libs"
LIC_FILES_CHKSUM = "file://LICENSE;md5=7b486c2338d225a1405d979ed2c15ce8"

S = "${WORKDIR}/${PN}-${PV}"

inherit meson python3native

DEPENDS = "python3-docutils-native glib-2.0 glib-2.0-native"
RDEPENDS_${PN} += "systemd glib-2.0"

PROVIDES = "virtual/dbus"

PACKAGECONFIG ?= "launcher ${@bb.utils.filter('DISTRO_FEATURES','selinux audit',d)}"
PACKAGECONFIG[launcher] = "-Dlauncher=true,-Dlauncher=false,dbus,systemd"
PACKAGECONFIG[audit] = "-Daudit=true,-Daudit=false,audit"
PACKAGECONFIG[selinux] = "-Dselinux=true,-Dselinux=false,libselinux"

PACKAGES_append = " ${PN}-units"
FILES_${PN}-units = "\
    ${systemd_system_unitdir}/dbus-broker.service \
    ${systemd_user_unitdir}/dbus-broker.service \
"

BBCLASSEXTEND = "native nativesdk"
