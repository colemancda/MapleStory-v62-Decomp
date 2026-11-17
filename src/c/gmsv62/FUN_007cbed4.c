/* FUN_007cbed4 - 0x007cbed4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007cbed4(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  undefined4 extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  undefined4 extraout_ECX_10;
  int unaff_EBP;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uStack_3c;
  int iStack_38;
  code *pcStack_34;
  int iStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0xd74);
  uStack_24 = 0x7cbefc;
  iVar1 = FUN_007f1573();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (iVar1 == -1) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  uStack_28 = *(undefined4 *)((-(uint)(iVar3 != 0) & iVar3 - 0xcU) + 0x140);
  uStack_24 = 0;
  puStack_2c = (undefined *)0x7cbf1a;
  (**(code **)(*(int *)(extraout_ECX + 0x78) + 0xc))();
  iVar3 = extraout_ECX_00;
  if ((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) {
    puStack_2c = (undefined *)0xc00614a4;
    *(int **)(unaff_EBP + -0x18) = &iStack_30;
    pcStack_34 = (code *)0x0;
    iStack_38 = 0x7cbf38;
    FUN_00424e0a();
    pcStack_34 = (code *)0x0;
    iStack_38 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_3c;
    uStack_3c = extraout_ECX_01;
    FUN_00486ada(&uStack_3c);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00679d86(unaff_EBP + -0x14,0x866);
    uVar5 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uVar2 = FUN_00411641(0);
    FUN_00424e82(uVar2);
    FUN_0042b613(uVar2,uVar5);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_2c = (undefined *)0x7cbf87;
    FUN_00402676();
    puStack_2c = (undefined *)0x1;
    iStack_30 = 1;
    pcStack_34 = (code *)0x7cbf92;
    FUN_007959eb();
    iVar3 = extraout_ECX_02;
  }
  if ((*(byte *)(unaff_EBP + -0x10) & 0x40) != 0) {
    puStack_2c = (undefined *)0xc00614a4;
    *(int **)(unaff_EBP + -0x1c) = &iStack_30;
    pcStack_34 = (code *)0x0;
    iStack_38 = 0x7cbfa6;
    iStack_30 = iVar3;
    FUN_00424e0a();
    iVar3 = *(int *)(extraout_ECX + 4);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    pcStack_34 = (code *)0x7cbfb6;
    iVar3 = (**(code **)(iVar3 + 0x10))();
    pcStack_34 = *(code **)(iVar3 + 4);
    iStack_38 = 0x7cbfc2;
    piVar4 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    iStack_38 = *piVar4;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_3c;
    uStack_3c = extraout_ECX_03;
    FUN_00424dd7(0);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00679d86(unaff_EBP + -0x14,0xa6f);
    uVar5 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    uVar2 = FUN_00411641(0);
    FUN_00424e82(uVar2);
    FUN_0042b613(uVar2,uVar5);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_2c = (undefined *)0x7cc00b;
    FUN_00402676();
    iVar3 = extraout_ECX_04;
  }
  if ((*(byte *)(unaff_EBP + -0xf) & 0x20) != 0) {
    puStack_2c = (undefined *)0x4f5c6e;
    iStack_30 = 0x7cc025;
    iVar1 = FUN_0064d61f();
    *(int *)(unaff_EBP + -0x14) = iVar1;
    iVar3 = extraout_ECX_05;
    if (iVar1 != 0) {
      puStack_2c = (undefined *)0xc00614a4;
      *(int **)(unaff_EBP + -0x1c) = &iStack_30;
      pcStack_34 = (code *)0x0;
      iStack_38 = 0x7cc03a;
      iStack_30 = extraout_ECX_05;
      FUN_00424e0a();
      iVar3 = *(int *)(extraout_ECX + 4);
      *(undefined4 *)(unaff_EBP + -4) = 8;
      pcStack_34 = (code *)0x7cc04a;
      iVar3 = (**(code **)(iVar3 + 0x10))();
      pcStack_34 = *(code **)(iVar3 + 4);
      iStack_38 = 0x7cc056;
      piVar4 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      iStack_38 = *piVar4;
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_3c;
      uStack_3c = extraout_ECX_06;
      FUN_00424dd7(0);
      uVar2 = FUN_00790038(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iVar3 = FUN_0043f900();
      uVar6 = (uint)(iVar3 == 0);
      uVar2 = FUN_004091f9(uVar6);
      FUN_00424e82(uVar2);
      FUN_0042b613(uVar2,uVar6);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar3 = 0;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        puStack_2c = (undefined *)0x7cc0ab;
        FUN_004030b1();
        iVar3 = extraout_ECX_07;
      }
    }
  }
  if ((*(byte *)(unaff_EBP + -0xf) & 8) != 0) {
    puStack_2c = *(undefined **)(extraout_ECX + 0x27c8);
    iStack_30 = 0x7cc0be;
    FUN_0079864f();
    iVar3 = extraout_ECX_08;
  }
  if ((*(byte *)(unaff_EBP + -0x10) & 0x80) != 0) {
    puStack_2c = (undefined *)0xc00614a4;
    *(int **)(unaff_EBP + -0x20) = &iStack_30;
    pcStack_34 = (code *)0x0;
    iStack_38 = 0x7cc0d6;
    iStack_30 = iVar3;
    FUN_00424e0a();
    iVar3 = *(int *)(extraout_ECX + 4);
    *(undefined4 *)(unaff_EBP + -4) = 0xc;
    pcStack_34 = (code *)0x7cc0e6;
    iVar3 = (**(code **)(iVar3 + 0x10))();
    pcStack_34 = *(code **)(iVar3 + 4);
    iStack_38 = 0x7cc0f2;
    piVar4 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    iStack_38 = *piVar4;
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_3c;
    FUN_00424dd7(0);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    uVar2 = FUN_00679d86(unaff_EBP + -0x14,0xab9);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iVar3 = FUN_0043f900();
    uVar6 = (uint)(iVar3 == 0);
    uVar2 = FUN_00411641(uVar6);
    FUN_00424e82(uVar2);
    FUN_0042b613(uVar2,uVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_2c = (undefined *)0x7cc14b;
    FUN_00402676();
    puStack_2c = (undefined *)0xc00614a4;
    iStack_30 = 0x7fffffff;
    pcStack_34 = (code *)0x3e8;
    *(int **)(unaff_EBP + -0x20) = &iStack_38;
    uStack_3c = 0;
    iStack_38 = extraout_ECX_09;
    FUN_00424e0a();
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_3c;
    *(undefined4 *)(unaff_EBP + -4) = 0x10;
    uStack_3c = extraout_ECX_10;
    FUN_00486ada(&uStack_3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_00679d86(unaff_EBP + -0x18,0xaba);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iVar3 = FUN_0043f900();
    uVar6 = (uint)(iVar3 == 0);
    uVar2 = FUN_00411641(uVar6);
    FUN_00424e82(uVar2);
    FUN_0042d941(uVar2,uVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_2c = (undefined *)0x7cc1c0;
    FUN_00402676();
  }
  if ((*(byte *)(unaff_EBP + -0xf) & 1) != 0) {
    puStack_2c = (undefined *)0x0;
    iStack_30 = 500;
    pcStack_34 = (code *)0x406849;
    iStack_38 = 0x7cc1dd;
    pcStack_34 = (code *)FUN_0064d61f();
    iStack_38 = 0x7cc1e5;
    FUN_0079316f();
  }
  if (*(int *)(extraout_ECX + 0x27d8) != 0) {
    puStack_2c = *(undefined **)(extraout_ECX + 0x27cc);
    iStack_30 = 0x7cc1ff;
    iVar3 = FUN_0064d61f();
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0x21000003;
      *(undefined4 *)(unaff_EBP + -0x10) = 0x21000003;
      puStack_2c = &DAT_00903698;
      iStack_30 = unaff_EBP + -0x10;
      *(undefined4 *)(unaff_EBP + -4) = 0x14;
                    /* WARNING: Subroutine does not return */
      pcStack_34 = FUN_007cc26b;
      __CxxThrowException_8();
    }
    puStack_2c = (undefined *)0x7cc20c;
    FUN_00650e14();
    puStack_2c = (undefined *)0x7cc211;
    iVar1 = FUN_007d1e08();
    if (iVar1 - *(int *)(extraout_ECX + 0x27dc) == *(int *)(iVar3 + 0x20)) {
      *(undefined4 *)(extraout_ECX + 0x27d8) = 0;
      puStack_2c = (undefined *)0x0;
      iStack_30 = 1;
      pcStack_34 = *(code **)(extraout_ECX + 0x27d4);
      uStack_3c = 0x7cc235;
      iStack_38 = iVar3;
      FUN_0079305e();
    }
  }
  puStack_2c = (undefined *)0x7cc23c;
  FUN_0078ded5();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


