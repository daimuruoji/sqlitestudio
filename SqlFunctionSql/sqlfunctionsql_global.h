#ifndef SQLFUNCTIONSQL_GLOBAL_H
#define SQLFUNCTIONSQL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SQLFUNCTIONSQL_LIBRARY)
#  define SQLFUNCTIONSQLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SQLFUNCTIONSQLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SQLFUNCTIONSQL_GLOBAL_H