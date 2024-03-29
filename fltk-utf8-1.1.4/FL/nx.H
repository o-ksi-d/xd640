//
// "$Id: x.H,v 1.10.2.8.2.11 2002/08/14 16:49:38 easysw Exp $"
//
// X11 header file for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2002 by Bill Spitzak and others.
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

// These are internal fltk symbols that are necessary or useful for
// calling Xlib.  You should include this file if (and ONLY if) you
// need to call Xlib directly.  These symbols may not exist on non-X
// systems.
#include <nano-X.h>
#include <XtoNX.h>
#include "Fl_Window.H"

#define XVisualInfo int
#define Colormap int
#define XUtf8FontStruct GR_FONT_INFO

// Mirror X definition of Region to Fl_Region, for portability...
typedef Region Fl_Region;

FL_EXPORT void fl_open_display();
FL_EXPORT void fl_open_display(Display*);
FL_EXPORT void fl_close_display();

// constant info about the X server connection:
extern FL_EXPORT Display *fl_display;
extern FL_EXPORT Window fl_message_window;
extern FL_EXPORT int fl_screen;
extern FL_EXPORT XVisualInfo *fl_visual;
extern FL_EXPORT Colormap fl_colormap;

// drawing functions:
extern FL_EXPORT GC fl_gc;
extern FL_EXPORT Window fl_window;

extern GR_FONT_ID fl_xfont;
FL_EXPORT ulong fl_xpixel(Fl_Color i);
FL_EXPORT ulong fl_xpixel(uchar r, uchar g, uchar b);
FL_EXPORT void fl_clip_region(Fl_Region);
FL_EXPORT Fl_Region fl_clip_region();
FL_EXPORT Fl_Region XRectangleRegion(int x, int y, int w, int h); // in fl_rect.cxx

// feed events into fltk:
FL_EXPORT int fl_handle(const XEvent&);

// you can use these in Fl::add_handler() to look at events:
extern FL_EXPORT GR_EVENT* fl_xevent;
extern FL_EXPORT ulong fl_event_time;

// off-screen pixmaps: create, destroy, draw into, copy to window:
// off-screen pixmaps: create, destroy, draw into, copy to window:
#define Fl_Offscreen GR_WINDOW_ID
#define fl_create_offscreen(w,h) GrNewPixmap(w,h,0)
//
//  XCreatePixmap(fl_display, fl_window, w, h, fl_visual->depth)
// begin/end are macros that save the old state in local variables:
#define fl_begin_offscreen(pixmap) \
  Window _sw=fl_window; fl_window=pixmap; fl_push_no_clip()
#define fl_end_offscreen() \
  fl_pop_clip(); fl_window=_sw

#define fl_copy_offscreen(x,y,w,h,pixmap,srcx,srcy) \
        GrCopyArea(fl_window,fl_gc,x,y,w,h,pixmap,srcx,srcy,MWROP_SRCCOPY)
			//(GR_DRAW_ID id, GR_GC_ID gc, GR_COORD x, GR_COORD y,
			//GR_SIZE width, GR_SIZE height, GR_DRAW_ID srcid,
			//GR_COORD srcx, GR_COORD srcy, int op);
//
//  XCopyArea(fl_display, pixmap, fl_window, fl_gc, srcx, srcy, w, h, x, y)
#define fl_delete_offscreen(pixmap) GrDestroyWindow(pixmap)
//XFreePixmap(fl_display, pixmap)

// Bitmap masks
typedef unsigned char * Fl_Bitmask;

extern FL_EXPORT Fl_Bitmask fl_create_bitmask(int w, int h, const uchar *data);
extern FL_EXPORT Fl_Bitmask fl_create_alphamask(int w, int h, int d, int ld, const uchar *data);
extern FL_EXPORT void fl_delete_bitmask(Fl_Bitmask bm);

// this object contains all X-specific stuff about a window:
// Warning: this object is highly subject to change!  It's definition
// is only here so that fl_xid can be declared inline:
class FL_EXPORT Fl_X {
public:
  static int mw_parent;
  static int mw_parent_xid;
  static int mw_parent_top;
  static int fix_exposure;
  Window xid;
  Window other_xid;
  Fl_Window *w;
  Fl_Region region;
  Fl_X *next;
  char wait_for_expose;
  char backbuffer_bad; // used for XDBE
  static Fl_X* first;
  static Fl_X* i(const Fl_Window* wi) {return wi->i;}
  void setwindow(Fl_Window* wi) {w=wi; wi->i=this;}
  void sendxjunk();
  static void make_xid(Fl_Window*,XVisualInfo* =fl_visual, Colormap=fl_colormap);
  static Fl_X* set_xid(Fl_Window*, Window);
  // kludges to get around protection:
  void flush() {w->flush();}
  static void x(Fl_Window* wi, int X) {wi->x(X);}
  static void y(Fl_Window* wi, int Y) {wi->y(Y);}
};

// convert xid <-> Fl_Window:
inline Window fl_xid(const Fl_Window*w) {return Fl_X::i(w)->xid;}
FL_EXPORT Fl_Window* fl_find(Window xid);

extern FL_EXPORT char fl_override_redirect; // hack into Fl_X::make_xid()
extern FL_EXPORT int fl_background_pixel;  // hack into Fl_X::make_xid()

extern FL_EXPORT int fl_parse_color(const char* p, uchar& r, uchar& g, uchar& b);

//
// End of "$Id: x.H,v 1.10.2.8.2.11 2002/08/14 16:49:38 easysw Exp $".
//
