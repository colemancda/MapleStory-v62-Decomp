/* FUN_00878d4a - 0x00878d4a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00878d4a(undefined4 param_1)

{
  LONG LVar1;
  
  if (DAT_00980678 != 2) {
    if (DAT_00980678 == 0) {
      LVar1 = InterlockedExchange(&DAT_00980678,1);
      if (LVar1 == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00980660);
        FUN_008796d0(&LAB_00878dc8);
        DAT_00980678 = 2;
        goto LAB_00878dbc;
      }
      if (LVar1 == 2) {
        DAT_00980678 = 2;
      }
    }
    while (DAT_00980678 == 1) {
      Sleep(1);
    }
    if (DAT_00980678 != 2) {
      return param_1;
    }
  }
LAB_00878dbc:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00980660);
  return param_1;
}


