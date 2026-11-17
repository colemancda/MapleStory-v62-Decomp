/* FUN_00648e59 - 0x00648e59 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00648e59(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 0xee) {
    if (DAT_00979178 != 0) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0x21000003;
      *(undefined4 *)(unaff_EBP + -0x10) = 0x21000003;
      puStack_18 = (undefined4 *)&DAT_00903698;
      iStack_1c = unaff_EBP + -0x10;
      *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
      uStack_20 = 0x64908b;
      __CxxThrowException_8();
    }
    puStack_18 = (undefined4 *)0x5f4;
    iStack_1c = 0x64909a;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar3;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar3 != 0) {
      puStack_18 = (undefined4 *)0x6490af;
      FUN_006490d0();
    }
    puStack_18 = *(undefined4 **)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_1c = 0x6490c1;
    FUN_006453f5();
    goto LAB_006490c1;
  }
  if (*(int *)(unaff_EBP + 8) != 0xef) goto LAB_006490c1;
  if (DAT_00979178 == 0) {
    uVar5 = 0;
  }
  else {
    puStack_18 = &DAT_00979600;
    iStack_1c = 0x648e95;
    iVar3 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))();
    uVar5 = -(uint)(iVar3 != 0) & DAT_00979178;
  }
  if (uVar5 == 0) goto LAB_006490c1;
  if (*(int *)(uVar5 + 0xec) == 0) {
    *(undefined4 *)(unaff_EBP + 0xc) = 0x21000003;
    *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
    puStack_18 = (undefined4 *)&DAT_00903698;
    iStack_1c = unaff_EBP + 8;
    *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
    uStack_20 = 0x648ed5;
    __CxxThrowException_8();
  }
  *(undefined4 *)(uVar5 + 0xec) = 0;
  puStack_18 = (undefined4 *)0x648ee3;
  bVar1 = FUN_0042452b();
  if (bVar1 < 6) {
    if (bVar1 != 5) {
      if (bVar1 == 0) {
        iVar3 = *(int *)(uVar5 + 0xe8);
        if ((0 < iVar3) && (iVar3 < 6)) {
          puStack_18 = (undefined4 *)(iVar3 + -1);
          if ((undefined4 *)*(int *)(*(int *)(uVar5 + 0x9c) + 0x3c) != puStack_18) {
            iStack_1c = 0x648f53;
            FUN_004b2699();
          }
          iVar3 = *(int *)(*(int *)(uVar5 + 0xb0) + 0x38);
          puStack_18 = (undefined4 *)0x648f63;
          iVar4 = FUN_00649479();
          if (iVar4 < iVar3) {
            iStack_1c = 0x648f75;
            puStack_18 = (undefined4 *)iVar4;
            FUN_004acfe9();
          }
          if (iVar3 + 4 < iVar4) {
            puStack_18 = (undefined4 *)(iVar4 + -4);
            iStack_1c = 0x648f8b;
            FUN_004acfe9();
          }
          *(int *)(uVar5 + 0xe4) = iVar4;
        }
        goto LAB_006490c1;
      }
      if (bVar1 != 1) {
        if (bVar1 == 2) goto LAB_00649030;
        if (bVar1 != 3) {
          if (bVar1 == 4) goto LAB_006490c1;
LAB_00648fb7:
          *(undefined1 **)(unaff_EBP + -0x14) = auStack_28;
          goto LAB_00648fc1;
        }
        *(undefined1 **)(unaff_EBP + -0x14) = auStack_28;
        uVar6 = 0x345;
        goto LAB_0064903f;
      }
    }
LAB_00649054:
    *(undefined1 **)(unaff_EBP + -0x14) = auStack_28;
    uVar6 = 0x344;
  }
  else {
    if (bVar1 == 8) goto LAB_006490c1;
    if (bVar1 == 9) goto LAB_00649054;
    if (bVar1 == 10) {
LAB_00649030:
      *(undefined1 **)(unaff_EBP + -0x14) = auStack_28;
      uVar6 = 0x116;
    }
    else if (bVar1 == 0xd) {
      *(undefined1 **)(unaff_EBP + -0x14) = auStack_28;
      uVar6 = 0xf43;
    }
    else {
      if (bVar1 != 0xe) goto LAB_00648fb7;
      puStack_18 = (undefined4 *)0x648fd0;
      cVar2 = FUN_0042452b();
      if (cVar2 != '\0') {
        puStack_18 = (undefined4 *)(unaff_EBP + 0xc);
        iStack_1c = 0x648fe3;
        FUN_0045cdbc();
        puStack_18 = (undefined4 *)0x0;
        iStack_1c = 1;
        uStack_20 = 0;
        uStack_24 = 0;
        *(undefined1 **)(unaff_EBP + -0x14) = auStack_28;
        *(undefined4 *)(unaff_EBP + -4) = 3;
        FUN_00450368(unaff_EBP + 0xc);
        FUN_007db3ad();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        puStack_18 = (undefined4 *)0x64900e;
        FUN_00414ebb();
        goto LAB_006490c1;
      }
      *(undefined1 **)(unaff_EBP + -0x14) = auStack_28;
LAB_00648fc1:
      uVar6 = 0x347;
    }
  }
LAB_0064903f:
  puStack_18 = (undefined4 *)0x0;
  iStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  FUN_00679d22(auStack_28,uVar6);
  FUN_007db3ad();
LAB_006490c1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


