/* FUN_004f0e53 - 0x004f0e53 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f0e53(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = FUN_0042452b();
  for (uVar1 = uVar1 & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
    uVar2 = FUN_0042459a();
    FUN_004245d2(&local_14,8);
    FUN_004245d2(&local_c,8);
    FUN_0062aee8(uVar2,local_14,local_10,local_c,local_8);
  }
  return;
}


