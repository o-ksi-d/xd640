/******************************************************************************
 *   "$Id:  $"
 *
 *                 Copyright (c) 2000-2001  O'ksi'D
 *
 *                      All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *      Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *
 *      Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *
 *      Neither the name of O'ksi'D nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER 
 * OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *   Author : Jean-Marc Lienher ( http://oksid.ch )
 *
 ******************************************************************************/


#ifndef Xd6HtmlBlock_h
#define Xd6HtmlBlock_h

#include "Xd6HtmlSegment.h"
#include "Xd6HtmlLine.h"

class Xd6HtmlSegment;
class Xd6HtmlLine;
class Xd6XmlStl;

class Xd6HtmlBlock {
public:
	int id;

	int top;
	int left;
	int width : 30;
	unsigned int flags : 2;
	int height;
	Xd6XmlStl *stl;
	int max_width;
	int min_width;
	int frame_width;
	unsigned short list_id;

	Xd6HtmlSegment **segs;
	int nb_segs;
	Xd6HtmlLine **lines;
	int nb_lines;

	Xd6HtmlBlock(int i, int mw);
	~Xd6HtmlBlock(void);
	void add_line(void);
	void add_segment(char *txt, int len, Xd6XmlStl *style);
	void measure(void);
	void draw(int X, int Y);
	void create_lines(void);
	void align_lines(void);

	void find_pos(int X, int Y, int x, int y, Xd6HtmlLine **line, 
			Xd6HtmlSegment **seg, char **chr);
	void cut_begin(Xd6HtmlLine *l, Xd6HtmlSegment *s, char *c);
	void cut_end(Xd6HtmlLine *l, Xd6HtmlSegment *s, char *c);
	char *cut_middle(Xd6HtmlLine *l, Xd6HtmlSegment *s, char *c,
			Xd6HtmlLine *l1, Xd6HtmlSegment *s1, char *c1);
	void cut(void);
	void cut_line_begin(Xd6HtmlLine *l, Xd6HtmlSegment *s, char *c);
	void cut_line_end(Xd6HtmlLine *l, Xd6HtmlSegment *s, char *c);
	char *cut_line_middle(Xd6HtmlLine *l, Xd6HtmlSegment *s, char *c,
			Xd6HtmlSegment *s1, char *c1);
	void cut_line(Xd6HtmlLine *l);
	void clean_segs_array(void);
};

#endif

/*
 * "$Id: $"
 */
