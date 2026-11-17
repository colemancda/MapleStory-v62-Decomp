/* FUN_00719161 - 0x00719161 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00719161(void)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  iStack_44 = 0xdf2;
  iStack_48 = unaff_EBP + -0x18;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_4c = 0x71919d;
  iStack_44 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_48 = 0x7191aa;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_44 = 0x7191b5;
  FUN_00402676();
  iStack_44 = 0x578;
  iStack_48 = 0x7191c4;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    iStack_44 = 0;
  }
  else {
    iStack_44 = 0x7191d6;
    iStack_44 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_48 = 0x7191e6;
  iVar1 = FUN_00450382();
  iStack_44 = unaff_EBP + -0x30;
  iStack_48 = 1;
  uStack_4c = 0x195;
  uStack_50 = 0xbe;
  uStack_54 = 1;
  iStack_5c = 0x719203;
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0xaf;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x80;
  do {
    iStack_5c = 0xdf3;
    iStack_60 = unaff_EBP + -0x1c;
    uStack_64 = 0x719226;
    iStack_5c = FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_60 = 0x719233;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_5c = 0x71923e;
    FUN_00402676();
    iStack_5c = 0x578;
    iStack_60 = 0x71924d;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x20) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar1 == 0) {
      iStack_5c = 0;
    }
    else {
      iStack_5c = 0x71925f;
      iStack_5c = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_60 = 0x71926f;
    iVar1 = FUN_00450382();
    iStack_5c = unaff_EBP + -0x30;
    iStack_60 = 1;
    uStack_64 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_6c = *(int *)(unaff_EBP + -0x14) + 3000;
    uStack_68 = 0x170;
    iStack_74 = 0x719292;
    (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x16;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 8;
  } while (*(int *)(unaff_EBP + -0x10) < 0x15f);
  iStack_5c = 0xde2;
  iStack_60 = unaff_EBP + -0x1c;
  uStack_64 = 0x7192ba;
  iStack_5c = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_60 = 0x7192c7;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_5c = 0x7192d2;
  FUN_00402676();
  iStack_5c = 0x578;
  iStack_60 = 0x7192e1;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 == 0) {
    iStack_5c = 0;
  }
  else {
    iStack_5c = 0x7192f3;
    iStack_5c = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_60 = 0x719306;
  iVar1 = FUN_00450382();
  iStack_5c = unaff_EBP + -0x30;
  iStack_60 = 1;
  uStack_64 = 0x170;
  uStack_68 = 0x89;
  iStack_6c = 0xfa1;
  iStack_74 = 0x719326;
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  iStack_74 = 0xde3;
  iStack_78 = unaff_EBP + -0x1c;
  uStack_7c = 0x719336;
  iStack_74 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_78 = 0x719343;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_74 = 0x71934e;
  FUN_00402676();
  iStack_74 = 0x578;
  iStack_78 = 0x71935d;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 == 0) {
    iStack_74 = 0;
  }
  else {
    iStack_74 = 0x71936f;
    iStack_74 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_78 = 0x719382;
  iVar1 = FUN_00450382();
  iStack_74 = unaff_EBP + -0x30;
  iStack_78 = 1;
  uStack_7c = 0x170;
  uStack_80 = 0x121;
  uStack_84 = 4000;
  iStack_8c = 0x7193a2;
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  iStack_8c = *(undefined4 *)(extraout_ECX + 0x7c);
  iStack_90 = 0x7193ac;
  FUN_008164fd();
  iStack_8c = 0x584;
  iStack_90 = unaff_EBP + -0x1c;
  uStack_94 = 0x7193bc;
  puVar2 = (undefined4 *)FUN_00679d86();
  uStack_94 = *puVar2;
  iStack_8c = 0;
  iStack_90 = extraout_ECX + 0x5e4;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_98 = 0x7193d0;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_8c = 0x7193de;
  FUN_00402676();
  iStack_8c = 0x585;
  iStack_90 = unaff_EBP + -0x18;
  uStack_94 = 0x7193ee;
  iStack_8c = FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_90 = 0x7193fb;
  FUN_0044f5f6();
  iStack_8c = unaff_EBP + -0x40;
  iStack_90 = 0xffff2020;
  uStack_94 = 0xc;
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_98;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00679e4e(&uStack_98,10);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0044974c();
  FUN_004503f9();
  iStack_8c = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_90 = 0x719439;
  iStack_8c = FUN_00402bc3();
  if (iStack_8c < 0) {
    iStack_90 = 0x719444;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    iStack_8c = 0x719450;
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_8c = 0x71945f;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


