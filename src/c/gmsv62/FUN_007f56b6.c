/* FUN_007f56b6 - 0x007f56b6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x007f56cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_007f56b6(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined8 *param_8,
                int param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    if (DAT_0097c1ac == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0065c8fd();
    if (param_2 != (undefined4 *)0x0) {
      FUN_004f1993(param_1 + 0x74,*(undefined4 *)(param_1 + 0x84));
      FUN_004f1993(param_1 + 0x14,*(undefined4 *)(param_1 + 0x24));
      FUN_004f1993(param_1 + 0x14,*(undefined4 *)(param_1 + 0x24));
      uVar2 = __ftol();
      *param_2 = uVar2;
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_004f1993(param_1 + 0x8c,*(undefined4 *)(param_1 + 0x9c));
      FUN_004f1993(param_1 + 0x2c,*(undefined4 *)(param_1 + 0x3c));
      FUN_004f1993(param_1 + 0x2c,*(undefined4 *)(param_1 + 0x3c));
      uVar2 = __ftol();
      *param_3 = uVar2;
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_004f1993(param_1 + 0x74,*(undefined4 *)(param_1 + 0x84));
      FUN_004f1993(param_1 + 0x14,*(undefined4 *)(param_1 + 0x24));
      FUN_004f1993(param_1 + 0x14,*(undefined4 *)(param_1 + 0x24));
      uVar2 = __ftol();
      *param_4 = uVar2;
    }
    if (param_5 != (undefined4 *)0x0) {
      FUN_004f1993(param_1 + 0x8c,*(undefined4 *)(param_1 + 0x9c));
      FUN_004f1993(param_1 + 0x2c,*(undefined4 *)(param_1 + 0x3c));
      FUN_004f1993(param_1 + 0x2c,*(undefined4 *)(param_1 + 0x3c));
      uVar2 = __ftol();
      *param_5 = uVar2;
    }
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x8c))
                      (*(int **)(param_1 + 0x10),param_2,param_3,param_4,param_5,0,0,0,0,param_10,
                       param_11,(undefined4)param_12,param_12._4_4_);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  if (param_8 != (undefined8 *)0x0) {
    *param_8 = 0;
  }
  if (param_9 != 0) {
    *param_8 = 0;
  }
  return 0;
}


