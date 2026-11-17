/* FUN_008498d1 - 0x008498d1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008498d1(void)

{
  int iVar1;
  int extraout_ECX;
  uint uVar2;
  int unaff_EBP;
  int *piVar3;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 1) {
    piVar3 = (int *)(extraout_ECX + 0x3228);
    for (uVar2 = 0; (iVar1 = *piVar3, iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)));
        uVar2 = uVar2 + 1) {
      iVar1 = *(int *)(iVar1 + 4 + uVar2 * 8);
      if ((*(int *)(iVar1 + 0xbc) == 1) && (*(int *)(iVar1 + 200) == *(int *)(unaff_EBP + 0xc))) {
        FUN_00815de9();
        FUN_0084f0cb(uVar2 * 8 + *piVar3);
        for (; (*piVar3 != 0 && (uVar2 < *(uint *)(*piVar3 + -4))); uVar2 = uVar2 + 1) {
          FUN_004deebf();
        }
        break;
      }
    }
  }
  else if (iVar1 == 6) {
    piVar3 = (int *)(extraout_ECX + 0x3228);
    for (uVar2 = 0; (iVar1 = *piVar3, iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)));
        uVar2 = uVar2 + 1) {
      iVar1 = *(int *)(iVar1 + 4 + uVar2 * 8);
      if ((*(int *)(iVar1 + 0xbc) == 6) &&
         (*(short *)(iVar1 + 0xe0) == *(short *)(unaff_EBP + 0x10))) {
        FUN_00815de9();
        FUN_0084f0cb(uVar2 * 8 + *piVar3);
        for (; (*piVar3 != 0 && (uVar2 < *(uint *)(*piVar3 + -4))); uVar2 = uVar2 + 1) {
          FUN_004deebf();
        }
        break;
      }
    }
  }
  else if (iVar1 != 9) {
    piVar3 = (int *)(extraout_ECX + 0x3228);
    for (uVar2 = 0; (iVar1 = *piVar3, iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)));
        uVar2 = uVar2 + 1) {
      if (*(int *)(unaff_EBP + 8) == *(int *)(*(int *)(iVar1 + 4 + uVar2 * 8) + 0xbc)) {
        FUN_00815de9();
        FUN_0084f0cb(uVar2 * 8 + *piVar3);
        for (; (*piVar3 != 0 && (uVar2 < *(uint *)(*piVar3 + -4))); uVar2 = uVar2 + 1) {
          FUN_004deebf();
        }
        break;
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


