#ifndef PLUGIN_WIDGET_PLUGIN_SETTINGS_H
#define PLUGIN_WIDGET_PLUGIN_SETTINGS_H

#include <QString>
#include <QMap>
#include <QVariant>

namespace plugin {

enum WidgetPluginOption {
    OPT_USE_CLOCK_FONT,
    OPT_CUSTOM_FONT,
    OPT_ZOOM_MODE
};

QString OptionKey(const WidgetPluginOption opt, const QString& plg_name);


enum ZoomMode {
    ZM_NOT_ZOOM,
    ZM_AUTOSIZE,
    ZM_CLOCK_ZOOM
};

void InitDefaults(QMap<WidgetPluginOption, QVariant>* defaults);

} // namespace plugin

#endif // PLUGIN_WIDGET_PLUGIN_SETTINGS_H