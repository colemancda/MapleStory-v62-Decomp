/* FUN_004b8a11 - 0x004b8a11 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b8a11(undefined4 param_1)

{
  uint uVar1;
  undefined1 local_5;
  
  uVar1 = FUN_0042452b();
  uVar1 = uVar1 & 0xff;
  if (5 < uVar1) {
    uVar1 = 5;
  }
  FUN_004b9850(uVar1,1,&local_5);
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    FUN_004b8979(param_1);
  }
  return;
}


