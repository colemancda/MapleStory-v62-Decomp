/* Exception types whose names, sizes and bases come from the client's own MSVC exception tables
 * (tools/name_rtti.py, docs/classes/GMSv62_rtti.csv). Sizes are authoritative; the member names are
 * ours. They are thrown by value (no vtable), the code looks like 0x21000001, 0x21000002, ...
 * _com_error (size 16, a polymorphic class) is in GMSv62_classes.h under its real name. */
#ifndef GMSV62_EXCEPTIONS_H
#define GMSV62_EXCEPTIONS_H

#define EXC_SIZE_CHECK(T, N) typedef char size_check_##T[sizeof(T) == (N) ? 1 : -1]

struct ZException { unsigned int m_dwCode; };                       // size 4, 70 throw sites
struct CMSException : ZException {};                                // base of the three below; size not recorded
struct CDisconnectException : CMSException {};                      // size 4, 39 throw sites
struct CTerminateException : CMSException {};                       // size 4, 50 throw sites
struct CPatchException : CMSException { unsigned char m_raw[1284]; };  // size 1288, 2 throw sites; fields unrecovered
struct CSecurityInitFailed { unsigned int m_dwCode; };              // size 4, 2 throw sites, no bases
struct CSecurityKeyCryptInitFailed { unsigned int m_dwCode; };      // size 4, 2 throw sites, no bases
struct CSecurityThreatDetected { unsigned int m_dwCode; };          // size 4, 2 throw sites, no bases

EXC_SIZE_CHECK(ZException, 4);
EXC_SIZE_CHECK(CMSException, 4);
EXC_SIZE_CHECK(CDisconnectException, 4);
EXC_SIZE_CHECK(CTerminateException, 4);
EXC_SIZE_CHECK(CPatchException, 1288);
EXC_SIZE_CHECK(CSecurityInitFailed, 4);
EXC_SIZE_CHECK(CSecurityKeyCryptInitFailed, 4);
EXC_SIZE_CHECK(CSecurityThreatDetected, 4);

#endif
