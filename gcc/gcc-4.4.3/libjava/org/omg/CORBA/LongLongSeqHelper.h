
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_LongLongSeqHelper__
#define __org_omg_CORBA_LongLongSeqHelper__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class LongLongSeqHelper;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
    }
  }
}

class org::omg::CORBA::LongLongSeqHelper : public ::java::lang::Object
{

public:
  LongLongSeqHelper();
  static JArray< jlong > * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static void insert(::org::omg::CORBA::Any *, JArray< jlong > *);
  static JArray< jlong > * read(::org::omg::CORBA::portable::InputStream *);
  static ::org::omg::CORBA::TypeCode * type();
  static void write(::org::omg::CORBA::portable::OutputStream *, JArray< jlong > *);
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_LongLongSeqHelper__