/*

*/

#ifndef COLLECTOR_EXPORT_H_
#define COLLECTOR_EXPORT_H_

#if defined(COLLECTOR_IMPLEMENTATION)
#define COLLECTOR_EXPORT                SYMBOL_EXPORT
#define COLLECTOR_EXPORT_PRIVATE        SYMBOL_EXPORT
#else
#define COLLECTOR_EXPORT
#define COLLECTOR_EXPORT_PRIVATE
#endif  // defined(COLLECTOR_IMPLEMENTATION)

#endif // COLLECTOR_EXPORT_H_
