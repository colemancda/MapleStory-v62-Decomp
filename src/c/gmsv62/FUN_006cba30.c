/* FUN_006cba30 - 0x006cba30 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006cba30(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int *piVar5;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int unaff_EBP;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  
  FUN_00879bb8();
  iStack_8c = 0x6cba4a;
  FUN_0081622a();
  iStack_8c = 0x6cba55;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_8c = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_90 = 0x6cba84;
  puVar1 = (undefined4 *)FUN_00679d22();
  iStack_90 = *puVar1;
  iStack_8c = *(int *)(extraout_ECX + 0xac);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_94 = unaff_EBP + -0x1c;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    iStack_8c = 0x6cbab2;
    FUN_00434e38();
  }
  iStack_8c = 0x6cbac1;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_8c = 0x6cbad1;
  iStack_90 = FUN_00449713();
  *(int **)(unaff_EBP + -0x34) = &iStack_8c;
  iStack_94 = 0x6cbadd;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_90 = 0x6cbaec;
  FUN_0044974c();
  iStack_90 = 0x6cbaf3;
  iVar2 = FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_8c = 0x6cbb02;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_8c = 0x6cbb0d;
    FUN_00878dfb();
  }
  iStack_8c = 0x6cbb16;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_8c = 0x6cbb23;
  FUN_00403191();
  iStack_8c = unaff_EBP + -0x74;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_90 = 0x6cbb3a;
  iStack_90 = FUN_00449749();
  iStack_94 = 0x6cbb43;
  uVar4 = FUN_00449713();
  *(int **)(unaff_EBP + -0x34) = &iStack_94;
  iStack_94 = extraout_ECX_00;
  FUN_00448a17(uVar4);
  uVar4 = 0x26;
  iVar2 = 0xa5 - iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_004115d9(iVar2,0x26);
  FUN_00448e3a(iVar2,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_8c = 0x6cbb79;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_8c = 0x6cbb84;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_8c = 0x6cbb91;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_8c = 0x6cbb9c;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0xa4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(extraout_ECX + 0xa4) + 0x38);
  }
  *(int *)(unaff_EBP + -0x24) = iVar3;
  *(int *)(unaff_EBP + -0x34) = iVar3 + 5;
  if (iVar3 < iVar3 + 5) {
    *(int *)(unaff_EBP + -0x20) = iVar3 * 0x12;
    *(int *)(unaff_EBP + -0x10) = iVar3 * 0x12;
    *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0xb0 + iVar3 * 4;
    do {
      if (**(int **)(unaff_EBP + -0x18) != 999999999) {
        if (iVar3 == *(int *)(extraout_ECX + 0xa8)) {
          iStack_8c = 0xff;
          iStack_90 = 0x6cbc02;
          FUN_004031b7();
          piVar5 = *(int **)(unaff_EBP + 8);
          uVar4 = *(undefined4 *)(extraout_ECX + 0xd8);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
          if (piVar5 == (int *)0x0) {
            iStack_8c = 0x6cbc20;
            FUN_00878dfb();
            piVar5 = *(int **)(unaff_EBP + 8);
          }
          iVar3 = *piVar5;
          iStack_94 = *(int *)(unaff_EBP + -0x84);
          iStack_90 = *(int *)(unaff_EBP + -0x80);
          iStack_8c = *(int *)(unaff_EBP + -0x7c);
          *(int **)(unaff_EBP + -0x2c) = piVar5;
          iVar3 = (**(code **)(iVar3 + 0x80))
                            (piVar5,9,(*(int *)(unaff_EBP + -0x10) - *(int *)(unaff_EBP + -0x20)) +
                                      0x54,*(undefined4 *)(unaff_EBP + -0x28));
          if (iVar3 < 0) {
            iStack_8c = *(int *)(unaff_EBP + -0x2c);
            iStack_94 = 0x6cbc5f;
            iStack_90 = iVar3;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          iStack_8c = 0x6cbc6f;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_8c = 0x6cbc7a;
            FUN_00878dfb();
          }
          iVar3 = *(int *)(unaff_EBP + -0x24);
        }
        iStack_8c = unaff_EBP + -0x30;
        iStack_90 = 0x6cbc95;
        FUN_00679d22();
        iStack_8c = **(int **)(unaff_EBP + -0x18);
        iStack_90 = unaff_EBP + -0x14;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_94 = 0x6cbcaf;
        FUN_00550c58();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00414ebb();
        iStack_90 = extraout_ECX + 0xdc;
        *(int **)(unaff_EBP + -0x2c) = &iStack_8c;
        iStack_94 = 0x6cbcd2;
        FUN_0046fcc9();
        iStack_90 = unaff_EBP + -0x14;
        iStack_94 = 0x6cbcdb;
        FUN_007d3a22();
        if (iVar3 == *(int *)(extraout_ECX + 0xa8)) {
          iStack_8c = 0x6cbcf4;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
          iStack_8c = unaff_EBP + -0x54;
          iStack_90 = 0x6cbcfe;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            iStack_8c = 0x6cbd0a;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iStack_8c = 0x6cbd18;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
          iStack_8c = unaff_EBP + -0x44;
          iStack_90 = 0x6cbd22;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            iStack_8c = 0x6cbd2e;
            FUN_00878dfb();
          }
          iStack_8c = unaff_EBP + -0x44;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_90 = 0x6cbd42;
          iStack_90 = FUN_004458be();
          iStack_94 = 0x6cbd4b;
          uVar4 = FUN_00449713();
          *(int **)(unaff_EBP + -0x2c) = &iStack_94;
          iStack_94 = extraout_ECX_01;
          FUN_00448a17(uVar4);
          iVar2 = (*(int *)(unaff_EBP + -0x10) - *(int *)(unaff_EBP + -0x20)) + 0x57;
          uVar4 = 0xf;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          FUN_0044974c(0xf,iVar2);
          FUN_005c1d2c(uVar4,iVar2);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iStack_8c = 0x6cbd86;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_8c = 0x6cbd91;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
        }
        else {
          iStack_8c = 0x6cbda7;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
          iStack_8c = unaff_EBP + -0x74;
          iStack_90 = 0x6cbdb1;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            iStack_8c = 0x6cbdbd;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iStack_8c = 0x6cbdcb;
          VariantInit((VARIANTARG *)(unaff_EBP + -100));
          iStack_8c = unaff_EBP + -100;
          iStack_90 = 0x6cbdd5;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            iStack_8c = 0x6cbde1;
            FUN_00878dfb();
          }
          iStack_8c = unaff_EBP + -100;
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          iStack_90 = 0x6cbdf5;
          iStack_90 = FUN_004458be();
          iStack_94 = 0x6cbdfe;
          uVar4 = FUN_00449713();
          *(int **)(unaff_EBP + -0x2c) = &iStack_94;
          iStack_94 = extraout_ECX_02;
          FUN_00448a17(uVar4);
          iVar2 = (*(int *)(unaff_EBP + -0x10) - *(int *)(unaff_EBP + -0x20)) + 0x57;
          uVar4 = 0xf;
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          FUN_0044974c(0xf,iVar2);
          FUN_005c1d2c(uVar4,iVar2);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iStack_8c = 0x6cbe39;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_8c = 0x6cbe44;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
        }
        iStack_8c = 0x6cbe51;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_8c = 0x6cbe5c;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00414ebb();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
      iVar3 = iVar3 + 1;
      *(int *)(unaff_EBP + -0x24) = iVar3;
    } while (iVar3 < *(int *)(unaff_EBP + -0x34));
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_8c = 0x6cbe9a;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


