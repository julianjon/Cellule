//  (C) Copyright 2005-2008 Benjamin Godon and contributors.
//
//  This file is part of Cellule.
//
//  Cellule is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  Cellule is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with Cellule; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
//
#ifndef __NWdisconnectButton_h__
#define __NWdisconnectButton_h__

#include "NWplug.h"

#include <QtGui/QAbstractButton>

//! \brief  Appears in the node editor for every connected plug.
//! \author bEngo
//! \date   2008 May 09
//!
class NWdisconnectButton : public QAbstractButton
{
    Q_OBJECT

public:
                        NWdisconnectButton      ( NWplug*       plug,
                                                  QWidget*      parent  );

    virtual QSize       sizeHint                ( void                  ) const { return QSize( 22, 22 ); }
    virtual void        paintEvent              ( QPaintEvent*  event   );

protected slots:

    void                doDisconnect            ( void                  );

protected:

    NWplug*             m_plug;
    QPixmap             m_icon;
};

#endif //__NWdisconnectButton_h__
