/* FUN_00522ddd - 0x00522ddd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00522ddd(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int extraout_ECX;
  uint extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  uint uStack_64;
  uint uStack_60;
  int *piStack_5c;
  int *piStack_58;
  
  FUN_00879bb8();
  piStack_58 = (int *)(unaff_EBP + -0x10);
  piStack_5c = (int *)0x522df8;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 < 10) {
    piStack_5c = (int *)&DAT_009653dc;
  }
  else {
    piStack_5c = (int *)&DAT_0096477c;
  }
  uStack_60 = unaff_EBP + -0x18;
  uStack_64 = 0x522e26;
  piStack_58 = (int *)iVar1;
  FUN_00434e21();
  piStack_58 = *(int **)(*(int *)(extraout_ECX + 0x74) + -0x14 + iVar1 * 0x18);
  iVar1 = *(int *)(extraout_ECX + 0x74) + -0x18 + iVar1 * 0x18;
  uStack_60 = unaff_EBP + -0x14;
  piStack_5c = (int *)&DAT_0096477c;
  uStack_64 = 0x522e41;
  FUN_00434e21();
  piStack_58 = &DAT_00980690;
  piStack_5c = (int *)0x522e52;
  FUN_00403191();
  piStack_58 = (int *)0x3;
  piStack_5c = *(int **)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_60 = 0x522e63;
  FUN_004031b7();
  piStack_58 = (int *)(unaff_EBP + -0x44);
  piStack_5c = (int *)(unaff_EBP + -0x34);
  uStack_64 = unaff_EBP + 8;
  uStack_60 = 0xf;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_68 = 0x522e7c;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_60 = 0x522e89;
  uStack_60 = FUN_00449749();
  uStack_64 = 0x522e92;
  iStack_68 = FUN_00449713();
  *(uint **)(unaff_EBP + -0x20) = &uStack_64;
  iStack_6c = 0x522e9e;
  FUN_00448a17();
  iStack_68 = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_6c = 0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_70 = 0x522eaf;
  FUN_004115d9();
  uStack_70 = 0x522eb6;
  FUN_00448e3a();
  piStack_58 = (int *)0x522ebe;
  FUN_004497b5();
  piStack_58 = (int *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_5c = (int *)0x522ecb;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    piStack_5c = (int *)0x522ed6;
    FUN_00878dfb();
  }
  piStack_58 = (int *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_5c = (int *)0x522ee3;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    piStack_5c = (int *)0x522eee;
    FUN_00878dfb();
  }
  piStack_58 = &DAT_00980690;
  piStack_5c = (int *)0x522ef7;
  FUN_00403191();
  piStack_58 = (int *)0x3;
  piStack_5c = *(int **)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_60 = 0x522f08;
  FUN_004031b7();
  piStack_58 = (int *)(unaff_EBP + -0x34);
  piStack_5c = (int *)(unaff_EBP + -0x44);
  uStack_64 = unaff_EBP + 8;
  uStack_60 = 0xf;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_68 = 0x522f1e;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_60 = 0x522f2b;
  uStack_60 = FUN_00449749();
  uStack_64 = 0x522f33;
  iStack_68 = FUN_00449713();
  *(uint **)(unaff_EBP + -0x20) = &uStack_64;
  iStack_6c = 0x522f3f;
  FUN_00448a17();
  iStack_68 = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_6c = 0x55;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_70 = 0x522f50;
  FUN_004115d9();
  uStack_70 = 0x522f57;
  FUN_00448e3a();
  piStack_58 = (int *)0x522f5f;
  FUN_004497b5();
  piStack_58 = (int *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_5c = (int *)0x522f6c;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    piStack_5c = (int *)0x522f77;
    FUN_00878dfb();
  }
  piStack_58 = (int *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_5c = (int *)0x522f84;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    piStack_5c = (int *)0x522f8f;
    FUN_00878dfb();
  }
  piStack_58 = &DAT_00980690;
  piStack_5c = (int *)0x522f98;
  FUN_00403191();
  piStack_58 = (int *)0x3;
  piStack_5c = *(int **)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_60 = 0x522fa9;
  FUN_004031b7();
  piStack_58 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_5c = (int *)0x522fb6;
  FUN_00403191();
  piStack_58 = (int *)(unaff_EBP + -0x54);
  piStack_5c = (int *)(unaff_EBP + -0x34);
  uStack_64 = unaff_EBP - 0x20;
  uStack_60 = 0xf;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_68 = 0x522fcc;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uStack_60 = 0x522fd9;
  uStack_60 = FUN_00449749();
  uStack_64 = 0x522fe2;
  iStack_68 = FUN_00449713();
  *(uint **)(unaff_EBP + 0x14) = &uStack_64;
  iStack_6c = 0x522fee;
  uStack_64 = extraout_ECX_00;
  FUN_00448a17();
  iStack_68 = *(int *)(unaff_EBP + 0xc);
  iStack_6c = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_70 = 0x523000;
  uVar3 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_70;
  FUN_00448a17(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_007d4a9a(unaff_EBP + 8,0xf);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0044974c();
  iStack_6c = FUN_00448ebb();
  iStack_6c = 0x113 - iStack_6c;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_70 = 0x523042;
  FUN_004115d9();
  uStack_70 = 0x523049;
  FUN_00448e3a();
  piStack_58 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piStack_58 != (int *)0x0) {
    piStack_5c = (int *)0x52305c;
    (**(code **)(*piStack_58 + 8))();
  }
  piStack_58 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piStack_58 != (int *)0x0) {
    piStack_5c = (int *)0x52306d;
    (**(code **)(*piStack_58 + 8))();
  }
  piStack_58 = (int *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_5c = (int *)0x52307a;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    piStack_5c = (int *)0x523085;
    FUN_00878dfb();
  }
  piStack_58 = (int *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_5c = (int *)0x523092;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    piStack_5c = (int *)0x52309d;
    FUN_00878dfb();
  }
  piStack_58 = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_5c = (int *)0x5230aa;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    piStack_5c = (int *)0x5230b5;
    FUN_00878dfb();
  }
  if ((((*(int *)(iVar1 + 8) != 0) || (*(int *)(iVar1 + 0xc) != 0)) || (*(int *)(iVar1 + 0x10) != 0)
      ) || (*(int *)(iVar1 + 0x14) != 0)) {
    piStack_58 = (int *)(uint)*(byte *)(iVar1 + 0x14);
    piStack_5c = (int *)(uint)*(ushort *)(iVar1 + 0x10);
    uStack_60 = (uint)*(byte *)(iVar1 + 0xc);
    uStack_64 = (uint)*(ushort *)(iVar1 + 8);
    iStack_68 = unaff_EBP + -0x1c;
    iStack_6c = 0x5230f2;
    FUN_00856c17();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      piStack_58 = (int *)0x3;
      piStack_5c = (int *)0xff;
      uStack_60 = 0x523130;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_58 = (int *)0x80004003;
        piStack_5c = (int *)0x523143;
        FUN_00878dfb();
      }
      piVar2 = *(int **)(unaff_EBP + -0x10);
      iStack_68 = *(int *)(unaff_EBP + -0x1c);
      uStack_64 = *(uint *)(unaff_EBP + -0x54);
      uStack_60 = *(uint *)(unaff_EBP + -0x50);
      iStack_6c = *(int *)(unaff_EBP + 0xc) + -4;
      piStack_5c = *(int **)(unaff_EBP + -0x4c);
      uStack_70 = 0x41;
      piStack_58 = *(int **)(unaff_EBP + -0x48);
      uVar4 = (**(code **)(*piVar2 + 0x80))(piVar2);
      if ((int)uVar4 < 0) {
        piStack_58 = (int *)&DAT_00963cc8;
        uStack_64 = 0x523177;
        uStack_60 = uVar4;
        piStack_5c = piVar2;
        FUN_00878e09();
      }
      piStack_58 = (int *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      piStack_5c = (int *)0x523184;
      piStack_58 = (int *)FUN_00402bc3();
      if ((int)piStack_58 < 0) {
        piStack_5c = (int *)0x52318f;
        FUN_00878dfb();
      }
      piStack_58 = *(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piStack_58 != (int *)0x0) {
        piStack_5c = (int *)0x5231a0;
        (**(code **)(*piStack_58 + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_58 = (int *)0x5231ac;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_58 = (int *)0x5231b8;
      FUN_00414ebb();
      piStack_58 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_005231c1;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_58 = (int *)0x523107;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_58 = (int *)0x523113;
  FUN_00414ebb();
  piStack_58 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_005231c1:
  if (piStack_58 != (int *)0x0) {
    piStack_5c = (int *)0x5231c9;
    (**(code **)(*piStack_58 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


