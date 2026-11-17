/* FUN_0076000e - 0x0076000e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076000e(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int *piVar3;
  undefined1 *extraout_ECX_02;
  int unaff_EBP;
  uint uVar4;
  int iStack_fc;
  int iStack_e8;
  undefined1 *puStack_e4;
  int iStack_e0;
  int iStack_dc;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  iStack_dc = 0x76002e;
  FUN_0081622a();
  iStack_dc = 0x760039;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_dc = 0x76004f;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_dc = 0x76005f;
  FUN_00403191();
  iStack_dc = 0;
  iStack_e0 = unaff_EBP + -0x84;
  puStack_e4 = (undefined1 *)(unaff_EBP + -0xa4);
  *(int **)(unaff_EBP + 8) = &iStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_e8 = extraout_ECX_00;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_e0 = 0x7600b2;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x38) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  if (iVar2 != 0) {
    iStack_dc = 0x7600c8;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_dc = 0x7600d9;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_dc = 0x7600e9;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_dc = 0x7600f4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_dc = 0x760104;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_dc = 0x76010f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_dc = 0x76011f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_dc = 0x76012a;
    FUN_00878dfb();
  }
  iVar2 = DAT_0097951c;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  uVar4 = *(uint *)(*(int *)(extraout_ECX + 0x70) + 0x38);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *(uint *)(unaff_EBP + 8) = uVar4;
  if ((int)uVar4 < (int)(uVar4 + 3)) {
    *(int *)(unaff_EBP + -0x20) = iVar2 + 0x6ac;
    *(uint *)(unaff_EBP + -0x24) = uVar4 * 0xc;
    while ((**(int **)(unaff_EBP + -0x20) != 0 &&
           (uVar4 < *(uint *)(**(int **)(unaff_EBP + -0x20) + -4)))) {
      iStack_dc = 0;
      iStack_e0 = 0;
      puStack_e4 = (undefined1 *)0x0;
      iStack_e8 = 0;
      FUN_005afea1();
      FUN_005af3ee();
      iStack_fc = 0x7601b1;
      FUN_00766ee6();
      thunk_FUN_0045e2eb();
      *(int **)(unaff_EBP + -0x10) = &iStack_fc;
      FUN_0046fc23(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_0048b97b();
      FUN_005558b0();
      *(undefined4 *)(unaff_EBP + -0x2c) = DAT_00973a94;
      FUN_0045e2eb();
      iStack_dc = unaff_EBP + -0x3c;
      iStack_e0 = 0x7601fa;
      FUN_0045a1d8();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_dc = 0x760207;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_dc = extraout_ECX_01;
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        iStack_dc = 0x76021b;
        iVar2 = *(int *)(unaff_EBP + -0x3c) + -0xc;
        FUN_00434e38();
        iStack_dc = iVar2;
      }
      puStack_e4 = (undefined1 *)&iStack_dc;
      *(int **)(unaff_EBP + -0x10) = &iStack_dc;
      iStack_e0 = 1;
      iStack_e8 = 0x76022f;
      FUN_007d4a9a();
      iStack_e0 = unaff_EBP + -0x14;
      puStack_e4 = (undefined1 *)0x76023a;
      FUN_007d3a22();
      iStack_dc = 0x760249;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_dc = 0x760259;
      FUN_00403191();
      iStack_dc = unaff_EBP + -0xb4;
      puStack_e4 = (undefined1 *)(unaff_EBP + -0x40);
      iStack_e0 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_e8 = 0x760276;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_e0 = 0x760283;
      iStack_e0 = FUN_00449749();
      puStack_e4 = (undefined1 *)0x76028c;
      iStack_e8 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_e4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_e8 = 0x7602a7;
      FUN_005afea1();
      iStack_e8 = 0x7602ae;
      iVar2 = FUN_005af3ee();
      iStack_e8 = (uVar4 - iVar2) * 0x28 + 0x20;
      FUN_004115d9();
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
        iStack_dc = 0x7602df;
        (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_dc = 0x7602ef;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_dc = 0x7602fa;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_dc = 0x76030a;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_dc = 0x760315;
        FUN_00878dfb();
      }
      iStack_dc = 0x76031f;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
      iStack_dc = unaff_EBP + -0x74;
      iStack_e0 = 0x760329;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_dc = 0x760335;
        FUN_00878dfb();
      }
      piVar3 = *(int **)(unaff_EBP + -0x18);
      uVar1 = *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x70) + 0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar1;
      if (piVar3 == (int *)0x0) {
        iStack_dc = 0x760356;
        FUN_00878dfb();
        piVar3 = *(int **)(unaff_EBP + -0x18);
      }
      iVar2 = *piVar3;
      iStack_e8 = *(int *)(unaff_EBP + -0x28);
      puStack_e4 = *(undefined1 **)(unaff_EBP + -0x74);
      iStack_e0 = *(undefined4 *)(unaff_EBP + -0x70);
      iStack_dc = *(int *)(unaff_EBP + -0x6c);
      *(int **)(unaff_EBP + -0x10) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x80))();
      if (iVar2 < 0) {
        iStack_fc = *(int *)(unaff_EBP + -0x10);
        FUN_00878e09(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_fc = 0x7603a6;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_fc = 0x7603b1;
        FUN_00878dfb();
      }
      FUN_0045e2eb();
      iStack_fc = unaff_EBP + -0x30;
      FUN_004497f5();
      *(int **)(unaff_EBP + -0x10) = &iStack_fc;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_00679e4e(&iStack_fc,0x75e);
      iVar2 = unaff_EBP + -0xd4;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_0040263d(iVar2);
      iVar2 = FUN_004048a4(iVar2);
      iStack_fc = 0x3bc;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_00679d22(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_fc = iVar2;
      FUN_00412550();
      iStack_fc = 0x760433;
      iStack_fc = FUN_00449713();
      FUN_00434e21(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_fc = 0x76045c;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_fc = 0x760467;
        FUN_00878dfb();
      }
      iStack_fc = 0x760473;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
      iStack_fc = unaff_EBP + -0x54;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_fc = 0x76048e;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_fc = 0x760498;
      VariantInit((VARIANTARG *)(unaff_EBP + -100));
      iStack_fc = unaff_EBP + -100;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_fc = 0x7604ae;
        FUN_00878dfb();
      }
      iStack_fc = unaff_EBP + -100;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_007d4a9a(unaff_EBP + -0x44,1);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_e0 = 0x7604d2;
      iStack_e0 = FUN_00449749();
      puStack_e4 = (undefined1 *)0x7604db;
      iStack_e8 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_e4;
      puStack_e4 = extraout_ECX_02;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_e8 = 0x7604f6;
      FUN_005afea1();
      iStack_e8 = 0x7604fd;
      iVar2 = FUN_005af3ee();
      iStack_e8 = (*(int *)(unaff_EBP + 8) - iVar2) * 0x28 + 0x32;
      FUN_004115d9();
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
        iStack_dc = 0x76052f;
        (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_dc = 0x76053c;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_dc = 0x760547;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_dc = 0x760554;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_dc = 0x76055f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
        iStack_dc = 0x760570;
        (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
      }
      iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x70) + 0x38);
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0xc;
      if (iVar2 + 3 <= *(int *)(unaff_EBP + 8)) break;
      uVar4 = *(uint *)(unaff_EBP + 8);
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    iStack_dc = 0x7605a8;
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_dc = 0x7605b9;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


