#ifndef PACKAGEKITQT_GLOBAL_H
#define PACKAGEKITQT_GLOBAL_H

#include <QtCore/QtGlobal>

#if defined(PACKAGEKITQT_LIBRARY)
#  define PACKAGEKITQT_LIBRARY Q_DECL_EXPORT
#else
#  define PACKAGEKITQT_LIBRARY Q_DECL_IMPORT
#endif

#endif // PACKAGEKITQT_GLOBAL_H
