//
// "$Id: mac.H,v 1.1.2.10 2003/05/30 07:03:08 easysw Exp $"
//
// Mac header file for the Fast Light Tool Kit (FLTK).
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

// Do not directly include this file, instead use <FL/x.H>.  It will
// include this file if "__APPLE__" is defined.  This is to encourage
// portability of even the system-specific code...

#ifndef Fl_X_H
#  error "Never use <FL/mac.H> directly; include <FL/x.H> instead."
#endif // !Fl_X_H

// Now make some fixes to the headers...
#undef check			// Dunno where this comes from...

enum { kEventClassFLTK = 'fltk' };
enum { kEventFLTKBreakLoop = 1, kEventFLTKDataReady };

// Some random X equivalents
typedef WindowPtr Window;
struct XPoint { int x, y; };
struct XRectangle {int x, y, width, height;};
typedef RgnHandle Fl_Region;
void fl_clip_region(Fl_Region);
inline Fl_Region XRectangleRegion(int x, int y, int w, int h) {
  Fl_Region R = NewRgn();
  SetRectRgn(R, x, y, x+w, y+h);
  return R;
}
inline void XDestroyRegion(Fl_Region r) {
  DisposeRgn(r);
}

#  define XDestroyWindow(a,b) DisposeWindow(b)
#  define XMapWindow(a,b) ShowWindow(b)
#  define XUnmapWindow(a,b) HideWindow(b)

#  include "Fl_Window.H"

// This object contains all mac-specific stuff about a window:
// WARNING: this object is highly subject to change!
class Fl_X 
{
public:
  Window xid;              // Mac WindowPtr
  GWorldPtr other_xid;     // pointer for offscreen bitmaps (doublebuffer)
  Fl_Window *w;            // FLTK window for 
  Fl_Region region;
  Fl_Region subRegion;     // region for this specific subwindow
  Fl_X *next;              // linked tree to support subwindows
  Fl_X *xidChildren, *xidNext; // more subwindow tree
  int wait_for_expose;
  CursHandle cursor;
  static Fl_X* first;
  static Fl_X* i(const Fl_Window* w) {return w->i;}
  static int fake_X_wm(const Fl_Window*,int&,int&,int&,int&,int&);
  static void make(Fl_Window*);
  void flush();
};

inline Window fl_xid(const Fl_Window*w) 
{
  return Fl_X::i(w)->xid;
}

extern CursHandle fl_default_cursor;

extern struct Fl_XMap {
  RGBColor rgb;
  ulong pen;
} *fl_current_xmap;

extern FL_EXPORT void *fl_display;
extern FL_EXPORT Window fl_window;
extern FL_EXPORT Handle fl_system_menu;
extern FL_EXPORT class Fl_Sys_Menu_Bar *fl_sys_menu_bar;

typedef GWorldPtr Fl_Offscreen;

extern Fl_Offscreen fl_create_offscreen(int w, int h);
extern void fl_copy_offscreen(int x,int y,int w,int h, Fl_Offscreen gWorld, int srcx,int srcy);
extern void fl_delete_offscreen(Fl_Offscreen gWorld);
extern void fl_begin_offscreen(Fl_Offscreen gWorld);
extern void fl_end_offscreen();

typedef GWorldPtr Fl_Bitmask; // Carbon requires a 1-bit GWorld instead of a BitMap

extern FL_EXPORT Fl_Bitmask fl_create_bitmask(int w, int h, const uchar *data);
extern FL_EXPORT Fl_Bitmask fl_create_alphamask(int w, int h, int d, int ld, const uchar *data);
extern FL_EXPORT void fl_delete_bitmask(Fl_Bitmask bm);

extern void fl_open_display();

// Register a function for opening files via the finder...
extern void fl_open_callback(void (*cb)(const char *));

extern FL_EXPORT int fl_parse_color(const char* p, uchar& r, uchar& g, uchar& b);

//
// End of "$Id: mac.H,v 1.1.2.10 2003/05/30 07:03:08 easysw Exp $".
//

