#
# "$Id: Makefile,v 1.18.2.14.2.54 2003/08/24 13:09:06 easysw Exp $"
#
# Library makefile for the Fast Light Tool Kit (FLTK).
#
# Copyright 1998-2003 by Bill Spitzak and others.
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Library General Public
# License as published by the Free Software Foundation; either
# version 2 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Library General Public License for more details.
#
# You should have received a copy of the GNU Library General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
# USA.
#
# Please report all bugs and problems to "fltk-utf8-bugs@fltk-utf8.org".
#

CPPFILES = \
	Fl.cxx \
	Fl_Adjuster.cxx \
	Fl_Bitmap.cxx \
	Fl_Browser.cxx \
	Fl_Browser_.cxx \
	Fl_Browser_load.cxx \
	Fl_Box.cxx \
	Fl_Button.cxx \
	Fl_Chart.cxx \
	Fl_Check_Browser.cxx \
	Fl_Check_Button.cxx \
	Fl_Choice.cxx \
	Fl_Clock.cxx \
	Fl_Color_Chooser.cxx \
	Fl_Counter.cxx \
	Fl_Dial.cxx \
	Fl_Double_Window.cxx \
	Fl_File_Browser.cxx \
	Fl_File_Chooser.cxx \
	Fl_File_Chooser2.cxx \
	Fl_File_Icon.cxx \
	Fl_File_Input.cxx \
	Fl_Group.cxx \
	Fl_Help_View.cxx \
	Fl_Image.cxx \
	Fl_Input.cxx \
	Fl_Input_.cxx \
	Fl_Light_Button.cxx \
	Fl_Menu.cxx \
	Fl_Menu_.cxx \
	Fl_Menu_Bar.cxx \
	Fl_Menu_Button.cxx \
	Fl_Menu_Window.cxx \
	Fl_Menu_add.cxx \
	Fl_Menu_global.cxx \
	Fl_Multi_Label.cxx \
	Fl_Overlay_Window.cxx \
	Fl_Pack.cxx \
	Fl_Pixmap.cxx \
	Fl_Positioner.cxx \
	Fl_Preferences.cxx \
	Fl_Progress.cxx \
	Fl_Ps.cxx \
	Fl_Repeat_Button.cxx \
	Fl_Return_Button.cxx \
	Fl_Roller.cxx \
	Fl_Round_Button.cxx \
	Fl_Scroll.cxx \
	Fl_Scrollbar.cxx \
	Fl_Shaped_Window.cxx \
	Fl_Shared_Image.cxx \
	Fl_Single_Window.cxx \
	Fl_Slider.cxx \
	Fl_Tabs.cxx \
	Fl_Text_Buffer.cxx \
	Fl_Text_Display.cxx \
	Fl_Text_Editor.cxx \
	Fl_Tile.cxx \
	Fl_Tiled_Image.cxx \
	Fl_Tooltip.cxx \
	Fl_Tree.cxx \
	Fl_Valuator.cxx \
	Fl_Value_Input.cxx \
	Fl_Value_Output.cxx \
	Fl_Value_Slider.cxx \
	Fl_Widget.cxx \
	Fl_Window.cxx \
	Fl_Window_fullscreen.cxx \
	Fl_Window_hotspot.cxx \
	Fl_Window_iconize.cxx \
	Fl_Wizard.cxx \
	Fl_XBM_Image.cxx \
	Fl_XPM_Image.cxx \
	Fl_abort.cxx \
	Fl_add_idle.cxx \
	Fl_arg.cxx \
	Fl_compose.cxx \
	Fl_display.cxx \
	Fl_get_key.cxx \
	Fl_get_system_colors.cxx \
	Fl_grab.cxx \
	Fl_lock.cxx \
	Fl_own_colormap.cxx \
	Fl_visual.cxx \
	Fl_x.cxx \
	filename_absolute.cxx \
	filename_expand.cxx \
	filename_ext.cxx \
	filename_isdir.cxx \
	filename_list.cxx \
	filename_match.cxx \
	filename_setext.cxx \
	fl_arc.cxx \
	fl_arci.cxx \
	fl_ask.cxx \
	fl_boxtype.cxx \
	fl_color.cxx \
	fl_cursor.cxx \
	fl_curve.cxx \
	fl_diamond_box.cxx \
	fl_dnd.cxx \
	fl_draw.cxx \
	fl_draw_image.cxx \
	fl_draw_pixmap.cxx \
	fl_engraved_label.cxx \
	fl_file_dir.cxx \
	fl_font.cxx \
	fl_labeltype.cxx \
	fl_line_style.cxx \
	fl_oval_box.cxx \
	fl_overlay.cxx \
	fl_overlay_visual.cxx \
	fl_plastic.cxx \
	fl_read_image.cxx \
	fl_rect.cxx \
	fl_round_box.cxx \
	fl_rounded_box.cxx \
	fl_set_font.cxx \
	fl_set_fonts.cxx \
	fl_scroll_area.cxx \
	fl_shadow_box.cxx \
	fl_shortcut.cxx \
	fl_show_colormap.cxx \
	fl_symbols.cxx \
	fl_vertex.cxx \
	fl_utf8.cxx 

FLCPPFILES = \
	forms_compatability.cxx \
	forms_bitmap.cxx \
	forms_free.cxx \
	forms_fselect.cxx \
	forms_pixmap.cxx \
	forms_timer.cxx

GLCPPFILES = \
	Fl_Gl_Choice.cxx \
	Fl_Gl_Overlay.cxx \
	Fl_Gl_Window.cxx \
	gl_draw.cxx \
	gl_start.cxx \
	glut_compatability.cxx \
	glut_font.cxx

IMGCPPFILES = \
	fl_images_core.cxx \
	Fl_BMP_Image.cxx \
	Fl_File_Icon2.cxx \
	Fl_GIF_Image.cxx \
	Fl_Help_Dialog.cxx \
	Fl_JPEG_Image.cxx \
	Fl_PNG_Image.cxx \
	Fl_PNM_Image.cxx

CFILES = fl_call_main.c flstring.c scandir.c numericsort.c vsnprintf.c

CLEAN =	core* cmap *.obj *.lib

################################################################

include ../makeinclude

OBJECTS = $(CPPFILES:.cxx=.o) $(CFILES:.c=.o)
GLOBJECTS = $(GLCPPFILES:.cxx=.o)
FLOBJECTS = $(FLCPPFILES:.cxx=.o)
IMGOBJECTS = $(IMGCPPFILES:.cxx=.o)

all:	$(LIBNAME) $(DSONAME) \
	$(FLLIBNAME) $(FLDSONAME) \
	$(GLLIBNAME) $(GLDSONAME) \
	$(IMGLIBNAME) $(IMGDSONAME)

$(LIBNAME): $(OBJECTS)
	echo $(LIBCOMMAND) $@ ...
	-$(RM) $@
	$(LIBCOMMAND) $@ $(OBJECTS)
	$(RANLIB) $@

libfltk-utf8.so.1.1: $(OBJECTS)
	echo $(DSOCOMMAND) $@ ...
	$(DSOCOMMAND) $@ $(OBJECTS) 
	-$(RM) libfltk-utf8.so
	$(LN) libfltk-utf8.so.1.1 libfltk-utf8.so

libfltk-utf8.sl.1.1: $(OBJECTS)
	echo $(DSOCOMMAND) $@ ...
	$(DSOCOMMAND) $@ $(OBJECTS) 
	-$(RM) libfltk-utf8.sl
	$(LN) libfltk-utf8.sl.1.1 libfltk-utf8.sl

libfltk-utf8.1.1.dylib: $(OBJECTS)
	echo $(DSOCOMMAND) $@ ...
	$(DSOCOMMAND) $@ \
		-install_name $(libdir)/$@ \
		-current_version 1.1.4 \
		-compatibility_version 1.1.0 \
		$(OBJECTS) $(LDLIBS)
	-$(RM) libfltk-utf8.dylib
	$(LN) libfltk-utf8.1.1.dylib libfltk-utf8.dylib

libfltk-utf8_s.a: $(OBJECTS)
	echo $(DSOCOMMAND) libfltk-utf8_s.o ...
	$(DSOCOMMAND) libfltk-utf8_s.o $(OBJECTS) $(IMAGELIBS)
	echo $(LIBCOMMAND) libfltk-utf8_s.a libfltk-utf8_s.o
	-$(RM) $@
	$(LIBCOMMAND) libfltk-utf8_s.a libfltk-utf8_s.o
	$(CHMOD) +x libfltk-utf8_s.a

$(FLLIBNAME): $(FLOBJECTS)
	echo $(LIBCOMMAND) $@ ...
	-$(RM) $@
	$(LIBCOMMAND) $@ $(FLOBJECTS)
	$(RANLIB) $@

libfltk-utf8_forms.so.1.1: $(FLOBJECTS) libfltk-utf8.so.1.1
	echo $(DSOCOMMAND) $@ ...
	$(DSOCOMMAND) $@ $(FLOBJECTS) -L. -lfltk-utf8
	-$(RM) libfltk-utf8_forms.so
	$(LN) libfltk-utf8_forms.so.1.1 libfltk-utf8_forms.so

libfltk-utf8_forms.sl.1.1: $(FLOBJECTS) libfltk-utf8.sl.1.1
	echo $(DSOCOMMAND) $@ ...
	$(DSOCOMMAND) $@ $(FLOBJECTS) -L. -lfltk-utf8
	-$(RM) libfltk-utf8_forms.sl
	$(LN) libfltk-utf8_forms.sl.1.1 libfltk-utf8_forms.sl

libfltk-utf8_forms.1.1.dylib: $(FLOBJECTS) libfltk-utf8.1.1.dylib
	echo $(DSOCOMMAND) $@ ...
	$(DSOCOMMAND) $@ \
		-install_name $(libdir)/$@ \
		-current_version 1.1.4 \
		-compatibility_version 1.1.0 \
		$(FLOBJECTS) $(LDLIBS) -L. -lfltk-utf8
	-$(RM) libfltk-utf8_forms.dylib
	$(LN) libfltk-utf8_forms.1.1.dylib libfltk-utf8_forms.dylib

libfltk-utf8_forms_s.a: $(FLOBJECTS)
	echo $(DSOCOMMAND) libfltk-utf8_forms_s.o ...
	$(DSOCOMMAND) libfltk-utf8_forms_s.o $(FLOBJECTS)
	echo $(LIBCOMMAND) libfltk-utf8_forms_s.a libfltk-utf8_forms_s.o
	-$(RM) $@
	$(LIBCOMMAND) libfltk-utf8_forms_s.a libfltk-utf8_forms_s.o
	$(CHMOD) +x libfltk-utf8_forms_s.a

$(GLLIBNAME): $(GLOBJECTS)
	echo $(LIBCOMMAND) $@ ...
	-$(RM) $@
	$(LIBCOMMAND) $@ $(GLOBJECTS)
	$(RANLIB) $@

libfltk-utf8_gl.so.1.1: $(GLOBJECTS) libfltk-utf8.so.1.1
	echo $(DSOCOMMAND) $@ ...
	$(DSOCOMMAND) $@ $(GLOBJECTS) -L. -lfltk-utf8
	-$(RM) libfltk-utf8_gl.so
	$(LN) libfltk-utf8_gl.so.1.1 libfltk-utf8_gl.so

libfltk-utf8_gl.sl.1.1: $(GLOBJECTS) libfltk-utf8.sl.1.1
	echo $(DSOCOMMAND) $@ ...
	$(DSOCOMMAND) $@ $(GLOBJECTS) -L. -lfltk-utf8
	-$(RM) libfltk-utf8_gl.sl
	$(LN) libfltk-utf8_gl.sl.1.1 libfltk-utf8_gl.sl

libfltk-utf8_gl.1.1.dylib: $(GLOBJECTS) libfltk-utf8.1.1.dylib
	echo $(DSOCOMMAND) $@ ...
	$(DSOCOMMAND) $@ \
		-install_name $(libdir)/$@ \
		-current_version 1.1.4 \
		-compatibility_version 1.1.0 \
		$(GLOBJECTS) $(GLDLIBS) -L. -lfltk-utf8
	-$(RM) libfltk-utf8_gl.dylib
	$(LN) libfltk-utf8_gl.1.1.dylib libfltk-utf8_gl.dylib

libfltk-utf8_gl_s.a: $(GLOBJECTS)
	echo $(DSOCOMMAND) libfltk-utf8_gl_s.o ...
	$(DSOCOMMAND) libfltk-utf8_gl_s.o $(GLOBJECTS)
	echo $(LIBCOMMAND) libfltk-utf8_gl_s.a libfltk-utf8_gl_s.o
	-$(RM) $@
	$(LIBCOMMAND) libfltk-utf8_gl_s.a libfltk-utf8_gl_s.o
	$(CHMOD) +x libfltk-utf8_gl_s.a

$(IMGLIBNAME): $(IMGOBJECTS)
	echo $(LIBCOMMAND) $@ ...
	-$(RM) $@
	$(LIBCOMMAND) $@ $(IMGOBJECTS)
	$(RANLIB) $@

libfltk-utf8_images.so.1.1: $(IMGOBJECTS) libfltk-utf8.so.1.1
	echo $(DSOCOMMAND) $@ ...
	$(DSOCOMMAND) $@ $(IMGOBJECTS) -L. -lfltk-utf8
	-$(RM) libfltk-utf8_images.so
	$(LN) libfltk-utf8_images.so.1.1 libfltk-utf8_images.so

libfltk-utf8_images.sl.1.1: $(IMGOBJECTS) libfltk-utf8.sl.1.1
	echo $(DSOCOMMAND) $@ ...
	$(DSOCOMMAND) $@ $(IMGOBJECTS) -L. -lfltk-utf8
	-$(RM) libfltk-utf8_images.sl
	$(LN) libfltk-utf8_images.sl.1.1 libfltk-utf8_images.sl

libfltk-utf8_images.1.1.dylib: $(IMGOBJECTS) libfltk-utf8.1.1.dylib
	echo $(DSOCOMMAND) $@ ...
	$(DSOCOMMAND) $@ \
		-install_name $(libdir)/$@ \
		-current_version 1.1.4 \
		-compatibility_version 1.1.0 \
		$(GLOBJECTS) $(GLDLIBS) -L. -lfltk-utf8
	-$(RM) libfltk-utf8_images.dylib
	$(LN) libfltk-utf8_images.1.1.dylib libfltk-utf8_images.dylib

libfltk-utf8_images_s.a: $(IMGOBJECTS)
	echo $(DSOCOMMAND) libfltk-utf8_images_s.o ...
	$(DSOCOMMAND) libfltk-utf8_images_s.o $(IMGOBJECTS)
	echo $(LIBCOMMAND) libfltk-utf8_images_s.a libfltk-utf8_images_s.o
	-$(RM) $@
	$(LIBCOMMAND) libfltk-utf8_images_s.a libfltk-utf8_images_s.o
	$(CHMOD) +x libfltk-utf8_images_s.a


clean :
	-@ $(RM) *.o $(DSONAME) $(FLDSONAME) $(GLDSONAME) $(IMGDSONAME) \
		../lib/$(LIBNAME) ../lib/$(FLLIBNAME) ../lib/$(GLLIBNAME) \
		../lib/$(IMGLIBNAME) \
		libfltk-utf8.so libfltk-utf8_forms.so libfltk-utf8_gl.so libfltk-utf8_images.so \
		libfltk-utf8.sl libfltk-utf8_forms.sl libfltk-utf8_gl.sl libfltk-utf8_images.sl \
		libfltk-utf8.dylib libfltk-utf8_forms.dylib \
		libfltk-utf8_gl.dylib libfltk-utf8_images.dylib \
		$(CLEAN)

depend:	$(CPPFILES) $(FLCPPFILES) $(GLCPPFILES) $(IMGCPPFILES) $(CFILES)
	makedepend -Y -I.. -f makedepend $(CPPFILES) $(FLCPPFILES) \
		$(GLCPPFILES) $(IMGCPPFILES) $(CFILES)

# Automatically generated dependencies...
include makedepend

# These dependencies aren't part of the makedepend file since
# they are part of the WIN32 and MacOS code base...
Fl_get_key.o:	Fl_get_key_mac.cxx Fl_get_key_win32.cxx
Fl_x.o:		Fl_mac.cxx Fl_win32.cxx
fl_color.o:	fl_color_mac.cxx fl_color_win32.cxx
fl_dnd.o:	fl_dnd_mac.cxx fl_dnd_win32.cxx fl_dnd_x.cxx
fl_draw_image.o: fl_draw_image_mac.cxx fl_draw_image_win32.cxx
fl_font.o:	fl_font_mac.cxx fl_font_x.cxx fl_font_xft.cxx fl_font_win32.cxx
fl_read_image.o: fl_read_image_mac.cxx fl_read_image_win32.cxx
fl_set_fonts.o:	fl_set_fonts_mac.cxx fl_set_fonts_x.cxx \
		fl_set_fonts_xft.cxx fl_set_fonts_win32.cxx

fl_arci.o:	../FL/mac.H ../FL/win32.H
Fl_arg.o:	../FL/mac.H ../FL/win32.H
fl_ask.o:	../FL/mac.H ../FL/win32.H
Fl_Bitmap.o:	../FL/mac.H ../FL/win32.H
fl_color.o:	../FL/mac.H ../FL/win32.H
fl_cursor.o:	../FL/mac.H ../FL/win32.H
fl_dnd.o:	../FL/mac.H ../FL/win32.H
Fl.o:	../FL/mac.H ../FL/win32.H
Fl_Double_Window.o:	../FL/mac.H ../FL/win32.H
fl_draw_image.o:	../FL/mac.H ../FL/win32.H
fl_draw_image_mac.o:	../FL/mac.H ../FL/win32.H
fl_draw_image_win32.o:	../FL/mac.H ../FL/win32.H
fl_draw_pixmap.o:	../FL/mac.H ../FL/win32.H
Fl_File_Chooser2.o:	../FL/mac.H ../FL/win32.H
fl_font.o:	../FL/mac.H ../FL/win32.H
Fl_get_key.o:	../FL/mac.H ../FL/win32.H
Fl_get_system_colors.o:	../FL/mac.H ../FL/win32.H
Fl_Gl_Choice.o:	../FL/mac.H ../FL/win32.H
Fl_Gl_Overlay.o:	../FL/mac.H ../FL/win32.H
Fl_Gl_Window.o:	../FL/mac.H ../FL/win32.H
Fl_grab.o:	../FL/mac.H ../FL/win32.H
Fl_Image.o:	../FL/mac.H ../FL/win32.H
fl_line_style.o:	../FL/mac.H ../FL/win32.H
Fl_mac.o:	../FL/mac.H ../FL/win32.H
Fl_Menu_Window.o:	../FL/mac.H ../FL/win32.H
fl_overlay.o:	../FL/mac.H ../FL/win32.H
fl_overlay_visual.o:	../FL/mac.H ../FL/win32.H
Fl_Overlay_Window.o:	../FL/mac.H ../FL/win32.H
Fl_own_colormap.o:	../FL/mac.H ../FL/win32.H
Fl_Pixmap.o:	../FL/mac.H ../FL/win32.H
fl_read_image.o:	../FL/mac.H ../FL/win32.H
fl_read_image_mac.o:	../FL/mac.H ../FL/win32.H
fl_read_image_win32.o:	../FL/mac.H ../FL/win32.H
fl_rect.o:	../FL/mac.H ../FL/win32.H
fl_scroll_area.o:	../FL/mac.H ../FL/win32.H
fl_set_font.o:	../FL/mac.H ../FL/win32.H
fl_set_fonts.o:	../FL/mac.H ../FL/win32.H
fl_shortcut.o:	../FL/mac.H ../FL/win32.H
fl_vertex.o:	../FL/mac.H ../FL/win32.H
Fl_visual.o:	../FL/mac.H ../FL/win32.H
Fl_Window_fullscreen.o:	../FL/mac.H ../FL/win32.H
Fl_Window_iconize.o:	../FL/mac.H ../FL/win32.H
Fl_x.o:	../FL/mac.H ../FL/win32.H
gl_draw.o:	../FL/mac.H ../FL/win32.H
gl_start.o:	../FL/mac.H ../FL/win32.H

################################################################

install: $(LIBNAME) $(DSONAME) \
	$(FLLIBNAME) $(FLDSONAME) \
	$(GLLIBNAME) $(GLDSONAME) \
	$(IMGLIBNAME) $(IMGDSONAME)
	echo "Installing libraries in $(libdir)..."
	-$(MKDIR) $(libdir)
	$(RM) $(libdir)/$(LIBNAME)
	-$(CP) $(LIBNAME) $(FLLIBNAME) $(GLLIBNAME) $(IMGLIBNAME) $(libdir)
	$(RANLIB) $(libdir)/$(LIBNAME)
	$(RANLIB) $(libdir)/$(FLLIBNAME)
	if test x$(GLLIBNAME) != x; then \
		$(RANLIB) $(libdir)/$(GLLIBNAME); \
	fi
	$(RANLIB) $(libdir)/$(IMGLIBNAME)
	if test x$(DSONAME) = xlibfltk-utf8.so.1.1; then\
		$(RM) $(libdir)/libfltk-utf8.so*;\
		$(CP) libfltk-utf8.so.1.1 $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8.so.1.1; \
		$(LN) libfltk-utf8.so.1.1 $(libdir)/libfltk-utf8.so;\
	fi
	if test x$(DSONAME) = xlibfltk-utf8.sl.1.1; then\
		$(RM) $(libdir)/libfltk-utf8.sl*;\
		$(CP) libfltk-utf8.sl.1.1 $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8.sl.1.1; \
		$(LN) libfltk-utf8.sl.1.1 $(libdir)/libfltk-utf8.sl;\
	fi
	if test x$(DSONAME) = xlibfltk-utf8.1.1.dylib; then\
		$(RM) $(libdir)/libfltk-utf8.*dylib;\
		$(CP) libfltk-utf8.1.1.dylib $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8.1.1.dylib; \
		$(LN) libfltk-utf8.1.1.dylib $(libdir)/libfltk-utf8.dylib;\
	fi
	if test x$(DSONAME) = xlibfltk-utf8_s.a; then\
		$(RM) $(libdir)/libfltk-utf8_s.a;\
		$(CP) libfltk-utf8_s.a $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8_s.a; \
	fi
	if test x$(FLDSONAME) = xlibfltk-utf8_forms.so.1.1; then\
		$(RM) $(libdir)/libfltk-utf8_forms.so*;\
		$(CP) libfltk-utf8_forms.so.1.1 $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8_forms.so.1.1; \
		$(LN) libfltk-utf8_forms.so.1.1 $(libdir)/libfltk-utf8_forms.so;\
	fi
	if test x$(FLDSONAME) = xlibfltk-utf8_forms.sl.1.1; then\
		$(RM) $(libdir)/libfltk-utf8_forms.sl*;\
		$(CP) libfltk-utf8_forms.sl.1.1 $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8_forms.sl.1.1; \
		$(LN) libfltk-utf8_forms.sl.1.1 $(libdir)/libfltk-utf8_forms.sl;\
	fi
	if test x$(FLDSONAME) = xlibfltk-utf8_forms.1.1.dylib; then\
		$(RM) $(libdir)/libfltk-utf8_forms.*dylib;\
		$(CP) libfltk-utf8_forms.1.1.dylib $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8_forms.1.1.dylib; \
		$(LN) libfltk-utf8_forms.1.1.dylib $(libdir)/libfltk-utf8_forms.dylib;\
	fi
	if test x$(FLDSONAME) = xlibfltk-utf8_forms_s.a; then\
		$(RM) $(libdir)/libfltk-utf8_forms_s.a;\
		$(CP) libfltk-utf8_forms_s.a $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8_forms.a; \
	fi
	if test x$(GLDSONAME) = xlibfltk-utf8_gl.so.1.1; then\
		$(RM) $(libdir)/libfltk-utf8_gl.so*;\
		$(CP) libfltk-utf8_gl.so.1.1 $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8_gl.so.1.1; \
		$(LN) libfltk-utf8_gl.so.1.1 $(libdir)/libfltk-utf8_gl.so;\
	fi
	if test x$(GLDSONAME) = xlibfltk-utf8_gl.sl.1.1; then\
		$(RM) $(libdir)/libfltk-utf8_gl.sl*;\
		$(CP) libfltk-utf8_gl.sl.1.1 $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8_gl.sl.1.1; \
		$(LN) libfltk-utf8_gl.sl.1.1 $(libdir)/libfltk-utf8_gl.sl;\
	fi
	if test x$(GLDSONAME) = xlibfltk-utf8_gl.1.1.dylib; then\
		$(RM) $(libdir)/libfltk-utf8_gl.*dylib;\
		$(CP) libfltk-utf8_gl.1.1.dylib $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8_gl.1.1.dylib; \
		$(LN) libfltk-utf8_gl.1.1.dylib $(libdir)/libfltk-utf8_gl.dylib;\
	fi
	if test x$(GLDSONAME) = xlibfltk-utf8_gl_s.a; then\
		$(RM) $(libdir)/libfltk-utf8_gl_s.a;\
		$(CP) libfltk-utf8_gl_s.a $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8_gl.a; \
	fi
	if test x$(IMGDSONAME) = xlibfltk-utf8_images.so.1.1; then\
		$(RM) $(libdir)/libfltk-utf8_images.so*;\
		$(CP) libfltk-utf8_images.so.1.1 $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8_images.so.1.1; \
		$(LN) libfltk-utf8_images.so.1.1 $(libdir)/libfltk-utf8_images.so;\
	fi
	if test x$(IMGDSONAME) = xlibfltk-utf8_images.sl.1.1; then\
		$(RM) $(libdir)/libfltk-utf8_images.sl*;\
		$(CP) libfltk-utf8_images.sl.1.1 $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8_images.sl.1.1; \
		$(LN) libfltk-utf8_images.sl.1.1 $(libdir)/libfltk-utf8_images.sl;\
	fi
	if test x$(IMGDSONAME) = xlibfltk-utf8_images.1.1.dylib; then\
		$(RM) $(libdir)/libfltk-utf8_images.*dylib;\
		$(CP) libfltk-utf8_images.1.1.dylib $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8_images.1.1.dylib; \
		$(LN) libfltk-utf8_images.1.1.dylib $(libdir)/libfltk-utf8_images.dylib;\
	fi
	if test x$(IMGDSONAME) = xlibfltk-utf8_images_s.a; then\
		$(RM) $(libdir)/libfltk-utf8_images_s.a;\
		$(CP) libfltk-utf8_images_s.a $(libdir); \
		$(CHMOD) 755 $(libdir)/libfltk-utf8_images.a; \
	fi

uninstall:
	echo "Uninstalling libraries..."
	$(RM) $(libdir)/$(LIBNAME)
	if test x$(DSONAME) = xlibfltk-utf8.so.1.1; then\
		$(RM) $(libdir)/libfltk-utf8.so*;\
	fi
	if test x$(DSONAME) = xlibfltk-utf8.sl.1.1; then\
		$(RM) $(libdir)/libfltk-utf8.sl*;\
	fi
	if test x$(DSONAME) = xlibfltk-utf8.1.1.dylib; then\
		$(RM) $(libdir)/libfltk-utf8.*dylib;\
	fi
	if test x$(DSONAME) = xlibfltk-utf8_s.a; then\
		$(RM) $(libdir)/libfltk-utf8_s.a;\
	fi
	$(RM) $(libdir)/$(FLLIBNAME);
	if test x$(FLDSONAME) = xlibfltk-utf8_forms.so.1.1; then\
		$(RM) $(libdir)/libfltk-utf8_forms.so*;\
	fi
	if test x$(FLDSONAME) = xlibfltk-utf8_forms.sl.1.1; then\
		$(RM) $(libdir)/libfltk-utf8_forms.sl*;\
	fi
	if test x$(FLDSONAME) = xlibfltk-utf8_forms.1.1.dylib; then\
		$(RM) $(libdir)/libfltk-utf8_forms.*dylib;\
	fi
	if test x$(FLDSONAME) = xlibfltk-utf8_forms_s.a; then\
		$(RM) $(libdir)/libfltk-utf8_forms_s.a;\
	fi
	if test x$(GLLIBNAME) != x; then\
		$(RM) $(libdir)/$(GLLIBNAME);\
	fi
	if test x$(GLDSONAME) = xlibfltk-utf8_gl.so.1.1; then\
		$(RM) $(libdir)/libfltk-utf8_gl.so*;\
	fi
	if test x$(GLDSONAME) = xlibfltk-utf8_gl.sl.1.1; then\
		$(RM) $(libdir)/libfltk-utf8_gl.sl*;\
	fi
	if test x$(GLDSONAME) = xlibfltk-utf8_gl.1.1.dylib; then\
		$(RM) $(libdir)/libfltk-utf8_gl.*dylib;\
	fi
	if test x$(GLDSONAME) = xlibfltk-utf8_gl_s.a; then\
		$(RM) $(libdir)/libfltk-utf8_gl_s.a;\
	fi
	if test x$(IMGLIBNAME) != x; then\
		$(RM) $(libdir)/$(IMGLIBNAME);\
	fi
	if test x$(IMGDSONAME) = xlibfltk-utf8_images.so.1.1; then\
		$(RM) $(libdir)/libfltk-utf8_images.so*;\
	fi
	if test x$(IMGDSONAME) = xlibfltk-utf8_images.sl.1.1; then\
		$(RM) $(libdir)/libfltk-utf8_images.sl*;\
	fi
	if test x$(IMGDSONAME) = xlibfltk-utf8_images.1.1.dylib; then\
		$(RM) $(libdir)/libfltk-utf8_images.*dylib;\
	fi
	if test x$(IMGDSONAME) = xlibfltk-utf8_images_s.a; then\
		$(RM) $(libdir)/libfltk-utf8_images_s.a;\
	fi


#
# End of "$Id: Makefile,v 1.18.2.14.2.54 2003/08/24 13:09:06 easysw Exp $".
#
