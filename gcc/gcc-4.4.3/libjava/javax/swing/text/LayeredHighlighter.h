
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_LayeredHighlighter__
#define __javax_swing_text_LayeredHighlighter__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Graphics;
        class Shape;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class Highlighter$Highlight;
          class Highlighter$HighlightPainter;
          class JTextComponent;
          class LayeredHighlighter;
          class View;
      }
    }
  }
}

class javax::swing::text::LayeredHighlighter : public ::java::lang::Object
{

public:
  LayeredHighlighter();
  virtual void paintLayeredHighlights(::java::awt::Graphics *, jint, jint, ::java::awt::Shape *, ::javax::swing::text::JTextComponent *, ::javax::swing::text::View *) = 0;
  virtual void install(::javax::swing::text::JTextComponent *) = 0;
  virtual void deinstall(::javax::swing::text::JTextComponent *) = 0;
  virtual ::java::lang::Object * addHighlight(jint, jint, ::javax::swing::text::Highlighter$HighlightPainter *) = 0;
  virtual void removeAllHighlights() = 0;
  virtual void removeHighlight(::java::lang::Object *) = 0;
  virtual void changeHighlight(::java::lang::Object *, jint, jint) = 0;
  virtual JArray< ::javax::swing::text::Highlighter$Highlight * > * getHighlights() = 0;
  virtual void paint(::java::awt::Graphics *) = 0;
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_LayeredHighlighter__
