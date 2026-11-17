/* FUN_00652c29 - 0x00652c29 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00652c29(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  iVar1 = FUN_0044dddc(param_2);
  if (0x2b < iVar1) {
    if (iVar1 == 0x2c) {
      if (param_3 != 0) {
        return 0;
      }
      puVar5 = &DAT_009796a8;
      uVar4 = 0x13d621;
      goto LAB_00652e27;
    }
    if (iVar1 == 0x2d) {
      if (param_3 != 1) {
        return 0;
      }
      iVar1 = FUN_00652e4f(param_1,3100000,&DAT_009796a4,param_5);
      puVar5 = &DAT_009796a0;
      uVar4 = 0x2f9b85;
LAB_00652dc6:
      iVar2 = FUN_00652e4f(param_1,uVar4,puVar5,param_6);
      if (iVar2 == 0) {
        return iVar1;
      }
      return iVar2;
    }
    if (iVar1 == 0x2e) {
      if (param_3 != 1) {
        return 0;
      }
      iVar1 = FUN_00652e4f(param_1,3200000,&DAT_0097969c,param_5);
      puVar5 = &DAT_00979698;
      uVar4 = 0x312224;
      goto LAB_00652dc6;
    }
    if (iVar1 == 0x2f) {
      if (param_3 != 1) {
        return 0;
      }
      puVar5 = &DAT_00979694;
      puVar3 = (undefined1 *)0x3e8fa0;
    }
    else if (iVar1 == 0x30) {
      if (param_3 != 0) {
        if (param_4 != &DAT_004e23ea) {
          return 0;
        }
        if (param_3 != 1) {
          return 0;
        }
      }
      puVar5 = &DAT_0097968c;
      puVar3 = &LAB_004dd1e1;
    }
    else {
      if (iVar1 != 0x31) {
        return 0;
      }
      if (param_3 != 1) {
        if (param_4 != (undefined *)0x4faa8b) {
          return 0;
        }
        if (param_3 != 0) {
          return 0;
        }
      }
      puVar5 = &DAT_00979688;
      puVar3 = (undefined1 *)0x4f5880;
    }
    goto LAB_00652c76;
  }
  if (iVar1 == 0x2b) {
    if (param_3 != 0) {
      return 0;
    }
    puVar5 = &DAT_009796b0;
    uVar4 = 1300000;
LAB_00652e27:
    iVar1 = FUN_00652e4f(param_1,uVar4,puVar5,param_5);
    iVar2 = FUN_00652e4f(param_1,0x14282f,&DAT_009796ac,0);
    return iVar2 + iVar1;
  }
  if (iVar1 == 0x1e) {
LAB_00652cad:
    if (param_3 == 0) {
      iVar1 = FUN_00652e4f(param_1,1100000,&DAT_009796c0,param_5);
      if (iVar1 != 0) {
        return iVar1;
      }
      puVar5 = &DAT_009796bc;
      puVar3 = (undefined1 *)0x124f80;
      goto LAB_00652c76;
    }
  }
  else {
    if (iVar1 == 0x1f) {
LAB_00652c98:
      if (param_3 != 0) {
        return 0;
      }
      puVar5 = &DAT_009796b8;
      puVar3 = (undefined1 *)0x10c8e1;
      goto LAB_00652c76;
    }
    if (iVar1 != 0x20) {
      if (iVar1 == 0x21) {
        if (param_3 != 0) {
          return 0;
        }
        puVar5 = &DAT_00979690;
        puVar3 = (undefined1 *)0x401640;
        goto LAB_00652c76;
      }
      if (iVar1 == 0x28) goto LAB_00652cad;
      if (iVar1 == 0x29) goto LAB_00652c98;
      if (iVar1 != 0x2a) {
        return 0;
      }
    }
    if (param_3 == 0) {
      puVar5 = &DAT_009796b4;
      puVar3 = (undefined1 *)0x124f81;
LAB_00652c76:
      iVar1 = FUN_00652e4f(param_1,puVar3,puVar5,param_5);
      return iVar1;
    }
  }
  return 0;
}


