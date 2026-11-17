/* FUN_004856da - 0x004856da in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004856da(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 *puStack_74;
  
  FUN_00879bb8();
  puStack_74 = (undefined4 *)0x3;
  iStack_78 = 0;
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  iStack_7c = 0x4856fc;
  FUN_004031b7();
  iVar3 = *(int *)(extraout_ECX + 1000);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    puStack_74 = (undefined4 *)0x80004003;
    iStack_78 = 0x485714;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x30);
  iStack_78 = unaff_EBP + -0x18;
  iStack_7c = 0x485723;
  FUN_00425067();
  puStack_74 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_78 = 0x485730;
  puStack_74 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_74 < 0) {
    iStack_78 = 0x48573b;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_74 = (undefined4 *)0xc00;
  iStack_78 = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_7c = 0x485755;
  puVar1 = (undefined4 *)FUN_00679d22();
  iStack_78 = *puVar1;
  puStack_74 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_7c = unaff_EBP + -0x10;
  uStack_80 = 0x485768;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    puStack_74 = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
    iStack_78 = 0x48577f;
    FUN_00434e38();
  }
  puStack_74 = &DAT_00980690;
  iStack_78 = 0x48578e;
  FUN_00403191();
  puStack_74 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_78 = 0x48579b;
  FUN_00403191();
  puStack_74 = (undefined4 *)0x0;
  iStack_78 = 0;
  iStack_7c = 0xffffffff;
  uStack_80 = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_84 = 0;
  uStack_88 = 0;
  iStack_8c = 0x4857ae;
  (*DAT_0097b4c8)();
  iStack_8c = 0x4857bb;
  FUN_0087a1b0();
  iStack_8c = 0;
  uStack_90 = 0;
  iStack_94 = unaff_EBP + -0x50;
  iStack_98 = unaff_EBP + -0x40;
  uStack_9c = 0xffffffff;
  uVar2 = FUN_00449713(&uStack_88);
  uVar2 = FUN_00456ad5(uVar2);
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_9c;
  FUN_004033a1(uVar2);
  iVar3 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_94 = 0x48580b;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + 8) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar3 != 0) {
    iStack_8c = unaff_EBP + 8;
    uStack_90 = 0x485821;
    iStack_8c = FUN_0041a581();
    if ((iStack_8c < 0) && (iStack_8c != -0x7fffbffe)) {
      uStack_90 = 0x485832;
      FUN_00878dfb();
    }
  }
  iStack_8c = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_90 = 0x48583f;
  iStack_8c = FUN_00402bc3();
  if (iStack_8c < 0) {
    uStack_90 = 0x48584a;
    FUN_00878dfb();
  }
  iStack_8c = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_90 = 0x485857;
  iStack_8c = FUN_00402bc3();
  if (iStack_8c < 0) {
    uStack_90 = 0x485862;
    FUN_00878dfb();
  }
  iStack_8c = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_90 = 0x48586f;
  iStack_8c = FUN_00402bc3();
  if (iStack_8c < 0) {
    uStack_90 = 0x48587a;
    FUN_00878dfb();
  }
  iStack_8c = 3;
  uStack_90 = 0xff;
  iStack_94 = 0x485889;
  FUN_004031b7();
  piVar4 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar4 == (int *)0x0) {
    iStack_8c = 0x80004003;
    uStack_90 = 0x48589a;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x18);
  }
  iVar3 = *piVar4;
  uStack_9c = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_98 = *(undefined4 *)(unaff_EBP + -0x60);
  iStack_94 = *(undefined4 *)(unaff_EBP + -0x5c);
  uStack_90 = *(undefined4 *)(unaff_EBP + -0x58);
  *(int **)(unaff_EBP + -0x1c) = piVar4;
  iStack_8c = *(undefined4 *)(unaff_EBP + -0x54);
  iVar3 = (**(code **)(iVar3 + 0x80))(piVar4,0,0);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_008161f1(0);
  piVar4 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  piVar4 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


