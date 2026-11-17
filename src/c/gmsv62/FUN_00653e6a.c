/* FUN_00653e6a - 0x00653e6a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00653e6a(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 < 1) {
    return 0xffffffff;
  }
  if (9 < param_1) {
    return 0xffffffff;
  }
  if (param_3 != 0) {
    iVar1 = FUN_00653f88(param_2);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_00653f4d(param_4);
    if (iVar1 != 0) {
      uVar2 = FUN_00653ee7(param_4,param_5);
      return uVar2;
    }
    iVar1 = param_1 * 2 + -1;
    if (*(int *)(param_3 + 0xc) == 3) goto LAB_00653ebc;
  }
  iVar1 = param_1 * 2 + -2;
LAB_00653ebc:
  if ((int)*(uint *)(&DAT_009683c0 + iVar1 * 0x18) < 1) {
    return 0xffffffff;
  }
  return *(undefined4 *)
          (&DAT_009683c4 + (param_5 % *(uint *)(&DAT_009683c0 + iVar1 * 0x18) + iVar1 * 6) * 4);
}


