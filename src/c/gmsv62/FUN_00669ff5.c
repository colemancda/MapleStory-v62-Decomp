/* FUN_00669ff5 - 0x00669ff5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00669ff5(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 local_14 [16];
  
  FUN_006f5500(0);
  iVar1 = FUN_00413367(param_1 + 0x2dc,*(undefined4 *)(param_1 + 0x2e4));
  if (iVar1 != 0) {
    iVar1 = FUN_00413367(param_1 + 0x2f4,*(undefined4 *)(param_1 + 0x2fc));
    if (-100 < param_3 - iVar1) {
      FUN_006f59d1(&DAT_0097b0f0);
    }
  }
  iVar1 = FUN_00413367(param_1 + 0x300,*(undefined4 *)(param_1 + 0x308));
  if (iVar1 != 0) {
    iVar1 = FUN_00413367(param_1 + 0x318,*(undefined4 *)(param_1 + 800));
    if (-100 < param_3 - iVar1) {
      FUN_006f59d1(&DAT_0097af60);
    }
  }
  iVar1 = FUN_00413367(param_1 + 0x324,*(undefined4 *)(param_1 + 0x32c));
  if (iVar1 != 0) {
    iVar1 = FUN_00413367(param_1 + 0x33c,*(undefined4 *)(param_1 + 0x344));
    if (-100 < param_3 - iVar1) {
      FUN_006f59d1(&DAT_0097af50);
    }
  }
  iVar1 = FUN_00413367(param_1 + 0x348,*(undefined4 *)(param_1 + 0x350));
  if (iVar1 != 0) {
    iVar1 = FUN_00413367(param_1 + 0x360,*(undefined4 *)(param_1 + 0x368));
    if (-100 < param_3 - iVar1) {
      FUN_006f59d1(&DAT_0097af40);
    }
  }
  iVar1 = FUN_00413367(param_1 + 0x4bc,*(undefined4 *)(param_1 + 0x4c4));
  if (iVar1 != 0) {
    iVar1 = FUN_00413367(param_1 + 0x4d4,*(undefined4 *)(param_1 + 0x4dc));
    if (-100 < param_3 - iVar1) {
      FUN_006f59d1(&DAT_0097b0e0);
    }
  }
  iVar1 = FUN_00413367(param_1 + 0x4e0,*(undefined4 *)(param_1 + 0x4e8));
  if (iVar1 != 0) {
    iVar1 = FUN_00413367(param_1 + 0x4f8,*(undefined4 *)(param_1 + 0x500));
    if (-100 < param_3 - iVar1) {
      FUN_006f59d1(&DAT_0097aea0);
    }
  }
  iVar1 = FUN_00413367(param_1 + 0x504,*(undefined4 *)(param_1 + 0x50c));
  if (iVar1 != 0) {
    iVar1 = FUN_00413367(param_1 + 0x51c,*(undefined4 *)(param_1 + 0x524));
    if (-100 < param_3 - iVar1) {
      FUN_006f59d1(&DAT_0097b0d0);
    }
  }
  iVar1 = FUN_00413367(param_1 + 0x630,*(undefined4 *)(param_1 + 0x638));
  if (iVar1 != 0) {
    iVar1 = FUN_00413367(param_1 + 0x648,*(undefined4 *)(param_1 + 0x650));
    if (-100 < param_3 - iVar1) {
      FUN_006f59d1(&DAT_0097b090);
    }
  }
  iVar1 = FUN_00413367(param_1 + 0x7b0,*(undefined4 *)(param_1 + 0x7b8));
  if (iVar1 != 0) {
    iVar1 = FUN_00413367(param_1 + 0x7c8,*(undefined4 *)(param_1 + 2000));
    if (-100 < param_3 - iVar1) {
      FUN_006f59d1(&DAT_0097adc0);
    }
  }
  iVar1 = FUN_00413367(param_1 + 0x738,*(undefined4 *)(param_1 + 0x740));
  if (iVar1 != 0) {
    iVar1 = FUN_00413367(param_1 + 0x750,*(undefined4 *)(param_1 + 0x758));
    if (-100 < param_3 - iVar1) {
      FUN_006f59d1(&DAT_0097adf0);
    }
  }
  FUN_006f5512(local_14,0x80);
  return param_2;
}


