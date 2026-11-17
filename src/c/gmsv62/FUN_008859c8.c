/* FUN_008859c8 - 0x008859c8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_008859c8(int param_1)

{
  bool bVar1;
  
  if (DAT_0098079c == 0) {
    if ((0x40 < param_1) && (param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_00982008);
    bVar1 = DAT_00982004 != 0;
    if (bVar1) {
      InterlockedDecrement(&DAT_00982008);
      FUN_0087d9ec(0x13);
    }
    param_1 = FUN_00885a37(param_1);
    if (bVar1) {
      FUN_0087da4d(0x13);
    }
    else {
      InterlockedDecrement(&DAT_00982008);
    }
  }
  return param_1;
}


