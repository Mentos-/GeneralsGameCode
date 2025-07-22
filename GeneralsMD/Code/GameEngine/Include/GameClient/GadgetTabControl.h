/*
**	Command & Conquer Generals Zero Hour(tm)
**	Copyright 2025 Electronic Arts Inc.
**
**	This program is free software: you can redistribute it and/or modify
**	it under the terms of the GNU General Public License as published by
**	the Free Software Foundation, either version 3 of the License, or
**	(at your option) any later version.
**
**	This program is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**	GNU General Public License for more details.
**
**	You should have received a copy of the GNU General Public License
**	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

////////////////////////////////////////////////////////////////////////////////
//																																						//
//  (c) 2001-2003 Electronic Arts Inc.																				//
//																																						//
////////////////////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------------------
//                                                                          
//                       Westwood Studios Pacific.                          
//                                                                          
//                       Confidential Information					         
//                Copyright (C) 2001 - All Rights Reserved                  
//                                                                          
//-----------------------------------------------------------------------------
//
// Project:    RTS3
//
// File name:  C:\projects\RTS\code\gameengine\Include\GameClient\GadgetTabControl.h
//
// Created:    Graham Smallwood, November 2001
//
// Desc:       Helpful interface for TabControls
//
//-----------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////

#pragma once

#ifndef __GADGETTABCONTROL_H_
#define __GADGETTABCONTROL_H_

enum
{
	GTC_BACKGROUND = 0,
	GTC_TAB_0,
	GTC_TAB_1,
	GTC_TAB_2,
	GTC_TAB_3,
	GTC_TAB_4,
	GTC_TAB_5,
	GTC_TAB_6,
	GTC_TAB_7
};
// SYSTEM INCLUDES ////////////////////////////////////////////////////////////

// USER INCLUDES //////////////////////////////////////////////////////////////
#include "GameClient/GameWindow.h"

// FORWARD REFERENCES /////////////////////////////////////////////////////////
extern void GadgetTabControlComputeTabRegion( GameWindow *tabControl );///< Recalc the tab positions based on userData
extern void GadgetTabControlCreateSubPanes( GameWindow *tabControl);///< Create (destroy old) Windows attached to userData as Panes
extern void GadgetTabControlComputeSubPaneSize( GameWindow *tabControl, Int *width, Int *height, Int *x, Int *y );///<Helper to calc subPanes' dependent size
extern void GadgetTabControlShowSubPane( GameWindow *tabControl, Int whichPane);///< Show specified SubPane
extern void GadgetTabControlResizeSubPanes( GameWindow *tabControl );///<Parent's size has changed, resize panes
extern void GadgetTabControlFixupSubPaneList( GameWindow *tabControl );///<In game creation finished, hook up Children to SubPane array

// TYPE DEFINES ///////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// INLINING ///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
inline void GadgetTabControlSetEnabledImageTabZero( GameWindow *g, const Image *image )				{ g->winSetEnabledImage( GTC_TAB_0, image ); }
inline void GadgetTabControlSetEnabledColorTabZero( GameWindow *g, GeneralsColor color )				{ g->winSetEnabledColor( GTC_TAB_0, color ); }
inline void GadgetTabControlSetEnabledBorderColorTabZero( GameWindow *g, GeneralsColor color )	{ g->winSetEnabledBorderColor( GTC_TAB_0, color ); }
inline const Image *GadgetTabControlGetEnabledImageTabZero( GameWindow *g )										{ return g->winGetEnabledImage( GTC_TAB_0 ); }
inline GeneralsColor GadgetTabControlGetEnabledColorTabZero( GameWindow *g )										{ return g->winGetEnabledColor( GTC_TAB_0 ); }
inline GeneralsColor GadgetTabControlGetEnabledBorderColorTabZero( GameWindow *g )							{ return g->winGetEnabledBorderColor( GTC_TAB_0 ); }

inline void GadgetTabControlSetEnabledImageTabOne( GameWindow *g, const Image *image )				{ g->winSetEnabledImage( GTC_TAB_1, image ); }
inline void GadgetTabControlSetEnabledColorTabOne( GameWindow *g, GeneralsColor color )				{ g->winSetEnabledColor( GTC_TAB_1, color ); }
inline void GadgetTabControlSetEnabledBorderColorTabOne( GameWindow *g, GeneralsColor color )	{ g->winSetEnabledBorderColor( GTC_TAB_1, color ); }
inline const Image *GadgetTabControlGetEnabledImageTabOne( GameWindow *g )										{ return g->winGetEnabledImage( GTC_TAB_1 ); }
inline GeneralsColor GadgetTabControlGetEnabledColorTabOne( GameWindow *g )										{ return g->winGetEnabledColor( GTC_TAB_1 ); }
inline GeneralsColor GadgetTabControlGetEnabledBorderColorTabOne( GameWindow *g )							{ return g->winGetEnabledBorderColor( GTC_TAB_1 ); }

inline void GadgetTabControlSetEnabledImageTabTwo( GameWindow *g, const Image *image )				{ g->winSetEnabledImage( GTC_TAB_2, image ); }
inline void GadgetTabControlSetEnabledColorTabTwo( GameWindow *g, GeneralsColor color )				{ g->winSetEnabledColor( GTC_TAB_2, color ); }
inline void GadgetTabControlSetEnabledBorderColorTabTwo( GameWindow *g, GeneralsColor color )	{ g->winSetEnabledBorderColor( GTC_TAB_2, color ); }
inline const Image *GadgetTabControlGetEnabledImageTabTwo( GameWindow *g )										{ return g->winGetEnabledImage( GTC_TAB_2 ); }
inline GeneralsColor GadgetTabControlGetEnabledColorTabTwo( GameWindow *g )										{ return g->winGetEnabledColor( GTC_TAB_2 ); }
inline GeneralsColor GadgetTabControlGetEnabledBorderColorTabTwo( GameWindow *g )							{ return g->winGetEnabledBorderColor( GTC_TAB_2 ); }

inline void GadgetTabControlSetEnabledImageTabThree( GameWindow *g, const Image *image )				{ g->winSetEnabledImage( GTC_TAB_3, image ); }
inline void GadgetTabControlSetEnabledColorTabThree( GameWindow *g, GeneralsColor color )				{ g->winSetEnabledColor( GTC_TAB_3, color ); }
inline void GadgetTabControlSetEnabledBorderColorTabThree( GameWindow *g, GeneralsColor color )	{ g->winSetEnabledBorderColor( GTC_TAB_3, color ); }
inline const Image *GadgetTabControlGetEnabledImageTabThree( GameWindow *g )										{ return g->winGetEnabledImage( GTC_TAB_3 ); }
inline GeneralsColor GadgetTabControlGetEnabledColorTabThree( GameWindow *g )										{ return g->winGetEnabledColor( GTC_TAB_3 ); }
inline GeneralsColor GadgetTabControlGetEnabledBorderColorTabThree( GameWindow *g )							{ return g->winGetEnabledBorderColor( GTC_TAB_3 ); }

inline void GadgetTabControlSetEnabledImageTabFour( GameWindow *g, const Image *image )				{ g->winSetEnabledImage( GTC_TAB_4, image ); }
inline void GadgetTabControlSetEnabledColorTabFour( GameWindow *g, GeneralsColor color )				{ g->winSetEnabledColor( GTC_TAB_4, color ); }
inline void GadgetTabControlSetEnabledBorderColorTabFour( GameWindow *g, GeneralsColor color )	{ g->winSetEnabledBorderColor( GTC_TAB_4, color ); }
inline const Image *GadgetTabControlGetEnabledImageTabFour( GameWindow *g )										{ return g->winGetEnabledImage( GTC_TAB_4 ); }
inline GeneralsColor GadgetTabControlGetEnabledColorTabFour( GameWindow *g )										{ return g->winGetEnabledColor( GTC_TAB_4 ); }
inline GeneralsColor GadgetTabControlGetEnabledBorderColorTabFour( GameWindow *g )							{ return g->winGetEnabledBorderColor( GTC_TAB_4 ); }

inline void GadgetTabControlSetEnabledImageTabFive( GameWindow *g, const Image *image )				{ g->winSetEnabledImage( GTC_TAB_5, image ); }
inline void GadgetTabControlSetEnabledColorTabFive( GameWindow *g, GeneralsColor color )				{ g->winSetEnabledColor( GTC_TAB_5, color ); }
inline void GadgetTabControlSetEnabledBorderColorTabFive( GameWindow *g, GeneralsColor color )	{ g->winSetEnabledBorderColor( GTC_TAB_5, color ); }
inline const Image *GadgetTabControlGetEnabledImageTabFive( GameWindow *g )										{ return g->winGetEnabledImage( GTC_TAB_5 ); }
inline GeneralsColor GadgetTabControlGetEnabledColorTabFive( GameWindow *g )										{ return g->winGetEnabledColor( GTC_TAB_5 ); }
inline GeneralsColor GadgetTabControlGetEnabledBorderColorTabFive( GameWindow *g )							{ return g->winGetEnabledBorderColor( GTC_TAB_5 ); }

inline void GadgetTabControlSetEnabledImageTabSix( GameWindow *g, const Image *image )				{ g->winSetEnabledImage( GTC_TAB_6, image ); }
inline void GadgetTabControlSetEnabledColorTabSix( GameWindow *g, GeneralsColor color )				{ g->winSetEnabledColor( GTC_TAB_6, color ); }
inline void GadgetTabControlSetEnabledBorderColorTabSix( GameWindow *g, GeneralsColor color )	{ g->winSetEnabledBorderColor( GTC_TAB_6, color ); }
inline const Image *GadgetTabControlGetEnabledImageTabSix( GameWindow *g )										{ return g->winGetEnabledImage( GTC_TAB_6 ); }
inline GeneralsColor GadgetTabControlGetEnabledColorTabSix( GameWindow *g )										{ return g->winGetEnabledColor( GTC_TAB_6 ); }
inline GeneralsColor GadgetTabControlGetEnabledBorderColorTabSix( GameWindow *g )							{ return g->winGetEnabledBorderColor( GTC_TAB_6 ); }

inline void GadgetTabControlSetEnabledImageTabSeven( GameWindow *g, const Image *image )				{ g->winSetEnabledImage( GTC_TAB_7, image ); }
inline void GadgetTabControlSetEnabledColorTabSeven( GameWindow *g, GeneralsColor color )				{ g->winSetEnabledColor( GTC_TAB_7, color ); }
inline void GadgetTabControlSetEnabledBorderColorTabSeven( GameWindow *g, GeneralsColor color )	{ g->winSetEnabledBorderColor( GTC_TAB_7, color ); }
inline const Image *GadgetTabControlGetEnabledImageTabSeven( GameWindow *g )										{ return g->winGetEnabledImage( GTC_TAB_7 ); }
inline GeneralsColor GadgetTabControlGetEnabledColorTabSeven( GameWindow *g )										{ return g->winGetEnabledColor( GTC_TAB_7 ); }
inline GeneralsColor GadgetTabControlGetEnabledBorderColorTabSeven( GameWindow *g )							{ return g->winGetEnabledBorderColor( GTC_TAB_7 ); }

inline void GadgetTabControlSetEnabledImageBackground( GameWindow *g, const Image *image )				{ g->winSetEnabledImage( GTC_BACKGROUND, image ); }
inline void GadgetTabControlSetEnabledColorBackground( GameWindow *g, GeneralsColor color )				{ g->winSetEnabledColor( GTC_BACKGROUND, color ); }
inline void GadgetTabControlSetEnabledBorderColorBackground( GameWindow *g, GeneralsColor color )	{ g->winSetEnabledBorderColor( GTC_BACKGROUND, color ); }
inline const Image *GadgetTabControlGetEnabledImageBackground( GameWindow *g )										{ return g->winGetEnabledImage( GTC_BACKGROUND ); }
inline GeneralsColor GadgetTabControlGetEnabledColorBackground( GameWindow *g )										{ return g->winGetEnabledColor( GTC_BACKGROUND ); }
inline GeneralsColor GadgetTabControlGetEnabledBorderColorBackground( GameWindow *g )							{ return g->winGetEnabledBorderColor( GTC_BACKGROUND ); }




inline void GadgetTabControlSetDisabledImageTabZero( GameWindow *g, const Image *image )				{ g->winSetDisabledImage( GTC_TAB_0, image ); }
inline void GadgetTabControlSetDisabledColorTabZero( GameWindow *g, GeneralsColor color )				{ g->winSetDisabledColor( GTC_TAB_0, color ); }
inline void GadgetTabControlSetDisabledBorderColorTabZero( GameWindow *g, GeneralsColor color )	{ g->winSetDisabledBorderColor( GTC_TAB_0, color ); }
inline const Image *GadgetTabControlGetDisabledImageTabZero( GameWindow *g )										{ return g->winGetDisabledImage( GTC_TAB_0 ); }
inline GeneralsColor GadgetTabControlGetDisabledColorTabZero( GameWindow *g )										{ return g->winGetDisabledColor( GTC_TAB_0 ); }
inline GeneralsColor GadgetTabControlGetDisabledBorderColorTabZero( GameWindow *g )							{ return g->winGetDisabledBorderColor( GTC_TAB_0 ); }

inline void GadgetTabControlSetDisabledImageTabOne( GameWindow *g, const Image *image )				{ g->winSetDisabledImage( GTC_TAB_1, image ); }
inline void GadgetTabControlSetDisabledColorTabOne( GameWindow *g, GeneralsColor color )				{ g->winSetDisabledColor( GTC_TAB_1, color ); }
inline void GadgetTabControlSetDisabledBorderColorTabOne( GameWindow *g, GeneralsColor color )	{ g->winSetDisabledBorderColor( GTC_TAB_1, color ); }
inline const Image *GadgetTabControlGetDisabledImageTabOne( GameWindow *g )										{ return g->winGetDisabledImage( GTC_TAB_1 ); }
inline GeneralsColor GadgetTabControlGetDisabledColorTabOne( GameWindow *g )										{ return g->winGetDisabledColor( GTC_TAB_1 ); }
inline GeneralsColor GadgetTabControlGetDisabledBorderColorTabOne( GameWindow *g )							{ return g->winGetDisabledBorderColor( GTC_TAB_1 ); }

inline void GadgetTabControlSetDisabledImageTabTwo( GameWindow *g, const Image *image )				{ g->winSetDisabledImage( GTC_TAB_2, image ); }
inline void GadgetTabControlSetDisabledColorTabTwo( GameWindow *g, GeneralsColor color )				{ g->winSetDisabledColor( GTC_TAB_2, color ); }
inline void GadgetTabControlSetDisabledBorderColorTabTwo( GameWindow *g, GeneralsColor color )	{ g->winSetDisabledBorderColor( GTC_TAB_2, color ); }
inline const Image *GadgetTabControlGetDisabledImageTabTwo( GameWindow *g )										{ return g->winGetDisabledImage( GTC_TAB_2 ); }
inline GeneralsColor GadgetTabControlGetDisabledColorTabTwo( GameWindow *g )										{ return g->winGetDisabledColor( GTC_TAB_2 ); }
inline GeneralsColor GadgetTabControlGetDisabledBorderColorTabTwo( GameWindow *g )							{ return g->winGetDisabledBorderColor( GTC_TAB_2 ); }

inline void GadgetTabControlSetDisabledImageTabThree( GameWindow *g, const Image *image )				{ g->winSetDisabledImage( GTC_TAB_3, image ); }
inline void GadgetTabControlSetDisabledColorTabThree( GameWindow *g, GeneralsColor color )				{ g->winSetDisabledColor( GTC_TAB_3, color ); }
inline void GadgetTabControlSetDisabledBorderColorTabThree( GameWindow *g, GeneralsColor color )	{ g->winSetDisabledBorderColor( GTC_TAB_3, color ); }
inline const Image *GadgetTabControlGetDisabledImageTabThree( GameWindow *g )										{ return g->winGetDisabledImage( GTC_TAB_3 ); }
inline GeneralsColor GadgetTabControlGetDisabledColorTabThree( GameWindow *g )										{ return g->winGetDisabledColor( GTC_TAB_3 ); }
inline GeneralsColor GadgetTabControlGetDisabledBorderColorTabThree( GameWindow *g )							{ return g->winGetDisabledBorderColor( GTC_TAB_3 ); }

inline void GadgetTabControlSetDisabledImageTabFour( GameWindow *g, const Image *image )				{ g->winSetDisabledImage( GTC_TAB_4, image ); }
inline void GadgetTabControlSetDisabledColorTabFour( GameWindow *g, GeneralsColor color )				{ g->winSetDisabledColor( GTC_TAB_4, color ); }
inline void GadgetTabControlSetDisabledBorderColorTabFour( GameWindow *g, GeneralsColor color )	{ g->winSetDisabledBorderColor( GTC_TAB_4, color ); }
inline const Image *GadgetTabControlGetDisabledImageTabFour( GameWindow *g )										{ return g->winGetDisabledImage( GTC_TAB_4 ); }
inline GeneralsColor GadgetTabControlGetDisabledColorTabFour( GameWindow *g )										{ return g->winGetDisabledColor( GTC_TAB_4 ); }
inline GeneralsColor GadgetTabControlGetDisabledBorderColorTabFour( GameWindow *g )							{ return g->winGetDisabledBorderColor( GTC_TAB_4 ); }

inline void GadgetTabControlSetDisabledImageTabFive( GameWindow *g, const Image *image )				{ g->winSetDisabledImage( GTC_TAB_5, image ); }
inline void GadgetTabControlSetDisabledColorTabFive( GameWindow *g, GeneralsColor color )				{ g->winSetDisabledColor( GTC_TAB_5, color ); }
inline void GadgetTabControlSetDisabledBorderColorTabFive( GameWindow *g, GeneralsColor color )	{ g->winSetDisabledBorderColor( GTC_TAB_5, color ); }
inline const Image *GadgetTabControlGetDisabledImageTabFive( GameWindow *g )										{ return g->winGetDisabledImage( GTC_TAB_5 ); }
inline GeneralsColor GadgetTabControlGetDisabledColorTabFive( GameWindow *g )										{ return g->winGetDisabledColor( GTC_TAB_5 ); }
inline GeneralsColor GadgetTabControlGetDisabledBorderColorTabFive( GameWindow *g )							{ return g->winGetDisabledBorderColor( GTC_TAB_5 ); }

inline void GadgetTabControlSetDisabledImageTabSix( GameWindow *g, const Image *image )				{ g->winSetDisabledImage( GTC_TAB_6, image ); }
inline void GadgetTabControlSetDisabledColorTabSix( GameWindow *g, GeneralsColor color )				{ g->winSetDisabledColor( GTC_TAB_6, color ); }
inline void GadgetTabControlSetDisabledBorderColorTabSix( GameWindow *g, GeneralsColor color )	{ g->winSetDisabledBorderColor( GTC_TAB_6, color ); }
inline const Image *GadgetTabControlGetDisabledImageTabSix( GameWindow *g )										{ return g->winGetDisabledImage( GTC_TAB_6 ); }
inline GeneralsColor GadgetTabControlGetDisabledColorTabSix( GameWindow *g )										{ return g->winGetDisabledColor( GTC_TAB_6 ); }
inline GeneralsColor GadgetTabControlGetDisabledBorderColorTabSix( GameWindow *g )							{ return g->winGetDisabledBorderColor( GTC_TAB_6 ); }

inline void GadgetTabControlSetDisabledImageTabSeven( GameWindow *g, const Image *image )				{ g->winSetDisabledImage( GTC_TAB_7, image ); }
inline void GadgetTabControlSetDisabledColorTabSeven( GameWindow *g, GeneralsColor color )				{ g->winSetDisabledColor( GTC_TAB_7, color ); }
inline void GadgetTabControlSetDisabledBorderColorTabSeven( GameWindow *g, GeneralsColor color )	{ g->winSetDisabledBorderColor( GTC_TAB_7, color ); }
inline const Image *GadgetTabControlGetDisabledImageTabSeven( GameWindow *g )										{ return g->winGetDisabledImage( GTC_TAB_7 ); }
inline GeneralsColor GadgetTabControlGetDisabledColorTabSeven( GameWindow *g )										{ return g->winGetDisabledColor( GTC_TAB_7 ); }
inline GeneralsColor GadgetTabControlGetDisabledBorderColorTabSeven( GameWindow *g )							{ return g->winGetDisabledBorderColor( GTC_TAB_7 ); }

inline void GadgetTabControlSetDisabledImageBackground( GameWindow *g, const Image *image )				{ g->winSetDisabledImage( GTC_BACKGROUND, image ); }
inline void GadgetTabControlSetDisabledColorBackground( GameWindow *g, GeneralsColor color )				{ g->winSetDisabledColor( GTC_BACKGROUND, color ); }
inline void GadgetTabControlSetDisabledBorderColorBackground( GameWindow *g, GeneralsColor color )	{ g->winSetDisabledBorderColor( GTC_BACKGROUND, color ); }
inline const Image *GadgetTabControlGetDisabledImageBackground( GameWindow *g )										{ return g->winGetDisabledImage( GTC_BACKGROUND ); }
inline GeneralsColor GadgetTabControlGetDisabledColorBackground( GameWindow *g )										{ return g->winGetDisabledColor( GTC_BACKGROUND ); }
inline GeneralsColor GadgetTabControlGetDisabledBorderColorBackground( GameWindow *g )							{ return g->winGetDisabledBorderColor( GTC_BACKGROUND ); }




inline void GadgetTabControlSetHiliteImageTabZero( GameWindow *g, const Image *image )				{ g->winSetHiliteImage( GTC_TAB_0, image ); }
inline void GadgetTabControlSetHiliteColorTabZero( GameWindow *g, GeneralsColor color )				{ g->winSetHiliteColor( GTC_TAB_0, color ); }
inline void GadgetTabControlSetHiliteBorderColorTabZero( GameWindow *g, GeneralsColor color )	{ g->winSetHiliteBorderColor( GTC_TAB_0, color ); }
inline const Image *GadgetTabControlGetHiliteImageTabZero( GameWindow *g )										{ return g->winGetHiliteImage( GTC_TAB_0 ); }
inline GeneralsColor GadgetTabControlGetHiliteColorTabZero( GameWindow *g )										{ return g->winGetHiliteColor( GTC_TAB_0 ); }
inline GeneralsColor GadgetTabControlGetHiliteBorderColorTabZero( GameWindow *g )							{ return g->winGetHiliteBorderColor( GTC_TAB_0 ); }

inline void GadgetTabControlSetHiliteImageTabOne( GameWindow *g, const Image *image )				{ g->winSetHiliteImage( GTC_TAB_1, image ); }
inline void GadgetTabControlSetHiliteColorTabOne( GameWindow *g, GeneralsColor color )				{ g->winSetHiliteColor( GTC_TAB_1, color ); }
inline void GadgetTabControlSetHiliteBorderColorTabOne( GameWindow *g, GeneralsColor color )	{ g->winSetHiliteBorderColor( GTC_TAB_1, color ); }
inline const Image *GadgetTabControlGetHiliteImageTabOne( GameWindow *g )										{ return g->winGetHiliteImage( GTC_TAB_1 ); }
inline GeneralsColor GadgetTabControlGetHiliteColorTabOne( GameWindow *g )										{ return g->winGetHiliteColor( GTC_TAB_1 ); }
inline GeneralsColor GadgetTabControlGetHiliteBorderColorTabOne( GameWindow *g )							{ return g->winGetHiliteBorderColor( GTC_TAB_1 ); }

inline void GadgetTabControlSetHiliteImageTabTwo( GameWindow *g, const Image *image )				{ g->winSetHiliteImage( GTC_TAB_2, image ); }
inline void GadgetTabControlSetHiliteColorTabTwo( GameWindow *g, GeneralsColor color )				{ g->winSetHiliteColor( GTC_TAB_2, color ); }
inline void GadgetTabControlSetHiliteBorderColorTabTwo( GameWindow *g, GeneralsColor color )	{ g->winSetHiliteBorderColor( GTC_TAB_2, color ); }
inline const Image *GadgetTabControlGetHiliteImageTabTwo( GameWindow *g )										{ return g->winGetHiliteImage( GTC_TAB_2 ); }
inline GeneralsColor GadgetTabControlGetHiliteColorTabTwo( GameWindow *g )										{ return g->winGetHiliteColor( GTC_TAB_2 ); }
inline GeneralsColor GadgetTabControlGetHiliteBorderColorTabTwo( GameWindow *g )							{ return g->winGetHiliteBorderColor( GTC_TAB_2 ); }

inline void GadgetTabControlSetHiliteImageTabThree( GameWindow *g, const Image *image )				{ g->winSetHiliteImage( GTC_TAB_3, image ); }
inline void GadgetTabControlSetHiliteColorTabThree( GameWindow *g, GeneralsColor color )				{ g->winSetHiliteColor( GTC_TAB_3, color ); }
inline void GadgetTabControlSetHiliteBorderColorTabThree( GameWindow *g, GeneralsColor color )	{ g->winSetHiliteBorderColor( GTC_TAB_3, color ); }
inline const Image *GadgetTabControlGetHiliteImageTabThree( GameWindow *g )										{ return g->winGetHiliteImage( GTC_TAB_3 ); }
inline GeneralsColor GadgetTabControlGetHiliteColorTabThree( GameWindow *g )										{ return g->winGetHiliteColor( GTC_TAB_3 ); }
inline GeneralsColor GadgetTabControlGetHiliteBorderColorTabThree( GameWindow *g )							{ return g->winGetHiliteBorderColor( GTC_TAB_3 ); }

inline void GadgetTabControlSetHiliteImageTabFour( GameWindow *g, const Image *image )				{ g->winSetHiliteImage( GTC_TAB_4, image ); }
inline void GadgetTabControlSetHiliteColorTabFour( GameWindow *g, GeneralsColor color )				{ g->winSetHiliteColor( GTC_TAB_4, color ); }
inline void GadgetTabControlSetHiliteBorderColorTabFour( GameWindow *g, GeneralsColor color )	{ g->winSetHiliteBorderColor( GTC_TAB_4, color ); }
inline const Image *GadgetTabControlGetHiliteImageTabFour( GameWindow *g )										{ return g->winGetHiliteImage( GTC_TAB_4 ); }
inline GeneralsColor GadgetTabControlGetHiliteColorTabFour( GameWindow *g )										{ return g->winGetHiliteColor( GTC_TAB_4 ); }
inline GeneralsColor GadgetTabControlGetHiliteBorderColorTabFour( GameWindow *g )							{ return g->winGetHiliteBorderColor( GTC_TAB_4 ); }

inline void GadgetTabControlSetHiliteImageTabFive( GameWindow *g, const Image *image )				{ g->winSetHiliteImage( GTC_TAB_5, image ); }
inline void GadgetTabControlSetHiliteColorTabFive( GameWindow *g, GeneralsColor color )				{ g->winSetHiliteColor( GTC_TAB_5, color ); }
inline void GadgetTabControlSetHiliteBorderColorTabFive( GameWindow *g, GeneralsColor color )	{ g->winSetHiliteBorderColor( GTC_TAB_5, color ); }
inline const Image *GadgetTabControlGetHiliteImageTabFive( GameWindow *g )										{ return g->winGetHiliteImage( GTC_TAB_5 ); }
inline GeneralsColor GadgetTabControlGetHiliteColorTabFive( GameWindow *g )										{ return g->winGetHiliteColor( GTC_TAB_5 ); }
inline GeneralsColor GadgetTabControlGetHiliteBorderColorTabFive( GameWindow *g )							{ return g->winGetHiliteBorderColor( GTC_TAB_5 ); }

inline void GadgetTabControlSetHiliteImageTabSix( GameWindow *g, const Image *image )				{ g->winSetHiliteImage( GTC_TAB_6, image ); }
inline void GadgetTabControlSetHiliteColorTabSix( GameWindow *g, GeneralsColor color )				{ g->winSetHiliteColor( GTC_TAB_6, color ); }
inline void GadgetTabControlSetHiliteBorderColorTabSix( GameWindow *g, GeneralsColor color )	{ g->winSetHiliteBorderColor( GTC_TAB_6, color ); }
inline const Image *GadgetTabControlGetHiliteImageTabSix( GameWindow *g )										{ return g->winGetHiliteImage( GTC_TAB_6 ); }
inline GeneralsColor GadgetTabControlGetHiliteColorTabSix( GameWindow *g )										{ return g->winGetHiliteColor( GTC_TAB_6 ); }
inline GeneralsColor GadgetTabControlGetHiliteBorderColorTabSix( GameWindow *g )							{ return g->winGetHiliteBorderColor( GTC_TAB_6 ); }

inline void GadgetTabControlSetHiliteImageTabSeven( GameWindow *g, const Image *image )				{ g->winSetHiliteImage( GTC_TAB_7, image ); }
inline void GadgetTabControlSetHiliteColorTabSeven( GameWindow *g, GeneralsColor color )				{ g->winSetHiliteColor( GTC_TAB_7, color ); }
inline void GadgetTabControlSetHiliteBorderColorTabSeven( GameWindow *g, GeneralsColor color )	{ g->winSetHiliteBorderColor( GTC_TAB_7, color ); }
inline const Image *GadgetTabControlGetHiliteImageTabSeven( GameWindow *g )										{ return g->winGetHiliteImage( GTC_TAB_7 ); }
inline GeneralsColor GadgetTabControlGetHiliteColorTabSeven( GameWindow *g )										{ return g->winGetHiliteColor( GTC_TAB_7 ); }
inline GeneralsColor GadgetTabControlGetHiliteBorderColorTabSeven( GameWindow *g )							{ return g->winGetHiliteBorderColor( GTC_TAB_7 ); }

inline void GadgetTabControlSetHiliteImageBackground( GameWindow *g, const Image *image )				{ g->winSetHiliteImage( GTC_BACKGROUND, image ); }
inline void GadgetTabControlSetHiliteColorBackground( GameWindow *g, GeneralsColor color )				{ g->winSetHiliteColor( GTC_BACKGROUND, color ); }
inline void GadgetTabControlSetHiliteBorderColorBackground( GameWindow *g, GeneralsColor color )	{ g->winSetHiliteBorderColor( GTC_BACKGROUND, color ); }
inline const Image *GadgetTabControlGetHiliteImageBackground( GameWindow *g )										{ return g->winGetHiliteImage( GTC_BACKGROUND ); }
inline GeneralsColor GadgetTabControlGetHiliteColorBackground( GameWindow *g )										{ return g->winGetHiliteColor( GTC_BACKGROUND ); }
inline GeneralsColor GadgetTabControlGetHiliteBorderColorBackground( GameWindow *g )							{ return g->winGetHiliteBorderColor( GTC_BACKGROUND ); }


// EXTERNALS //////////////////////////////////////////////////////////////////

#endif // __GADGETTABCONTROL_H_

