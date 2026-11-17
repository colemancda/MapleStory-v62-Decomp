/* _com_error, MSVC's COM exception class (comdef.h), reconstructed from the exe.
 *
 * vtable 0x8f3e88 (one slot: the scalar deleting destructor at 0x4038b2), size 16 (exception tables).
 *   0x403880  _com_error(HRESULT, IErrorInfo *, bool fAddRef)
 *   0x4038d2  _com_error(const _com_error &)
 *   0x4038ff  ~_com_error()           (0x4038b2 is the compiler's scalar deleting destructor)
 * Evidence: docs/classes/GMSv62_rtti.csv (name, size, copy constructor), the disassembly of the three
 * functions, and src/c/gmsv62/{FUN_00403880,ptr_004038d2,__com_error}.c. */
#ifndef COMERROR_H
#define COMERROR_H

#include <windows.h>
#include <oaidl.h>

class _com_error {
public:
    _com_error(HRESULT hr, IErrorInfo *perrinfo = 0, bool fAddRef = false) throw();   // 0x403880
    _com_error(const _com_error &that) throw();                                        // 0x4038d2
    virtual ~_com_error() throw();                                                     // 0x4038ff / 0x4038b2

private:
    HRESULT m_hresult;      // +4
    IErrorInfo *m_perrinfo; // +8
    mutable char *m_pszMsg; // +0xc, LocalFree'd by the destructor
};

#endif
