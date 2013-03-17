#if defined(UBJSON)
 #  define UBJSON_EXPORT Q_DECL_EXPORT
 #else
 #  define UBJSON_EXPORT Q_DECL_IMPORT
 #endif
