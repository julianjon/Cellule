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
#ifndef __NWnodeWidget_h__
#define __NWnodeWidget_h__

#include <QtGui/QWidget>

class NWnode;
class QGridLayout;

//! \brief  Class description
//! \author Author
//! \date   Year Month Day
//!
class NWnodeWidget : public QWidget
{
    Q_OBJECT

public:
                            NWnodeWidget        ( NWnode*   node,
                                                  QWidget*  parent = 0  );

public slots:

    void                    rebuild             ( void                  );

protected:

    NWnode*                 m_node;
    QGridLayout*            m_layout;
};

#endif //__NWnodeWidget_h__
