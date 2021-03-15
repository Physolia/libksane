/* ============================================================
 *
 * This file is part of the KDE project
 *
 * Description : Base class for option widgets
 *
 * SPDX-FileCopyrightText: 2011 Kare Sars <kare.sars@iki.fi>
 *
 * SPDX-License-Identifier: LGPL-2.1-only OR LGPL-3.0-only OR LicenseRef-KDE-Accepted-LGPL
 *
 * ============================================================ */

#ifndef KSANE_OPTION_WIDGET_H
#define KSANE_OPTION_WIDGET_H

// Qt includes
#include <QWidget>
#include <QLabel>
#include <QGridLayout>

#include "ksaneoption.h"

namespace KSaneIface
{

/**
  *@author Kåre Särs
  */

/**
 * A wrapper for a checkbox
 */
class KSaneOptionWidget : public QWidget
{
    Q_OBJECT

public:
    /**
     * Create the Widget.
     * \param parent parent widget
     * \param labelText text.
     */
    KSaneOptionWidget(QWidget *parent, const QString &labelText);

    KSaneOptionWidget(QWidget *parent, KSaneOption *option);
    ~KSaneOptionWidget();

    void setLabelText(const QString &text);

    int labelWidthHint();
    void setLabelWidth(int labelWidth);
    
protected Q_SLOTS:
    void updateVisibility(); 
    
protected:
    void initWidget();
   
    QLabel      *m_label;
    QGridLayout *m_layout;
    KSaneOption *m_option = nullptr;
    
    
};

}  // NameSpace KSaneIface

#endif // KSANE_OPTION_WIDGET_H
