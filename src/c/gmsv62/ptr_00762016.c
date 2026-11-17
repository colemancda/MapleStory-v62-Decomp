/* ptr_00762016 - 0x00762016 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_00762016(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 < 0x7d6) {
    if (param_2 == 0x7d5) {
      uVar2 = 0;
LAB_007620fe:
      FUN_00849000(*(undefined4 *)(param_1 + 0x620),uVar2);
      return;
    }
    if (param_2 == 1000) {
      FUN_008324e4(10);
      return;
    }
    if (param_2 == 2000) {
      if (*(int *)(param_1 + 0x5e4) == 0) {
        uVar2 = 1;
        goto LAB_007620e6;
      }
    }
    else {
      if (param_2 != 0x7d1) {
        if (param_2 == 0x7d2) {
          if (*(int *)(DAT_00978368 + 0x2b40) == 0) {
            return;
          }
          if (*(int *)(DAT_00978368 + 0x2bf2) != *(int *)(DAT_00978368 + 0x2088)) {
            return;
          }
          iVar1 = FUN_00429303();
          if (iVar1 == 0) {
            return;
          }
          param_1 = param_1 + 0x620;
          FUN_00429303(param_1);
          FUN_004e9ed9(param_1);
          return;
        }
        if (param_2 == 0x7d3) {
          iVar1 = FUN_00429303();
          if (iVar1 == 0) {
            return;
          }
          param_1 = param_1 + 0x620;
          FUN_00429303(param_1);
          FUN_004e9b8c(param_1);
          return;
        }
        if (param_2 != 0x7d4) {
LAB_0076216b:
          FUN_0078a282(param_2);
          return;
        }
        uVar2 = 1;
        goto LAB_007620fe;
      }
      if (*(int *)(param_1 + 0x5ec) == 0) {
        uVar2 = 2;
        goto LAB_007620e6;
      }
    }
    uVar2 = 0;
LAB_007620e6:
    FUN_007632b1(uVar2);
    return;
  }
  if (param_2 == 0x7d6) {
LAB_0076215d:
    uVar2 = 1;
  }
  else {
    if (param_2 == 0x7d7) {
      if (*(int *)(param_1 + 0xba8) != 0) {
        FUN_0076309d();
      }
    }
    else {
      if (param_2 == 0x7d8) {
        uVar2 = 2;
        goto LAB_0076215f;
      }
      if (param_2 != 0x7d9) {
        if (param_2 == 0x7da) {
          FUN_0076309d();
          return;
        }
        if ((param_2 < 0x7db) || (0x7dd < param_2)) goto LAB_0076216b;
        *(uint *)(param_1 + 0x63c) = param_2 - 0x7db;
        if ((*(int *)(param_1 + 0x5f4) != 0) &&
           (*(int *)(*(int *)(param_1 + 0x5f4) + 0x9c) != param_2 - 0x7db)) {
          FUN_0076309d();
        }
        goto LAB_0076215d;
      }
    }
    uVar2 = 0;
  }
LAB_0076215f:
  FUN_007621bc(uVar2);
  return;
}


