/* FUN_006c13da - 0x006c13da in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c13da(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 uVar5;
  undefined1 *puStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_00879bb8();
  if ((*(uint *)(DAT_00978358 + 0x52c) & 0xfffffffe) == 0x12) {
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_38;
    uVar5 = 0x49;
LAB_006c1446:
    iStack_28 = 0;
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_34 = 0;
    FUN_00679d22(&puStack_38,uVar5);
    FUN_007db3ad();
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = DAT_00978368;
    iStack_28 = 0x6c1423;
    bVar1 = FUN_0045e4b8();
    if ((bVar1 & 1) != 0) {
      iStack_28 = 0x6c1431;
      uVar2 = FUN_0045e4b8();
      if ((uVar2 & 0x10) != 0) {
        *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_38;
        uVar5 = 0x2f4;
        goto LAB_006c1446;
      }
    }
    iStack_28 = unaff_EBP + -0x24;
    iStack_2c = 0x6c1469;
    iVar3 = FUN_00455c59();
    iVar3 = *(int *)(iVar3 + 4);
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      iStack_28 = 0;
      iStack_2c = 0x6c147c;
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    iStack_28 = 0x69c;
    iStack_2c = 0x6c148e;
    iVar4 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iStack_28 = 0x6c149f;
      iVar4 = FUN_007e62e9();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar2 = -(uint)(iVar4 != 0) & iVar4 + 8U;
    *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar2 != 0) & uVar2 - 8;
    iStack_28 = 0x6c14c6;
    FUN_004c26c4();
    iStack_28 = 0;
    iStack_2c = 1;
    puStack_38 = (undefined1 *)&uStack_30;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_30;
    iStack_34 = 0x2f5;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00679d22();
    iStack_34 = 0;
    puStack_38 = (undefined1 *)0x2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004c2677();
    FUN_007eddac();
    iStack_28 = *(undefined4 *)(iVar3 + 0xad);
    iStack_2c = iVar3 + 0xa5;
    uStack_30 = 0x6c1508;
    iStack_34 = FUN_00413367();
    if (49999 < iStack_34) {
      iStack_34 = 50000;
    }
    iStack_28 = 0;
    iStack_2c = 10;
    uStack_30 = 0;
    puStack_38 = (undefined1 *)0xa;
    FUN_007edf4a(10);
    iStack_28 = 0x6c152e;
    FUN_007e6e3c();
    iStack_28 = 0x6c1536;
    iVar3 = FUN_004bc6a2();
    if (iVar3 == 1) {
      iStack_28 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0xbc);
      iStack_2c = 0x6c154b;
      FUN_00848f76();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_28 = 0x6c1557;
    FUN_004c26e1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


