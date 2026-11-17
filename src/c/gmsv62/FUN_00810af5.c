/* FUN_00810af5 - 0x00810af5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00810af5(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 == 9) {
    if (DAT_00979178 != 0) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0x21000003;
      *(undefined4 *)(unaff_EBP + -0x14) = 0x21000003;
      puStack_18 = (undefined4 *)&DAT_00903698;
      iStack_1c = unaff_EBP + -0x14;
      *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
      uStack_20 = 0x810c9b;
      __CxxThrowException_8();
    }
    puStack_18 = (undefined4 *)0x5d4;
    iStack_1c = 0x810caa;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x18) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar1 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      puStack_18 = (undefined4 *)0x810cbf;
      piVar3 = (int *)FUN_00810cdf();
    }
    puStack_18 = *(undefined4 **)(unaff_EBP + 0xc);
    iVar1 = *piVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_1c = 0x810cd1;
    (**(code **)(iVar1 + 0x3c))();
  }
  else if (iVar1 == 0xb) {
    if (DAT_00979178 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      puStack_18 = &DAT_0097c218;
      iStack_1c = 0x810bdf;
      iVar1 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))();
      piVar3 = (int *)(-(uint)(iVar1 != 0) & DAT_00979178);
    }
    if (piVar3 != (int *)0x0) {
      if (piVar3[0x35] == 0) {
        *(undefined4 *)(unaff_EBP + 0xc) = 0x21000003;
        *(undefined4 *)(unaff_EBP + -0x10) = 0x21000003;
        puStack_18 = (undefined4 *)&DAT_00903698;
        iStack_1c = unaff_EBP + -0x10;
        *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
        uStack_20 = 0x810c1f;
        __CxxThrowException_8();
      }
      puStack_18 = *(undefined4 **)(unaff_EBP + 0xc);
      piVar3[0x35] = 0;
      iStack_1c = 0x810c2f;
      FUN_008101df();
      puStack_18 = *(undefined4 **)(unaff_EBP + 0xc);
      iStack_1c = 0x810c39;
      FUN_0080f468();
      puStack_18 = (undefined4 *)0x810c40;
      (**(code **)(*piVar3 + 0x40))();
      puStack_18 = (undefined4 *)0x0;
      iStack_1c = 0x810c48;
      FUN_008161f1();
      puStack_18 = (undefined4 *)0x0;
      iStack_1c = 0;
      uStack_20 = 0;
      uStack_24 = 0;
      *(undefined1 **)(unaff_EBP + 0xc) = auStack_28;
      FUN_00679d22(auStack_28,0x1060);
      FUN_007db3ad();
      puStack_18 = (undefined4 *)0x1;
      iStack_1c = 0x810c73;
      (**(code **)(*piVar3 + 0x34))();
    }
  }
  else {
    if (iVar1 == 0xc) {
      *(undefined1 **)(unaff_EBP + 0xc) = auStack_28;
      uVar4 = 0x1030;
    }
    else {
      if ((iVar1 < 0xd) || (0xe < iVar1)) goto LAB_00810cd1;
      if (DAT_00979178 == 0) {
        uVar2 = 0;
      }
      else {
        puStack_18 = &DAT_0097c218;
        iStack_1c = 0x810b49;
        iVar1 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))();
        uVar2 = -(uint)(iVar1 != 0) & DAT_00979178;
      }
      if (uVar2 == 0) goto LAB_00810cd1;
      if (*(int *)(uVar2 + 0xd4) == 0) {
        *(undefined4 *)(unaff_EBP + 0xc) = 0x21000003;
        *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
        puStack_18 = (undefined4 *)&DAT_00903698;
        iStack_1c = unaff_EBP + 8;
        *(undefined4 *)(unaff_EBP + -4) = 3;
                    /* WARNING: Subroutine does not return */
        uStack_20 = 0x810b87;
        __CxxThrowException_8();
      }
      *(undefined4 *)(uVar2 + 0xd4) = 0;
      *(undefined1 **)(unaff_EBP + 0xc) = auStack_28;
      uVar4 = 0x1061;
    }
    puStack_18 = (undefined4 *)0x0;
    iStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    FUN_00679d22(auStack_28,uVar4);
    FUN_007db3ad();
  }
LAB_00810cd1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


