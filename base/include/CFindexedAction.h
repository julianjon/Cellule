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
#ifndef __CFindexedAction_h__
#define __CFindexedAction_h__

#include <QtGui/QAction>

//! \brief  Class description
//! \author Author
//! \date   Year Month Day
//!
class CFindexedAction : public QAction
{
    Q_OBJECT

public:
                        CFindexedAction     ( const QString&    name,
                                              unsigned int      index,
                                              QObject*          parent = 0  );

public slots:

    void                trigger             ( void                          );

signals:

    void                triggered           ( unsigned          index       );

protected:

    unsigned int        m_index;
};

#endif //__CFindexedAction_h__
