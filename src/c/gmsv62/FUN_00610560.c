/* FUN_00610560 - 0x00610560 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00610560(void)

{
  char cVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int iVar3;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar4;
  int unaff_EBP;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  
  FUN_00879bb8();
  uStack_20 = unaff_EBP + -0x14;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_24 = 0x610583;
  FUN_0045b90e();
  uStack_20 = *(int *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = 0;
  while( true ) {
    if (uStack_20 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(uStack_20 + -4);
    }
    if (iVar3 <= iVar4) break;
    cVar1 = *(char *)(iVar4 + uStack_20);
    if ((cVar1 < '0') || ('9' < cVar1)) {
      uStack_20 = 0;
      iStack_24 = 0;
      iStack_28 = extraout_ECX + 0x6c;
      uStack_2c = 0;
      *(undefined4 **)(unaff_EBP + 0x10) = &uStack_30;
      uStack_30 = CONCAT31((int3)((uint)iVar3 >> 8),cVar1);
      FUN_00679d22(&uStack_30,0x31e);
      FUN_007db3ad();
      uStack_20 = -(uint)(*(int *)(unaff_EBP + 0xc) != 0) & *(int *)(unaff_EBP + 0xc) + 4U;
      iStack_24 = 0x6105ea;
      FUN_00817f6e();
      uVar5 = 0;
LAB_006106f7:
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uStack_20 = 0x610702;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uStack_20 = 0x61070e;
      FUN_0045e5c9();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return uVar5;
    }
    iVar4 = iVar4 + 1;
  }
  iStack_24 = 0x6105f7;
  uVar6 = FUN_0087b6b6();
  iStack_24 = *(undefined4 *)(unaff_EBP + -0x14);
  *(int *)(unaff_EBP + -0x1c) = (int)uVar6;
  iStack_28 = 0x610604;
  iVar4 = FUN_0087b6ab();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if ((((int)((ulonglong)uVar6 >> 0x20) == 0) && (-1 < *(int *)(unaff_EBP + -0x1c))) &&
     ((*(int *)(unaff_EBP + 0x14) < 0 || (iVar4 <= *(int *)(unaff_EBP + 0x14))))) {
    if ((-1 < *(int *)(unaff_EBP + 0x10)) && (iVar4 < *(int *)(unaff_EBP + 0x10))) {
      uStack_20 = 799;
      iStack_24 = unaff_EBP + 0x14;
      iStack_28 = 0x61063d;
      puVar2 = (undefined4 *)FUN_00679d22();
      iStack_24 = *puVar2;
      uStack_20 = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_28 = unaff_EBP + -0x10;
      uStack_2c = 0x610650;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_20 = 0x61065f;
      FUN_00414ebb();
      *(undefined4 **)(unaff_EBP + 0x10) = &uStack_30;
      uStack_30 = extraout_ECX_00;
      goto LAB_006106b5;
    }
    uVar5 = 1;
  }
  else {
    uStack_20 = 800;
    iStack_24 = unaff_EBP + 0x10;
    iStack_28 = 0x610686;
    puVar2 = (undefined4 *)FUN_00679d22();
    iStack_24 = *puVar2;
    uStack_20 = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_28 = unaff_EBP + -0x10;
    uStack_2c = 0x610699;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_20 = 0x6106a8;
    FUN_00414ebb();
    *(undefined4 **)(unaff_EBP + 0x10) = &uStack_30;
    uStack_30 = extraout_ECX_01;
LAB_006106b5:
    iStack_28 = extraout_ECX + 0x6c;
    uStack_20 = 0;
    iStack_24 = 0;
    uStack_2c = 0;
    uVar7 = 0xffffffff;
    uVar5 = FUN_00449713(0xffffffff);
    FUN_0045f0f3(uVar5,uVar7);
    FUN_007db3ad();
    uVar5 = 0;
    uStack_20 = -(uint)(*(int *)(unaff_EBP + 0xc) != 0) & *(int *)(unaff_EBP + 0xc) + 4U;
    iStack_24 = 0x6106eb;
    FUN_00817f6e();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_20 = 0x6106f7;
  FUN_00414ebb();
  goto LAB_006106f7;
}


