/* FUN_006c45e4 - 0x006c45e4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c45e4(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int *piStack_1c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 2000) {
    if (extraout_ECX[0x23] == 0) {
      piStack_1c = (int *)0x0;
      iStack_20 = 0;
      iStack_24 = 0;
      uStack_28 = 0;
      *(undefined1 **)(unaff_EBP + 8) = auStack_2c;
      FUN_00679d22(auStack_2c,0xd14);
      FUN_007db3ad();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        piStack_1c = (int *)(*(int *)(unaff_EBP + -0x10) + -0xc);
        iStack_20 = 0x6c4671;
        FUN_00434e38();
      }
      goto LAB_006c47a5;
    }
    piStack_1c = (int *)0x6c4685;
    piStack_1c = (int *)FUN_0045e2eb();
    iStack_20 = unaff_EBP + -0x18;
    iStack_24 = 0x6c4691;
    uVar1 = FUN_0045a1d8();
    *(undefined4 *)(unaff_EBP + 8) = uVar1;
    piStack_1c = (int *)0xd16;
    iStack_20 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_24 = 0x6c46ad;
    puVar2 = (undefined4 *)FUN_00679d22();
    piStack_1c = (int *)**(undefined4 **)(unaff_EBP + 8);
    iStack_20 = *puVar2;
    iStack_24 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_28 = 0x6c46c2;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_1c = (int *)0x6c46d1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_1c = (int *)0x6c46dc;
    FUN_00414ebb();
    piStack_1c = (int *)0x0;
    iStack_20 = 0;
    iStack_24 = 0;
    uStack_28 = 0;
    *(undefined1 **)(unaff_EBP + 8) = auStack_2c;
    FUN_00450368(unaff_EBP + -0x10);
    iVar3 = FUN_007db791();
    if (iVar3 == 6) {
      piStack_1c = (int *)extraout_ECX[0x15e];
      iStack_20 = 0x6c4711;
      FUN_00457d37();
      piStack_1c = (int *)extraout_ECX[0x15f];
      iStack_20 = 0x6c4722;
      FUN_00457d37();
      piStack_1c = (int *)0x0;
      iStack_20 = 500;
      iStack_24 = 0x6c4733;
      iVar3 = FUN_004becbc();
      if (iVar3 != 0) {
        piStack_1c = (int *)0x6c475d;
        piStack_1c = (int *)FUN_007d1e08();
        iStack_20 = 0x6c476b;
        FUN_00457d37();
        iStack_20 = 0x6c4777;
        piStack_1c = extraout_ECX + 0x160;
        FUN_004751b2();
        iVar3 = DAT_00978368;
        *(undefined4 *)(DAT_00978368 + 0x208c) = 1;
        piStack_1c = (int *)0x6c478b;
        uVar1 = FUN_007d1e08();
        *(undefined4 *)(iVar3 + 0x2090) = uVar1;
        iVar3 = *extraout_ECX;
        piStack_1c = (int *)0x1;
        goto LAB_006c4794;
      }
      piStack_1c = (int *)0x0;
      iStack_20 = 0;
      iStack_24 = 0;
      uStack_28 = 0;
      *(undefined1 **)(unaff_EBP + 8) = auStack_2c;
      FUN_00679d22(auStack_2c,0x137);
      FUN_007db3ad();
    }
  }
  else {
    if (*(int *)(unaff_EBP + 8) == 0x7d1) {
LAB_006c4624:
      iVar3 = *extraout_ECX;
      piStack_1c = (int *)0x2;
    }
    else {
      if (*(int *)(unaff_EBP + 8) != 1) {
        if (*(int *)(unaff_EBP + 8) != 2) goto LAB_006c4799;
        goto LAB_006c4624;
      }
      iVar3 = *extraout_ECX;
      piStack_1c = (int *)0x1;
    }
LAB_006c4794:
    iStack_20 = 0x6c4799;
    (**(code **)(iVar3 + 0x34))();
  }
LAB_006c4799:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_1c = (int *)0x6c47a5;
  FUN_00414ebb();
LAB_006c47a5:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


