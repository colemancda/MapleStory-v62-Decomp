/* FUN_007f5330 - 0x007f5330 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007f5330(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x104) = 0;
  uVar1 = FUN_007f457a();
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  uVar1 = FUN_004f1a11((double)param_2);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar1 = FUN_004f1a11((double)param_2);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_004f1a11((double)param_3);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  uVar1 = FUN_004f1a11((double)param_3);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_004f1a11(0);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  uVar1 = FUN_004f1a11(0);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = FUN_004f1a11(0);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  uVar1 = FUN_004f1a11(0);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_004e98b7(3);
  }
  return 0;
}


