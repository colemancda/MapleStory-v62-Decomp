/* FUN_00692df9 - 0x00692df9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00692df9(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  
  FUN_00879bb8();
  puStack_18 = (undefined4 *)0x692e10;
  bVar1 = FUN_0042452b();
  if (DAT_00979178 == 0) {
    uVar5 = 0;
    uStack_28 = 0;
  }
  else {
    puStack_18 = &DAT_0097bcc4;
    iStack_1c = 0x692e2e;
    iVar3 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))();
    uVar5 = -(uint)(iVar3 != 0) & DAT_00979178;
    uStack_28 = extraout_ECX;
  }
  if ((bVar1 != 0x14) && (bVar1 != 0x15)) {
    if (uVar5 == 0) goto LAB_00693058;
    if (*(int *)(uVar5 + 0xfc) == 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0x21000003;
      *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
      puStack_18 = (undefined4 *)&DAT_00903698;
      iStack_1c = unaff_EBP + 8;
      *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
      uStack_20 = 0x692e74;
      __CxxThrowException_8();
    }
    *(undefined4 *)(uVar5 + 0xfc) = 0;
  }
  if (bVar1 < 0x10) {
    if (bVar1 != 0xf) {
      if (bVar1 == 9) {
        iVar3 = *(int *)(uVar5 + 0xf8);
        if ((iVar3 < 1) || (5 < iVar3)) goto LAB_00693058;
        if (*(int *)(*(int *)(uVar5 + 0xac) + 0x3c) != iVar3) {
          puStack_18 = (undefined4 *)(iVar3 + -1);
          iStack_1c = 0x692eeb;
          FUN_004b2699();
        }
        iVar3 = *(int *)(*(int *)(uVar5 + 0xbc) + 0x38);
        puStack_18 = (undefined4 *)0x692efb;
        iVar4 = FUN_00693400();
        if (iVar4 < iVar3) {
          iStack_1c = 0x692f0d;
          puStack_18 = (undefined4 *)iVar4;
          FUN_004acfe9();
        }
        if (iVar3 + 4 < iVar4) {
          puStack_18 = (undefined4 *)(iVar4 + -4);
          iStack_1c = 0x692f23;
          FUN_004acfe9();
        }
        *(int *)(uVar5 + 0xec) = iVar4;
      }
      else {
        if (bVar1 == 10) {
          *(undefined4 **)(unaff_EBP + -0x10) = &uStack_28;
          uVar6 = 0x345;
          goto LAB_00693045;
        }
        if (bVar1 == 0xb) goto LAB_00692f42;
        if ((bVar1 != 0xc) && (bVar1 != 0xe)) goto LAB_00692f72;
      }
LAB_00692f2b:
      puStack_18 = *(undefined4 **)(unaff_EBP + 8);
      iStack_1c = 0x692f35;
      FUN_00690416();
      puStack_18 = (undefined4 *)0x0;
      iStack_1c = 0x692f3d;
      FUN_008161f1();
      goto LAB_00693058;
    }
LAB_00692f42:
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_28;
    uVar6 = 0x116;
  }
  else if (bVar1 == 0x10) {
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_28;
    uVar6 = 0x352;
  }
  else {
    if (bVar1 == 0x12) goto LAB_00692f2b;
    if (bVar1 == 0x15) {
      if (DAT_00979178 != 0) {
        *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
        *(undefined4 *)(unaff_EBP + -0x10) = 0x21000003;
        puStack_18 = (undefined4 *)&DAT_00903698;
        iStack_1c = unaff_EBP + -0x10;
        *(undefined4 *)(unaff_EBP + -4) = 1;
                    /* WARNING: Subroutine does not return */
        uStack_20 = 0x693002;
        __CxxThrowException_8();
      }
      puStack_18 = (undefined4 *)0x5f4;
      iStack_1c = 0x693011;
      iVar3 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x14) = iVar3;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if (iVar3 != 0) {
        puStack_18 = (undefined4 *)0x693022;
        FUN_00693067();
      }
      puStack_18 = *(undefined4 **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_1c = 0x693034;
      FUN_006903c7();
      goto LAB_00693058;
    }
    if (bVar1 == 0x16) {
      puStack_18 = (undefined4 *)0x692f86;
      cVar2 = FUN_0042452b();
      if (cVar2 != '\0') {
        puStack_18 = (undefined4 *)(unaff_EBP + 8);
        iStack_1c = 0x692f99;
        FUN_0045cdbc();
        puStack_18 = (undefined4 *)0x0;
        iStack_1c = 1;
        uStack_20 = 0;
        uStack_24 = 0;
        *(undefined4 **)(unaff_EBP + -0x14) = &uStack_28;
        *(undefined4 *)(unaff_EBP + -4) = 3;
        FUN_00450368(unaff_EBP + 8);
        FUN_007db3ad();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        puStack_18 = (undefined4 *)0x692fc4;
        FUN_00414ebb();
        goto LAB_00693058;
      }
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_28;
      uStack_28 = extraout_ECX_00;
    }
    else {
LAB_00692f72:
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_28;
    }
    uVar6 = 0x347;
  }
LAB_00693045:
  puStack_18 = (undefined4 *)0x0;
  iStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  FUN_00679d22(&uStack_28,uVar6);
  FUN_007db3ad();
LAB_00693058:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


