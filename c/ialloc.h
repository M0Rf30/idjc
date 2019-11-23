/*
#   ialloc.h: Heap memory allocation routines for IDJC
#   Copyright (C) 2005-2006 Stephen Fairchild (s-fairchild@users.sourceforge.net)
#
#   This program is free software: you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation, either version 2 of the License, or
#   (at your option) any later version.
#
#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.
#
#   You should have received a copy of the GNU General Public License
#   along with this program in the file entitled COPYING.
#   If not, see <http://www.gnu.org/licenses/>.
*/

#include <jack/jack.h>

jack_default_audio_sample_t *ialloc(jack_nframes_t size);
void ifree(jack_default_audio_sample_t *memblock);
jack_default_audio_sample_t *irealloc(jack_default_audio_sample_t *, jack_nframes_t);
