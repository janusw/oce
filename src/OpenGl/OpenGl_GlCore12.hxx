// Created on: 2012-03-06
// Created by: Kirill GAVRILOV
// Copyright (c) -1999 Matra Datavision
// Copyright (c) 2012-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.


#ifndef _OpenGl_GlCore12_H__
#define _OpenGl_GlCore12_H__

#ifdef HAVE_CONFIG_H
# include <oce-config.h>
#endif

#include <OpenGl_GlCore11.hxx>

// We can safely #undef GL_VERSION_x_y since redeclaration of typedef names can
// be done for same type: http://msdn.microsoft.com/en-us/library/87txds41.aspx
// It is required to fix build against Mesa >= 10:
// http://cgit.freedesktop.org/mesa/mesa/commit/?id=a36f7e6
#undef GL_VERSION_1_2
#undef GL_VERSION_1_3
#undef GL_VERSION_1_4
#undef GL_VERSION_1_5
#undef GL_VERSION_2_0

#include <OpenGl_glext.h>

//! Function list for GL1.2 core functionality.
struct OpenGl_GlCore12
{

  PFNGLBLENDCOLORPROC        glBlendColor;
  PFNGLBLENDEQUATIONPROC     glBlendEquation;
  PFNGLDRAWRANGEELEMENTSPROC glDrawRangeElements;
  PFNGLTEXIMAGE3DPROC        glTexImage3D;
  PFNGLTEXSUBIMAGE3DPROC     glTexSubImage3D;
  PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D;

};

#endif // _OpenGl_GlCore12_H__
