/* FUN_00676c8d - 0x00676c8d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00676c8d(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int *piVar4;
  int unaff_EBP;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int *piStack_70;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  iVar3 = *(int *)(*(int *)(extraout_ECX + 0x8c) + 0x38);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x18) = iVar3;
  *(int *)(unaff_EBP + -0x20) = iVar3 * 0x1c;
  *(undefined4 *)(unaff_EBP + -0x10) = 0x58;
  iVar3 = extraout_ECX;
  do {
    if (*(int *)(unaff_EBP + -0x18) < *(int *)(iVar3 + 0xac)) {
      piStack_70 = (int *)0x3;
      iStack_74 = 0xff;
      iStack_78 = 0x676cd9;
      FUN_004031b7();
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar3 + 0xa8);
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piVar4 == (int *)0x0) {
        piStack_70 = (int *)0x80004003;
        iStack_74 = 0x676cf7;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar2 = *piVar4;
      iStack_80 = *(int *)(unaff_EBP + -0x24);
      uStack_84 = *(undefined4 *)(unaff_EBP + -0x10);
      iStack_7c = *(int *)(unaff_EBP + -0x3c);
      iStack_78 = *(int *)(unaff_EBP + -0x38);
      iStack_74 = *(int *)(unaff_EBP + -0x34);
      *(int **)(unaff_EBP + -0x28) = piVar4;
      piStack_70 = *(int **)(unaff_EBP + -0x30);
      iVar2 = (**(code **)(iVar2 + 0x80))(piVar4,7);
      if (iVar2 < 0) {
        piStack_70 = (int *)&DAT_00963cc8;
        iStack_74 = *(int *)(unaff_EBP + -0x28);
        iStack_7c = 0x676d2c;
        iStack_78 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_70 = (int *)(unaff_EBP + -0x3c);
      iStack_74 = 0x676d39;
      piStack_70 = (int *)FUN_00402bc3();
      if ((int)piStack_70 < 0) {
        iStack_74 = 0x676d44;
        FUN_00878dfb();
      }
    }
    iVar2 = *(int *)(iVar3 + 0x9c);
    if ((iVar2 != 0) && (*(uint *)(unaff_EBP + -0x18) < *(uint *)(iVar2 + -4))) {
      piStack_70 = (int *)0x3;
      piVar4 = (int *)(iVar2 + *(int *)(unaff_EBP + -0x20));
      iStack_74 = 0xff;
      iStack_78 = 0x676d72;
      FUN_004031b7();
      iVar3 = piVar4[4];
      *(undefined1 *)(unaff_EBP + -4) = 2;
      *(int *)(unaff_EBP + -0x2c) = iVar3;
      if (iVar3 == 0) {
        piStack_70 = (int *)0x80004003;
        iStack_74 = 0x676d8b;
        FUN_00878dfb();
      }
      iVar3 = piVar4[4];
      *(int *)(unaff_EBP + -0x28) = iVar3;
      if (iVar3 == 0) {
        piStack_70 = (int *)0x80004003;
        iStack_74 = 0x676d9b;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        piStack_70 = (int *)0x80004003;
        iStack_74 = 0x676daa;
        FUN_00878dfb();
      }
      piVar1 = *(int **)(unaff_EBP + 8);
      *(int **)(unaff_EBP + -0x24) = piVar1;
      piStack_70 = (int *)0x676db8;
      iVar3 = FUN_0040eed0();
      *(int *)(unaff_EBP + -0x28) = (*(int *)(unaff_EBP + -0x10) - iVar3) + 0x22;
      piStack_70 = (int *)0x676dcc;
      iVar3 = FUN_0040eea9();
      iStack_80 = *(undefined4 *)(unaff_EBP + -0x2c);
      uStack_84 = *(undefined4 *)(unaff_EBP + -0x28);
      iStack_7c = *(int *)(unaff_EBP + -0x4c);
      iStack_78 = *(int *)(unaff_EBP + -0x48);
      iStack_74 = *(int *)(unaff_EBP + -0x44);
      piStack_70 = *(int **)(unaff_EBP + -0x40);
      iVar3 = (**(code **)(*piVar1 + 0x80))(*(undefined4 *)(unaff_EBP + -0x24),10 - iVar3);
      if (iVar3 < 0) {
        piStack_70 = (int *)&DAT_00963cc8;
        iStack_74 = *(int *)(unaff_EBP + -0x24);
        iStack_7c = 0x676e01;
        iStack_78 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_70 = (int *)(unaff_EBP + -0x4c);
      iStack_74 = 0x676e0e;
      piStack_70 = (int *)FUN_00402bc3();
      if ((int)piStack_70 < 0) {
        iStack_74 = 0x676e19;
        FUN_00878dfb();
      }
      if (piVar4[3] == 0) {
        iStack_74 = 0;
      }
      else {
        piStack_70 = (int *)0x676e25;
        iStack_74 = FUN_00409205();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      piStack_70 = (int *)0xffffffff;
      iStack_78 = 0x676e38;
      FUN_00414edd();
      piStack_70 = (int *)0xa0;
      iStack_78 = *(int *)(unaff_EBP + -0x1c) + 0xa0;
      *(int **)(unaff_EBP + -0x2c) = &iStack_74;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_7c = 0x676e56;
      FUN_0046fcc9();
      iStack_78 = unaff_EBP + -0x14;
      iStack_7c = 0x676e5f;
      FUN_007d3a22();
      piStack_70 = &DAT_00980690;
      iStack_74 = 0x676e70;
      FUN_00403191();
      piStack_70 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_74 = 0x676e7d;
      FUN_00403191();
      piStack_70 = (int *)(unaff_EBP + -0x6c);
      iStack_74 = unaff_EBP + -0x5c;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_78 = 0x676e91;
      iStack_78 = FUN_004458be();
      iStack_7c = 0x676e9a;
      iStack_80 = FUN_00449713();
      *(int **)(unaff_EBP + -0x2c) = &iStack_7c;
      uStack_84 = 0x676ea6;
      iStack_7c = extraout_ECX_00;
      FUN_00448a17();
      iVar3 = *(int *)(unaff_EBP + -0x10);
      iStack_80 = iVar3 + 3;
      uStack_84 = 0x33;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0044974c();
      FUN_005c1d2c();
      piStack_70 = (int *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_74 = 0x676ed1;
      piStack_70 = (int *)FUN_00402bc3();
      if ((int)piStack_70 < 0) {
        iStack_74 = 0x676edc;
        FUN_00878dfb();
      }
      piStack_70 = (int *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_74 = 0x676ee9;
      piStack_70 = (int *)FUN_00402bc3();
      if ((int)piStack_70 < 0) {
        iStack_74 = 0x676ef4;
        FUN_00878dfb();
      }
      iVar2 = *piVar4 / 1000000;
      if (((iVar2 == 2) || (iVar2 == 3)) || (iVar2 == 4)) {
        piStack_70 = (int *)0x676f17;
        iVar2 = (**(code **)(*(int *)piVar4[6] + 0x18))();
        piStack_70 = (int *)0x0;
        iStack_78 = *(int *)(unaff_EBP + -0x1c) + 0xa4;
        *(int **)(unaff_EBP + -0x2c) = &iStack_74;
        iStack_7c = 0x676f2f;
        iStack_74 = extraout_ECX_01;
        FUN_00424dbc();
        iStack_80 = 8;
        *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_84;
        uStack_84 = extraout_ECX_02;
        iStack_7c = iVar3 + 0x14;
        iStack_78 = iVar2;
        FUN_0046fc23(unaff_EBP + 8);
        FUN_007d3201();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_70 = (int *)0x676f56;
      FUN_00414ebb();
      iVar3 = *(int *)(unaff_EBP + -0x1c);
    }
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 0x1c;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x28;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
  } while (*(int *)(unaff_EBP + -0x10) < 0x120);
  piStack_70 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_70 != (int *)0x0) {
    iStack_74 = 0x676f82;
    (**(code **)(*piStack_70 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


