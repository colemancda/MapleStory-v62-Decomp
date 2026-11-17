/* FUN_0057e278 - 0x0057e278 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0057e278(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int *piStack_98;
  int *piStack_94;
  undefined4 uStack_90;
  char *pcStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 *puStack_78;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  cVar1 = *(char *)(extraout_ECX + 0x144);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (cVar1 == '\0') {
    puStack_78 = (undefined4 *)0x3a0;
    iStack_7c = unaff_EBP + -0x24;
    iStack_80 = 0x57e2b4;
    puStack_78 = (undefined4 *)FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    puStack_78 = (undefined4 *)0x3a1;
    iStack_7c = unaff_EBP + -0x20;
    iStack_80 = 0x57e2d4;
    puStack_78 = (undefined4 *)FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 2;
  }
  iStack_7c = 0x57e2e3;
  FUN_00414f8b();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      puStack_78 = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + -0xc);
      iStack_7c = 0x57e303;
      FUN_00434e38();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) && (*(int *)(unaff_EBP + -0x24) != 0)) {
    puStack_78 = (undefined4 *)(*(int *)(unaff_EBP + -0x24) + -0xc);
    iStack_7c = 0x57e31d;
    FUN_00434e38();
  }
  puStack_78 = (undefined4 *)(unaff_EBP + -0x14);
  iStack_7c = 0x57e329;
  FUN_00448dc6();
  puStack_78 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_7c = 0x57e33b;
  FUN_00403191();
  puStack_78 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_7c = 0x57e348;
  FUN_00403191();
  puStack_78 = (undefined4 *)0x0;
  iStack_7c = 0;
  iStack_80 = unaff_EBP + -0x44;
  iStack_84 = unaff_EBP + -0x34;
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_88;
  pcStack_8c = s_UI_StatusBar_img_base_chatTarget_00965834;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_90 = 0x57e366;
  FUN_00448a17();
  pcStack_8c = (char *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_90 = 0x57e373;
  FUN_00405a1d();
  uStack_90 = 0x57e37a;
  FUN_00402660();
  uStack_90 = 0x57e381;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_80 = 0x57e38c;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    puStack_78 = (undefined4 *)(unaff_EBP + -0x24);
    iStack_7c = 0x57e3a2;
    puStack_78 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_78 < 0) && (puStack_78 != (undefined4 *)0x80004002)) {
      iStack_7c = 0x57e3b3;
      FUN_00878dfb();
    }
  }
  puStack_78 = (undefined4 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_7c = 0x57e3c0;
  puStack_78 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_78 < 0) {
    iStack_7c = 0x57e3cb;
    FUN_00878dfb();
  }
  puStack_78 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_7c = 0x57e3d8;
  puStack_78 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_78 < 0) {
    iStack_7c = 0x57e3e3;
    FUN_00878dfb();
  }
  puStack_78 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_7c = 0x57e3f0;
  puStack_78 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_78 < 0) {
    iStack_7c = 0x57e3fb;
    FUN_00878dfb();
  }
  puStack_78 = &DAT_00980690;
  iStack_7c = 0x57e404;
  FUN_00403191();
  piStack_94 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piStack_94 == (int *)0x0) {
    puStack_78 = (undefined4 *)0x80004003;
    iStack_7c = 0x57e419;
    FUN_00878dfb();
    piStack_94 = *(int **)(unaff_EBP + -0x14);
  }
  iVar2 = *piStack_94;
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x18);
  iStack_84 = *(undefined4 *)(unaff_EBP + -0x54);
  iStack_80 = *(undefined4 *)(unaff_EBP + -0x50);
  pcStack_8c = (char *)0x62;
  iStack_7c = *(undefined4 *)(unaff_EBP + -0x4c);
  uStack_90 = 0x9d;
  *(int **)(unaff_EBP + -0x20) = piStack_94;
  puStack_78 = *(undefined4 **)(unaff_EBP + -0x48);
  piStack_98 = (int *)0x57e43e;
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    piStack_98 = (int *)&DAT_00963cc8;
    iStack_9c = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_a4 = 0x57e450;
    iStack_a0 = iVar2;
    FUN_00878e09();
  }
  piStack_98 = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_9c = 0x57e45d;
  piStack_98 = (int *)FUN_00402bc3();
  if ((int)piStack_98 < 0) {
    iStack_9c = 0x57e468;
    FUN_00878dfb();
  }
  piStack_98 = &DAT_00980690;
  iStack_9c = 0x57e471;
  FUN_00403191();
  piStack_98 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_9c = 0x57e47e;
  FUN_00403191();
  piStack_98 = (int *)(unaff_EBP + -100);
  iStack_9c = unaff_EBP + -0x54;
  iStack_a4 = unaff_EBP + -0x20;
  iStack_a0 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_a0 = 0x57e4a2;
  iStack_a0 = FUN_00449749();
  iStack_a4 = 0x57e4ab;
  uVar3 = FUN_00449713();
  *(int **)(unaff_EBP + -0x10) = &iStack_a4;
  FUN_00448a17(uVar3);
  uVar4 = 0x67;
  uVar3 = 0xaa;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_004115d9(0xaa,0x67);
  FUN_00448e3a(uVar3,uVar4);
  piStack_98 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piStack_98 != (int *)0x0) {
    iStack_9c = 0x57e4e2;
    (**(code **)(*piStack_98 + 8))();
  }
  piStack_98 = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_9c = 0x57e4ef;
  piStack_98 = (int *)FUN_00402bc3();
  if ((int)piStack_98 < 0) {
    iStack_9c = 0x57e4fa;
    FUN_00878dfb();
  }
  piStack_98 = (int *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_9c = 0x57e507;
  piStack_98 = (int *)FUN_00402bc3();
  if ((int)piStack_98 < 0) {
    iStack_9c = 0x57e512;
    FUN_00878dfb();
  }
  piStack_98 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_98 != (int *)0x0) {
    iStack_9c = 0x57e523;
    (**(code **)(*piStack_98 + 8))();
  }
  piStack_98 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_98 != (int *)0x0) {
    iStack_9c = 0x57e534;
    (**(code **)(*piStack_98 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_98 = (int *)0x57e540;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


