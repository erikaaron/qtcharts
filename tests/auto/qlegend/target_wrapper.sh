#!/bin/sh
LD_LIBRARY_PATH=/home/linux/qtcharts/lib:/usr/lib64${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}
export LD_LIBRARY_PATH
QT_PLUGIN_PATH=/usr/lib64/qt5/plugins${QT_PLUGIN_PATH:+:$QT_PLUGIN_PATH}
export QT_PLUGIN_PATH
exec "$@"
