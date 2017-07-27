/*
    custom icon engine Qt plugin
    Copyright (C) 2017  Nick Korotysh <nick.korotysh@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PALETTE_ICON_ENGINE_PLUGIN_H
#define PALETTE_ICON_ENGINE_PLUGIN_H

#include <QIconEnginePlugin>


class PaletteIconEnginePlugin : public QIconEnginePlugin
{
  Q_OBJECT
  Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QIconEngineFactoryInterface" FILE "paletteicon.json")

public:
  PaletteIconEnginePlugin(QObject* parent = 0);

  QIconEngine* create(const QString& filename = QString()) Q_DECL_OVERRIDE;
};

#endif // PALETTE_ICON_ENGINE_PLUGIN_H