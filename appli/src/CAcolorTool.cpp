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
#include "CAcolorTool.h"

#include "CAapplication.h"
#include "CWscene.h"
#include "CFtopoWeightedSet.h"

void CAcolorTool::click( const CFpoint& position )
{
    move( position );

    CWscene& scene( CAapplication::instance()->getScene() );
    
    CFtopoWeightedSet cells( scene.getCells().FindCells( m_shape ) );
    
    CFtopoWeightedSet::ElemsIt cellIt( cells.GetElemsBegin() );
    
    while( cellIt != cells.GetElemsEnd() )
    {
        CWcell& cell = *( static_cast<CWcell*>( cellIt->GetPoint() ) );
        
        CFfloat weight = cellIt->GetWeight();
        
        cell.setColor( CFcolor::kWhite * weight );
        
        cellIt++;
    }
}

void CAcolorTool::drag( const CFpoint& position )
{
    click( position );
}
