/* FUN_00532516 - 0x00532516 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00532516(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar4;
  int unaff_EBP;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  
  FUN_00879bb8();
  uStack_18 = unaff_EBP + -0x14;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_1c = 0x532538;
  FUN_0045b90e();
  uStack_18 = *(int *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar4 = 0;
  while( true ) {
    if (uStack_18 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(uStack_18 + -4);
    }
    if (iVar3 <= iVar4) break;
    cVar1 = *(char *)(iVar4 + uStack_18);
    if ((cVar1 < '0') || ('9' < cVar1)) {
      uStack_18 = 0;
      iStack_1c = 0;
      iStack_20 = unaff_EBP + 0x18;
      uStack_24 = 0;
      *(undefined4 **)(unaff_EBP + 0x10) = &uStack_28;
      uStack_28 = CONCAT31((int3)((uint)iVar3 >> 8),cVar1);
      FUN_00679d22(&uStack_28,0x31e);
      FUN_007db3ad();
      uStack_18 = -(uint)(*(int *)(unaff_EBP + 0xc) != 0) & *(int *)(unaff_EBP + 0xc) + 4U;
      iStack_1c = 0x5325a1;
      FUN_00817f6e();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        uStack_18 = *(int *)(unaff_EBP + -0x14) + -0xc;
        iStack_1c = 0x5325b5;
        FUN_00434e38();
      }
      uVar5 = 0;
LAB_005326cd:
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uStack_18 = 0x5326d8;
      FUN_0045e5c9();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uStack_18 = 0x5326e4;
      FUN_0045e621();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return uVar5;
    }
    iVar4 = iVar4 + 1;
  }
  iStack_1c = 0x5325c3;
  uVar6 = FUN_0087b6b6();
  iStack_1c = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_20 = 0x5325cf;
  iVar4 = FUN_0087b6ab();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if ((((int)((ulonglong)uVar6 >> 0x20) == 0) && (-1 < (int)uVar6)) &&
     ((*(int *)(unaff_EBP + 0x14) < 0 || (iVar4 <= *(int *)(unaff_EBP + 0x14))))) {
    if ((-1 < *(int *)(unaff_EBP + 0x10)) && (iVar4 < *(int *)(unaff_EBP + 0x10))) {
      uStack_18 = 799;
      iStack_1c = unaff_EBP + 0x14;
      iStack_20 = 0x532607;
      puVar2 = (undefined4 *)FUN_00679d22();
      iStack_1c = *puVar2;
      uStack_18 = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_20 = unaff_EBP + -0x10;
      uStack_24 = 0x53261a;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_18 = 0x532629;
      FUN_00414ebb();
      *(undefined4 **)(unaff_EBP + 0x10) = &uStack_28;
      uStack_28 = extraout_ECX;
      goto LAB_0053267f;
    }
    uVar5 = 1;
  }
  else {
    uStack_18 = 800;
    iStack_1c = unaff_EBP + 0x10;
    iStack_20 = 0x532650;
    puVar2 = (undefined4 *)FUN_00679d22();
    iStack_1c = *puVar2;
    uStack_18 = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_20 = unaff_EBP + -0x10;
    uStack_24 = 0x532663;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_18 = 0x532672;
    FUN_00414ebb();
    *(undefined4 **)(unaff_EBP + 0x10) = &uStack_28;
    uStack_28 = extraout_ECX_00;
LAB_0053267f:
    iStack_20 = unaff_EBP + 0x18;
    uStack_18 = 0;
    iStack_1c = 0;
    uStack_24 = 0;
    uVar7 = 0xffffffff;
    uVar5 = FUN_00449713(0xffffffff);
    FUN_0045f0f3(uVar5,uVar7);
    FUN_007db3ad();
    uVar5 = 0;
    uStack_18 = -(uint)(*(int *)(unaff_EBP + 0xc) != 0) & *(int *)(unaff_EBP + 0xc) + 4U;
    iStack_1c = 0x5326b5;
    FUN_00817f6e();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_18 = 0x5326c1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_18 = 0x5326cd;
  FUN_00414ebb();
  goto LAB_005326cd;
}


