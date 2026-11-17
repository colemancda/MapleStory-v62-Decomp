/* FUN_0049ba0b - 0x0049ba0b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0049ba0b(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int local_8;
  
  uVar1 = FUN_00679e4e(&local_8,0xaaf);
  FUN_00402f41(uVar1);
  if (local_8 != 0) {
    FUN_004030b1();
  }
  if (param_1 == 1) {
    puVar2 = &DAT_00964304;
  }
  else if (param_1 == 2) {
    puVar2 = &DAT_0096430c;
  }
  else if (param_1 == 3) {
    puVar2 = &DAT_00964300;
  }
  else {
    if (param_1 != 4) {
      return;
    }
    puVar2 = &DAT_00964d74;
  }
  FUN_0049e7d6(puVar2);
  return;
}


