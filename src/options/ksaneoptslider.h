/* ============================================================
 *
 * This file is part of the KDE project
 *
 * Date        : 2009-01-21
 * Description : Sane interface for KDE
 *
 * Copyright (C) 2009 by Kare Sars <kare dot sars at iki dot fi>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) version 3, or any
 * later version accepted by the membership of KDE e.V. (or its
 * successor approved by the membership of KDE e.V.), which shall
 * act as a proxy defined in Section 6 of version 3 of the license.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * ============================================================ */

#ifndef KSANE_OPT_SLIDER_H
#define KSANE_OPT_SLIDER_H

#include "ksaneoption.h"

namespace KSaneIface
{

class LabeledSlider;

class KSaneOptSlider : public KSaneOption
{
    Q_OBJECT

public:
    KSaneOptSlider(const SANE_Handle handle, const int index);

    void createWidget(QWidget *parent) Q_DECL_OVERRIDE;

    void readValue() Q_DECL_OVERRIDE;
    void readOption() Q_DECL_OVERRIDE;

    bool getMinValue(float &max) Q_DECL_OVERRIDE;
    bool getMaxValue(float &max) Q_DECL_OVERRIDE;
    bool getValue(float &val) Q_DECL_OVERRIDE;
    bool setValue(float val) Q_DECL_OVERRIDE;
    bool getValue(QString &val) Q_DECL_OVERRIDE;
    bool setValue(const QString &val) Q_DECL_OVERRIDE;
    bool hasGui() Q_DECL_OVERRIDE;

Q_SIGNALS:
    void fValueRead(float);

private Q_SLOTS:
    void sliderChanged(int val);

private:
    LabeledSlider *m_slider;
    int            m_iVal;
};

}  // NameSpace KSaneIface

#endif
