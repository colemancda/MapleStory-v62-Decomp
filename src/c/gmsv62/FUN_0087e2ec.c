/* FUN_0087e2ec - 0x0087e2ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0087e2ec(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_0087d957();
  DAT_00970210 = TlsAlloc();
  if (DAT_00970210 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_0087fc96(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_00970210,lpTlsValue);
      if (BVar1 != 0) {
        FUN_0087e35e(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}


