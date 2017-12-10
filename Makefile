#############################################################################
# Makefile for building: qtcharts
# Generated by qmake (3.0) (Qt 5.6.2)
# Project:  qtcharts.pro
# Template: subdirs
# Command: /usr/lib64/qt5/bin/qmake -o Makefile qtcharts.pro
#############################################################################

MAKEFILE      = Makefile

first: make_first
QMAKE         = /usr/lib64/qt5/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = qtcharts1.0.0
DISTDIR = /home/linux/qtcharts/.obj/qtcharts1.0.0
SUBTARGETS    =  \
		sub-src \
		sub-examples \
		sub-tests


sub-src-qmake_all:  FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile
	cd src/ && $(MAKE) -f Makefile qmake_all
sub-src: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile
sub-src-make_first: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile 
sub-src-all: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile all
sub-src-clean: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile clean
sub-src-distclean: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile distclean
sub-src-install_subtargets: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile install
sub-src-uninstall_subtargets: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile uninstall
sub-examples-qmake_all: sub-src-qmake_all FORCE
	@test -d examples/ || mkdir -p examples/
	cd examples/ && $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile
	cd examples/ && $(MAKE) -f Makefile qmake_all
sub-examples: sub-src FORCE
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile
sub-examples-make_first: sub-src-make_first FORCE
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile 
sub-examples-all: sub-src-all FORCE
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile all
sub-examples-clean: sub-src-clean FORCE
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile clean
sub-examples-distclean: sub-src-distclean FORCE
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile distclean
sub-examples-install_subtargets: sub-src-install_subtargets FORCE
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile install
sub-examples-uninstall_subtargets: sub-src-uninstall_subtargets FORCE
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile uninstall
sub-tests-qmake_all: sub-src-qmake_all FORCE
	@test -d tests/ || mkdir -p tests/
	cd tests/ && $(QMAKE) /home/linux/qtcharts/tests/tests.pro -o Makefile
	cd tests/ && $(MAKE) -f Makefile qmake_all
sub-tests: sub-src FORCE
	@test -d tests/ || mkdir -p tests/
	cd tests/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/tests/tests.pro -o Makefile ) && $(MAKE) -f Makefile
sub-tests-make_first: sub-src-make_first FORCE
	@test -d tests/ || mkdir -p tests/
	cd tests/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/tests/tests.pro -o Makefile ) && $(MAKE) -f Makefile 
sub-tests-all: sub-src-all FORCE
	@test -d tests/ || mkdir -p tests/
	cd tests/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/tests/tests.pro -o Makefile ) && $(MAKE) -f Makefile all
sub-tests-clean: sub-src-clean FORCE
	@test -d tests/ || mkdir -p tests/
	cd tests/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/tests/tests.pro -o Makefile ) && $(MAKE) -f Makefile clean
sub-tests-distclean: sub-src-distclean FORCE
	@test -d tests/ || mkdir -p tests/
	cd tests/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/tests/tests.pro -o Makefile ) && $(MAKE) -f Makefile distclean
sub-tests-install_subtargets: sub-src-install_subtargets FORCE
	@test -d tests/ || mkdir -p tests/
	cd tests/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/tests/tests.pro -o Makefile ) && $(MAKE) -f Makefile install
sub-tests-uninstall_subtargets: sub-src-uninstall_subtargets FORCE
	@test -d tests/ || mkdir -p tests/
	cd tests/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/tests/tests.pro -o Makefile ) && $(MAKE) -f Makefile uninstall

Makefile: qtcharts.pro .qmake.conf .qmake.cache /usr/lib64/qt5/mkspecs/linux-g++/qmake.conf /usr/lib64/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib64/qt5/mkspecs/common/unix.conf \
		/usr/lib64/qt5/mkspecs/common/linux.conf \
		/usr/lib64/qt5/mkspecs/common/sanitize.conf \
		/usr/lib64/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib64/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib64/qt5/mkspecs/common/g++-base.conf \
		/usr/lib64/qt5/mkspecs/common/g++-unix.conf \
		/usr/lib64/qt5/mkspecs/qconfig.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dcore.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dcore_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dinput.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dinput_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dlogic.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dlogic_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquick.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquick_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickinput.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickrender.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3drender.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3drender_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_bluetooth.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_bluetooth_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_clucene_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_core.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_declarative.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_declarative_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_designer.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_designer_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_enginio.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_enginio_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_help.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_help_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_labscontrols_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_labstemplates_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_location.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_location_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_network.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_nfc.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_nfc_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_positioning.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_positioning_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qml.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qml_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_quick.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_quick_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_script.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_script_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_scripttools.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_scripttools_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_sensors.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_sensors_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_serialport.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_serialport_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_svg.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_svg_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_uiplugin.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_uitools.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_uitools_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_webchannel.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_webchannel_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_webkit.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_webkit_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_webkitwidgets.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_websockets.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_websockets_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_x11extras.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_x11extras_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		mkspecs/modules-inst/qt_lib_charts.pri \
		mkspecs/modules-inst/qt_lib_charts_private.pri \
		mkspecs/modules/qt_lib_charts.pri \
		/usr/lib64/qt5/mkspecs/features/qt_functions.prf \
		/usr/lib64/qt5/mkspecs/features/qt_config.prf \
		/usr/lib64/qt5/mkspecs/linux-g++/qmake.conf \
		/usr/lib64/qt5/mkspecs/features/spec_post.prf \
		/usr/lib64/qt5/mkspecs/qmodule.pri \
		/usr/lib64/qt5/mkspecs/features/qt_build_config.prf \
		.qmake.conf \
		.qmake.cache \
		/usr/lib64/qt5/mkspecs/features/exclusive_builds.prf \
		/usr/lib64/qt5/mkspecs/features/default_pre.prf \
		/usr/lib64/qt5/mkspecs/features/qt_parts.prf \
		/usr/lib64/qt5/mkspecs/features/resolve_config.prf \
		/usr/lib64/qt5/mkspecs/features/default_post.prf \
		/usr/lib64/qt5/mkspecs/features/exceptions_off.prf \
		/usr/lib64/qt5/mkspecs/features/qt_example_installs.prf \
		/usr/lib64/qt5/mkspecs/features/qt_docs_targets.prf \
		/usr/lib64/qt5/mkspecs/features/unix/largefile.prf \
		/usr/lib64/qt5/mkspecs/features/warn_on.prf \
		/usr/lib64/qt5/mkspecs/features/file_copies.prf \
		/usr/lib64/qt5/mkspecs/features/qt_build_extra.prf \
		/usr/lib64/qt5/mkspecs/features/testcase_targets.prf \
		/usr/lib64/qt5/mkspecs/features/yacc.prf \
		/usr/lib64/qt5/mkspecs/features/lex.prf \
		qtcharts.pro
	$(QMAKE) -o Makefile qtcharts.pro
/usr/lib64/qt5/mkspecs/features/spec_pre.prf:
/usr/lib64/qt5/mkspecs/common/unix.conf:
/usr/lib64/qt5/mkspecs/common/linux.conf:
/usr/lib64/qt5/mkspecs/common/sanitize.conf:
/usr/lib64/qt5/mkspecs/common/gcc-base.conf:
/usr/lib64/qt5/mkspecs/common/gcc-base-unix.conf:
/usr/lib64/qt5/mkspecs/common/g++-base.conf:
/usr/lib64/qt5/mkspecs/common/g++-unix.conf:
/usr/lib64/qt5/mkspecs/qconfig.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dcore.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dcore_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dinput.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dinput_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dlogic.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dlogic_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquick.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquick_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickinput.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickinput_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickrender.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickrender_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3drender.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3drender_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_bluetooth.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_bluetooth_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_clucene_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_core.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_core_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_dbus.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_declarative.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_declarative_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_designer.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_designer_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_designercomponents_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_enginio.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_enginio_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_gui.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_gui_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_help.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_help_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_labscontrols_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_labstemplates_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_location.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_location_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_network.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_network_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_nfc.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_nfc_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_opengl.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_positioning.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_positioning_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qml.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qml_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qmldevtools_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_quick.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_quick_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_quickparticles_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_script.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_script_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_scripttools.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_scripttools_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_sensors.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_sensors_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_serialport.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_serialport_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_sql.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_sql_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_svg.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_svg_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_testlib.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_uiplugin.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_uitools.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_uitools_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_webchannel.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_webchannel_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_webkit.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_webkit_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_webkitwidgets.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_webkitwidgets_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_websockets.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_websockets_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_widgets.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_x11extras.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_x11extras_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_xml.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_xml_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_xmlpatterns.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
mkspecs/modules-inst/qt_lib_charts.pri:
mkspecs/modules-inst/qt_lib_charts_private.pri:
mkspecs/modules/qt_lib_charts.pri:
/usr/lib64/qt5/mkspecs/features/qt_functions.prf:
/usr/lib64/qt5/mkspecs/features/qt_config.prf:
/usr/lib64/qt5/mkspecs/linux-g++/qmake.conf:
/usr/lib64/qt5/mkspecs/features/spec_post.prf:
/usr/lib64/qt5/mkspecs/qmodule.pri:
/usr/lib64/qt5/mkspecs/features/qt_build_config.prf:
.qmake.conf:
.qmake.cache:
/usr/lib64/qt5/mkspecs/features/exclusive_builds.prf:
/usr/lib64/qt5/mkspecs/features/default_pre.prf:
/usr/lib64/qt5/mkspecs/features/qt_parts.prf:
/usr/lib64/qt5/mkspecs/features/resolve_config.prf:
/usr/lib64/qt5/mkspecs/features/default_post.prf:
/usr/lib64/qt5/mkspecs/features/exceptions_off.prf:
/usr/lib64/qt5/mkspecs/features/qt_example_installs.prf:
/usr/lib64/qt5/mkspecs/features/qt_docs_targets.prf:
/usr/lib64/qt5/mkspecs/features/unix/largefile.prf:
/usr/lib64/qt5/mkspecs/features/warn_on.prf:
/usr/lib64/qt5/mkspecs/features/file_copies.prf:
/usr/lib64/qt5/mkspecs/features/qt_build_extra.prf:
/usr/lib64/qt5/mkspecs/features/testcase_targets.prf:
/usr/lib64/qt5/mkspecs/features/yacc.prf:
/usr/lib64/qt5/mkspecs/features/lex.prf:
qtcharts.pro:
qmake: FORCE
	@$(QMAKE) -o Makefile qtcharts.pro

qmake_all: sub-src-qmake_all sub-examples-qmake_all sub-tests-qmake_all FORCE

make_first: sub-src-make_first sub-examples-make_first  FORCE
all: sub-src-all sub-examples-all sub-tests-all  FORCE
clean: sub-src-clean sub-examples-clean sub-tests-clean  FORCE
distclean: sub-src-distclean sub-examples-distclean sub-tests-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.cache config.log mkspecs/modules/*.pri mkspecs/modules-inst/*.pri
install_subtargets: sub-src-install_subtargets sub-examples-install_subtargets FORCE
uninstall_subtargets: sub-src-uninstall_subtargets sub-examples-uninstall_subtargets FORCE

html_docs:
	$(MAKE) -f $(MAKEFILE) prepare_docs && $(MAKE) -f $(MAKEFILE) generate_docs

docs:
	$(MAKE) -f $(MAKEFILE) html_docs && $(MAKE) -f $(MAKEFILE) qch_docs

sub-src-install_html_docs:
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile install_html_docs
sub-examples-install_html_docs: sub-src-install_html_docs
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile install_html_docs
install_html_docs: sub-src-install_html_docs sub-examples-install_html_docs

sub-src-uninstall_html_docs:
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile uninstall_html_docs
sub-examples-uninstall_html_docs: sub-src-uninstall_html_docs
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile uninstall_html_docs
uninstall_html_docs: sub-src-uninstall_html_docs sub-examples-uninstall_html_docs

sub-src-install_qch_docs:
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile install_qch_docs
sub-examples-install_qch_docs: sub-src-install_qch_docs
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile install_qch_docs
install_qch_docs: sub-src-install_qch_docs sub-examples-install_qch_docs

sub-src-uninstall_qch_docs:
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile uninstall_qch_docs
sub-examples-uninstall_qch_docs: sub-src-uninstall_qch_docs
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile uninstall_qch_docs
uninstall_qch_docs: sub-src-uninstall_qch_docs sub-examples-uninstall_qch_docs

sub-src-install_docs:
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile install_docs
sub-examples-install_docs: sub-src-install_docs
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile install_docs
install_docs: sub-src-install_docs sub-examples-install_docs

sub-src-uninstall_docs:
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile uninstall_docs
sub-examples-uninstall_docs: sub-src-uninstall_docs
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile uninstall_docs
uninstall_docs: sub-src-uninstall_docs sub-examples-uninstall_docs

sub-src-qch_docs:
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile qch_docs
sub-examples-qch_docs: sub-src-qch_docs
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile qch_docs
qch_docs: sub-src-qch_docs sub-examples-qch_docs

sub-src-prepare_docs:
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile prepare_docs
sub-examples-prepare_docs: sub-src-prepare_docs
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile prepare_docs
prepare_docs: sub-src-prepare_docs sub-examples-prepare_docs

sub-src-generate_docs:
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile generate_docs
sub-examples-generate_docs: sub-src-generate_docs
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile generate_docs
generate_docs: sub-src-generate_docs sub-examples-generate_docs

sub-src-check:
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile check
sub-examples-check: sub-src-check
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile check
check: sub-src-check sub-examples-check

sub-src-benchmark:
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -f Makefile benchmark
sub-examples-benchmark: sub-src-benchmark
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -f Makefile benchmark
benchmark: sub-src-benchmark sub-examples-benchmark
install:install_subtargets  FORCE

uninstall: uninstall_subtargets FORCE

FORCE:

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: sub-src-distdir sub-examples-distdir sub-tests-distdir FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents mkspecs/modules-inst/qt_lib_charts.pri mkspecs/modules-inst/qt_lib_charts_private.pri mkspecs/modules/qt_lib_charts.pri .qmake.conf qtcharts.pro $(DISTDIR)/

sub-src-distdir: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/src/src.pro -o Makefile ) && $(MAKE) -e -f Makefile distdir DISTDIR=$(DISTDIR)/src

sub-examples-distdir: FORCE
	@test -d examples/ || mkdir -p examples/
	cd examples/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/examples/examples.pro -o Makefile ) && $(MAKE) -e -f Makefile distdir DISTDIR=$(DISTDIR)/examples

sub-tests-distdir: FORCE
	@test -d tests/ || mkdir -p tests/
	cd tests/ && ( test -e Makefile || $(QMAKE) /home/linux/qtcharts/tests/tests.pro -o Makefile ) && $(MAKE) -e -f Makefile distdir DISTDIR=$(DISTDIR)/tests
