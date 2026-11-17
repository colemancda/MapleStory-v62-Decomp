/* ptr_004e0143 - 0x004e0143 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004e0143(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 uVar5;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  
  if (*(int *)(unaff_EBX + 0xe4) == 0) {
    iStack_8 = unaff_EBP + -0x40;
    iStack_c = 0x4e0166;
    puVar2 = (undefined4 *)FUN_00679d22();
    iStack_8 = *puVar2;
    iStack_c = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    uStack_10 = 0x4e017c;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    iStack_8 = 0x4e0198;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x218));
    iStack_8 = unaff_EBP + -0x218;
    iStack_c = 0x4e01a5;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_8 = 0x4e01b1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    iStack_8 = 0x4e01c2;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x118));
    iStack_8 = unaff_EBP + -0x118;
    iStack_c = 0x4e01cf;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_8 = 0x4e01db;
      FUN_00878dfb();
    }
    iStack_8 = unaff_EBP + -0x118;
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    iStack_c = 0x4e01f8;
    iStack_c = FUN_00449749();
    uStack_10 = 0x4e0201;
    uVar4 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_10;
    FUN_00448a17(uVar4);
    uVar5 = 7;
    uVar4 = 0x19;
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    FUN_004115d9(0x19,7);
    FUN_00448e3a(uVar4,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    iStack_8 = 0x4e0234;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_8 = 0x4e023f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_8 = 0x4e024f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_8 = 0x4e025a;
      FUN_00878dfb();
    }
    iStack_8 = 0x4e0267;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x1b8));
    iStack_8 = unaff_EBP + -0x1b8;
    iStack_c = 0x4e0274;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_8 = 0x4e0280;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    iStack_8 = 0x4e0291;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x138));
    iStack_8 = unaff_EBP + -0x138;
    iStack_c = 0x4e029e;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_8 = 0x4e02aa;
      FUN_00878dfb();
    }
    iStack_8 = unaff_EBP + -0x138;
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    iStack_c = 0x4e02c7;
    iStack_c = FUN_00449749();
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_10;
    FUN_00679e4e(&uStack_10,0x2d3);
    uVar5 = 0x14;
    uVar4 = 0x19;
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    FUN_004115d9(0x19,0x14);
    FUN_00448e3a(uVar4,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    iStack_8 = 0x4e0302;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_8 = 0x4e030d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    if (*(int *)(unaff_EBX + 0xe4) != 1) goto switchD_004df3ca_default;
    iStack_8 = 0x4e0334;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x1f8));
    iStack_8 = unaff_EBP + -0x1f8;
    iStack_c = 0x4e0341;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_8 = 0x4e034d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    iStack_8 = 0x4e035a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x158));
    iStack_8 = unaff_EBP + -0x158;
    iStack_c = 0x4e0367;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_8 = 0x4e0373;
      FUN_00878dfb();
    }
    iStack_8 = unaff_EBP + -0x158;
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    iStack_c = 0x4e0390;
    iStack_c = FUN_00449749();
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_10;
    FUN_00679e4e(&uStack_10,0x2d4);
    uVar5 = 7;
    uVar4 = 0x19;
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    FUN_004115d9(0x19,7);
    FUN_00448e3a(uVar4,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    iStack_8 = 0x4e03d0;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_8 = 0x4e03db;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_8 = 0x4e03eb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_8 = 0x4e03f6;
      FUN_00878dfb();
    }
    iStack_8 = unaff_EBP + -0x48;
    iStack_c = 0x4e0406;
    puVar2 = (undefined4 *)FUN_00679d22();
    iStack_8 = *puVar2;
    iStack_c = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    uStack_10 = 0x4e041c;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    iStack_8 = 0x4e0438;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xd8));
    iStack_8 = unaff_EBP + -0xd8;
    iStack_c = 0x4e0445;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_8 = 0x4e0451;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x50;
    iStack_8 = 0x4e045f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
    iStack_8 = unaff_EBP + -0x68;
    iStack_c = 0x4e0469;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_8 = 0x4e0475;
      FUN_00878dfb();
    }
    iStack_8 = unaff_EBP + -0x68;
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    iStack_c = 0x4e048f;
    iStack_c = FUN_00449749();
    uStack_10 = 0x4e0498;
    uVar4 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_10;
    FUN_00448a17(uVar4);
    uVar5 = 0x14;
    uVar4 = 0x19;
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    FUN_004115d9(0x19,0x14);
    FUN_00448e3a(uVar4,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x50;
    iStack_8 = 0x4e04c8;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_8 = 0x4e04d3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  iStack_8 = 0x4e0935;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_8 = 0x4e0940;
    FUN_00878dfb();
  }
switchD_004df3ca_default:
  iStack_8 = 0x4e094d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0xb8));
  iStack_8 = unaff_EBP + -0xb8;
  iStack_c = 0x4e095a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_8 = 0x4e0966;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBX + 0x104);
  *(undefined1 *)(unaff_EBP + -4) = 99;
  *(int *)(unaff_EBP + -0x28) = iVar3;
  if (iVar3 == 0) {
    iStack_8 = 0x4e0988;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_8 = 0x4e0996;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar3 = FUN_0040e53d();
  uStack_10 = *(undefined4 *)(unaff_EBP + -0xb8);
  iStack_c = *(undefined4 *)(unaff_EBP + -0xb4);
  iStack_8 = *(undefined4 *)(unaff_EBP + -0xb0);
  iVar3 = (**(code **)(*piVar1 + 0x80))
                    (piVar1,6,0x25U - iVar3 >> 1,*(undefined4 *)(unaff_EBP + -0x28));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_00402bc3(unaff_EBP + -0xb8);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


