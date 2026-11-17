/* FUN_005f99fc - 0x005f99fc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005f99fc(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc0);
  uVar2 = FUN_0042452b();
  if (uVar1 == (uVar2 & 0xff)) {
    *(undefined4 *)(param_1 + 0xa9c) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xa9c) = 0;
  }
  *(undefined4 *)(param_1 + 0xab8) = 30000;
  FUN_008161f1(0);
  return;
}


