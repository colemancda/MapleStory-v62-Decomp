/* FUN_0088a97b - 0x0088a97b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0088a97b(int param_1)

{
  bool bVar1;
  
  if (DAT_0098079c == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      return param_1 + -0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_00982008);
    bVar1 = DAT_00982004 != 0;
    if (bVar1) {
      InterlockedDecrement(&DAT_00982008);
      FUN_0087d9ec(0x13);
    }
    param_1 = FUN_0088a9ea(param_1);
    if (bVar1) {
      FUN_0087da4d(0x13);
    }
    else {
      InterlockedDecrement(&DAT_00982008);
    }
  }
  return param_1;
}


