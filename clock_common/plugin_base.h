#ifndef PLUGIN_BASE_H
#define PLUGIN_BASE_H

#include "clock_common_global.h"
#include <QImage>

/*!
 * @brief Translatable plugin info structure.
 *
 * Fields of this structure contain different plugin information that can be translated
 * (inside plugin) and displayed anywhere in any dialog.
 * @see IClockPlugin::GetInfo()
 */
struct TPluginGUIInfo {
  QString display_name;   /*!< plugin display name (user friendly) */
  QString description;    /*!< plugin description */
  QImage icon;            /*!< plugin icon (logo) */
};

class QTranslator;

/*!
 * @brief Base class for plugins.
 *
 * This class provides some common logic for all plugins and it inherited by all plugin interfaces.
 * Do not use it directly, use only interfaces.
 */
class CLOCK_COMMON_EXPORT PluginBase : public QObject {
  Q_OBJECT

public:
  /*! Constructor. */
  PluginBase();
  /*! Destructor. */
  virtual ~PluginBase();
  /*!
   * Get translatable plugin info.
   * @return structure with plugin info
   */
  const TPluginGUIInfo& GetInfo() const;

protected:
  /*!
   * Autodetect system UI language and load translation.
   * @param prefix - language file path prefix (example: ":/lang/example_")
   */
  void InitTranslator(const QLatin1String& prefix);
  /// Structure with translatable plugin info. This must be filled in child constructor.
  TPluginGUIInfo info_;

private:
  QTranslator* translator_;
};

#endif // PLUGIN_BASE_H