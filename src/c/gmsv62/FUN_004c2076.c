/* FUN_004c2076 - 0x004c2076 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004c2076(int param_1)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (DAT_00978358 != 0) {
    if ((param_1 == 0) || (*(int *)(DAT_00978358 + 0x528) < 1)) {
      if ((*(uint *)(DAT_00978358 + 0x52c) & 0xfffffffe) != 0x12) {
        return 1;
      }
      uVar1 = 0x49;
    }
    else {
      uVar1 = 0x117;
    }
    uStack_8 = 0;
    uStack_c = 0;
    uStack_10 = 0;
    uStack_14 = 0;
    uStack_18 = 0;
    FUN_00679d22(&uStack_18,uVar1);
    FUN_007db3ad();
  }
  return 0;
}


