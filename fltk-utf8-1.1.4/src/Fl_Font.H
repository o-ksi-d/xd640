//
// "$Id: Fl_Font.H,v 1.6.2.3.2.4 2003/01/30 21:41:46 easysw Exp $"
//
// Font definitions for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2003 by Bill Spitzak and others.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA.
//
// Please report all bugs and problems to "fltk-bugs@fltk.org".
//

// Two internal fltk data structures:
//
// Fl_Fontdesc: an entry into the fl_font() table.  There is one of these
// for each fltk font number.
//
// Fl_FontSize: a structure for an actual system font, with junk to
// help choose it and info on character sizes.  Each Fl_Fontdesc has a
// linked list of these.  These are created the first time each system
// font/size combination is used.

#ifndef FL_FONT_
#define FL_FONT_

#if HAVE_XUTF8 && !NANO_X
#include <libXutf8/Xutf8.h>
#endif

#  if USE_XFT
typedef struct _XftFont XftFont;
#  endif // USE_XFT

class Fl_FontSize {
public:
  Fl_FontSize *next;	// linked list for this Fl_Fontdesc
#  ifdef WIN32
  HFONT fid;
  int *width[64];
  TEXTMETRIC metr;
  FL_EXPORT Fl_FontSize(const char* fontname, int size);
#  elif defined(DJGPP)
  GrFont *fid;
  FL_EXPORT Fl_FontSize(const char* fontname, int size);
#  elif defined(__MACOS__)
  FL_EXPORT Fl_FontSize(const char* fontname, int size);
  Fixed size;
  Boolean bold;
  Boolean italic;
  ATSUFontID font;
  short ascent, descent;
  char knowMetrics;
  short *width[64];
#  elif USE_XFT
  XftFont* font;
  const char* encoding;
  int size;
  FL_EXPORT Fl_FontSize(const char* xfontname);

#  else
#    if HAVE_XUTF8 | NANO_X
#    if NANO_X
   char isTTF;
   void Resize(int size);
   GR_FONT_ID font;	
#    else
  XUtf8FontStruct* font; // X UTF-8 font information
#    endif
#    else
  XFontStruct* font;	// X font information
#    endif
  FL_EXPORT Fl_FontSize(const char* xfontname);
#  endif
  int minsize;		// smallest point size that should use this
  int maxsize;		// largest point size that should use this
#  if HAVE_GL
  unsigned int listbase;// base of display list, 0 = none
  char glok[64];
#  endif
  FL_EXPORT ~Fl_FontSize();
};

extern FL_EXPORT Fl_FontSize *fl_fontsize; // the currently selected one

struct Fl_Fontdesc {
  const char *name;
  char fontname[128];	// "Pretty" font name
  Fl_FontSize *first;	// linked list of sizes of this style
#  ifndef WIN32
  char **xlist;		// matched X font names
  int n;		// size of xlist, negative = don't free xlist!
#  endif
};

extern FL_EXPORT Fl_Fontdesc *fl_fonts; // the table

#  ifndef WIN32
// functions for parsing X font names:
FL_EXPORT const char* fl_font_word(const char *p, int n);
FL_EXPORT char *fl_find_fontsize(char *name);
#  endif

#endif

//
// End of "$Id: Fl_Font.H,v 1.6.2.3.2.4 2003/01/30 21:41:46 easysw Exp $".
//
