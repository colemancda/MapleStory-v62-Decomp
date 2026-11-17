/* FUN_00653365 - 0x00653365 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00653365(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
                undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  *param_5 = 0;
  local_8 = 0;
  *param_4 = 0;
  iVar1 = FUN_0044dddc(param_2);
  if (iVar1 < 0x2d) {
LAB_00653454:
    local_8 = 0;
  }
  else {
    if (iVar1 < 0x2f) {
      if (param_3 == 1) {
        local_8 = FUN_00650dae(param_1,0x2dc6c1,&DAT_0097964c);
        iVar1 = DAT_0097964c;
LAB_006533ef:
        if ((iVar1 != 0) && (0 < local_8)) {
          if (param_4 != (undefined4 *)0x0) {
            iVar1 = FUN_006509a1(local_8);
            uVar2 = FUN_00413367(iVar1 + 0xf4,*(undefined4 *)(iVar1 + 0xfc));
            *param_4 = uVar2;
          }
          if (param_5 == (undefined4 *)0x0) {
            return local_8;
          }
          iVar1 = FUN_006509a1(local_8);
          uVar2 = FUN_00413367(iVar1 + 0xd0,*(undefined4 *)(iVar1 + 0xd8));
          *param_5 = uVar2;
          return local_8;
        }
      }
    }
    else {
      if (iVar1 != 0x2f) goto LAB_00653454;
      if (param_3 == 1) {
        local_8 = FUN_00650dae(param_1,0x3e8fa1,&DAT_00979648);
        iVar1 = DAT_00979648;
        goto LAB_006533ef;
      }
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
  }
  return local_8;
}


