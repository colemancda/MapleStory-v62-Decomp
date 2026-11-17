/* ptr_0076006e - 0x0076006e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0076006e(int *param_1,VARIANTARG *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *extraout_ECX;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  uint uVar4;
  undefined4 *unaff_EDI;
  int iStack_1c;
  
  *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffff8;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piVar2 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0x38) = piVar2;
  *(int **)(unaff_EBP + -0x28) = unaff_EBX;
  if (piVar2 != unaff_EBX) {
    param_2 = (VARIANTARG *)(unaff_EBP + -0x38);
    param_1 = (int *)0x7600c8;
    param_2 = (VARIANTARG *)FUN_0041a581();
    if (((int)param_2 < (int)unaff_EBX) && (param_2 != (VARIANTARG *)0x80004002)) {
      param_1 = (int *)0x7600d9;
      FUN_00878dfb();
    }
  }
  param_2 = (VARIANTARG *)(unaff_EBP + -0xc4);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  param_1 = (int *)0x7600e9;
  param_2 = (VARIANTARG *)FUN_00402bc3();
  if ((int)param_2 < (int)unaff_EBX) {
    param_1 = (int *)0x7600f4;
    FUN_00878dfb();
  }
  param_2 = (VARIANTARG *)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  param_1 = (int *)0x760104;
  param_2 = (VARIANTARG *)FUN_00402bc3();
  if ((int)param_2 < (int)unaff_EBX) {
    param_1 = (int *)0x76010f;
    FUN_00878dfb();
  }
  param_2 = (VARIANTARG *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  param_1 = (int *)0x76011f;
  param_2 = (VARIANTARG *)FUN_00402bc3();
  if ((int)param_2 < (int)unaff_EBX) {
    param_1 = (int *)0x76012a;
    FUN_00878dfb();
  }
  iVar3 = DAT_0097951c;
  *(int **)(unaff_EBP + -0x14) = unaff_EBX;
  uVar4 = *(uint *)(*(int *)(unaff_ESI + 0x70) + 0x38);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *(uint *)(unaff_EBP + 8) = uVar4;
  if ((int)uVar4 < (int)(uVar4 + 3)) {
    *(int *)(unaff_EBP + -0x20) = iVar3 + 0x6ac;
    *(uint *)(unaff_EBP + -0x24) = uVar4 * 0xc;
    while (((int *)**(int **)(unaff_EBP + -0x20) != unaff_EBX &&
           (uVar4 < (uint)((int *)**(int **)(unaff_EBP + -0x20))[-1]))) {
      FUN_005afea1();
      FUN_005af3ee();
      iStack_1c = 0x7601b1;
      FUN_00766ee6();
      thunk_FUN_0045e2eb();
      *(int **)(unaff_EBP + -0x10) = &iStack_1c;
      FUN_0046fc23(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_0048b97b();
      FUN_005558b0();
      *(undefined4 *)(unaff_EBP + -0x2c) = DAT_00973a94;
      param_2 = (VARIANTARG *)0x7601ed;
      param_2 = (VARIANTARG *)FUN_0045e2eb();
      param_1 = (int *)(unaff_EBP + -0x3c);
      param_2 = (VARIANTARG *)FUN_0045a1d8();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      param_1 = (int *)0x760207;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      param_1 = extraout_ECX;
      if (*(int **)(unaff_EBP + -0x3c) != unaff_EBX) {
        param_2 = (VARIANTARG *)(*(int **)(unaff_EBP + -0x3c) + -3);
        param_1 = (int *)0x76021b;
        FUN_00434e38();
        param_1 = (int *)param_2;
      }
      param_2 = (VARIANTARG *)0x99;
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0x00000004;
      FUN_007d4a9a();
      FUN_007d3a22();
      param_1 = (int *)0x760249;
      param_2 = (VARIANTARG *)unaff_EDI;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      param_1 = (int *)0x760259;
      param_2 = (VARIANTARG *)unaff_EDI;
      FUN_00403191();
      param_2 = (VARIANTARG *)(unaff_EBP + -0x94);
      param_1 = (int *)(unaff_EBP + -0xb4);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_00449749();
      FUN_00449713();
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffffc;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_005afea1();
      FUN_005af3ee();
      FUN_004115d9();
      FUN_00448e3a();
      param_2 = *(VARIANTARG **)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (param_2 != (VARIANTARG *)unaff_EBX) {
        param_1 = (int *)0x7602df;
        (**(code **)(*(int *)param_2 + 8))();
      }
      param_2 = (VARIANTARG *)(unaff_EBP + -0xb4);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      param_1 = (int *)0x7602ef;
      param_2 = (VARIANTARG *)FUN_00402bc3();
      if ((int)param_2 < (int)unaff_EBX) {
        param_1 = (int *)0x7602fa;
        FUN_00878dfb();
      }
      param_2 = (VARIANTARG *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      param_1 = (int *)0x76030a;
      param_2 = (VARIANTARG *)FUN_00402bc3();
      if ((int)param_2 < (int)unaff_EBX) {
        param_1 = (int *)0x760315;
        FUN_00878dfb();
      }
      param_2 = (VARIANTARG *)(unaff_EBP + -0x74);
      param_1 = (int *)0x76031f;
      VariantInit(param_2);
      param_1 = (int *)(unaff_EBP + -0x74);
      param_2 = (VARIANTARG *)unaff_EDI;
      param_2 = (VARIANTARG *)FUN_00402e32();
      if ((int)param_2 < (int)unaff_EBX) {
        param_1 = (int *)0x760335;
        FUN_00878dfb();
      }
      piVar2 = *(int **)(unaff_EBP + -0x18);
      uVar1 = *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x70) + 0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar1;
      if (piVar2 == unaff_EBX) {
        param_2 = (VARIANTARG *)0x80004003;
        param_1 = (int *)0x760356;
        FUN_00878dfb();
        piVar2 = *(int **)(unaff_EBP + -0x18);
      }
      iVar3 = *piVar2;
      param_1 = *(int **)(unaff_EBP + -0x6c);
      *(int **)(unaff_EBP + -0x10) = piVar2;
      param_2 = *(VARIANTARG **)(unaff_EBP + -0x68);
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < (int)unaff_EBX) {
        iStack_1c = *(int *)(unaff_EBP + -0x10);
        FUN_00878e09(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_1c = 0x7603a6;
      iVar3 = FUN_00402bc3();
      if (iVar3 < (int)unaff_EBX) {
        iStack_1c = 0x7603b1;
        FUN_00878dfb();
      }
      FUN_0045e2eb();
      iStack_1c = unaff_EBP + -0x30;
      FUN_004497f5();
      *(int **)(unaff_EBP + -0x10) = &iStack_1c;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_00679e4e(&iStack_1c,0x75e);
      iVar3 = unaff_EBP + -0xd4;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_0040263d(iVar3);
      iVar3 = FUN_004048a4(iVar3);
      iStack_1c = 0x3bc;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_00679d22(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_1c = iVar3;
      FUN_00412550();
      iStack_1c = 0x760433;
      iStack_1c = FUN_00449713();
      FUN_00434e21(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_1c = 0x76045c;
      iVar3 = FUN_00402bc3();
      if (iVar3 < (int)unaff_EBX) {
        iStack_1c = 0x760467;
        FUN_00878dfb();
      }
      iStack_1c = 0x760473;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
      iStack_1c = unaff_EBP + -0x54;
      iVar3 = FUN_00402e32();
      if (iVar3 < (int)unaff_EBX) {
        iStack_1c = 0x76048e;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_1c = 0x760498;
      VariantInit((VARIANTARG *)(unaff_EBP + -100));
      iStack_1c = unaff_EBP + -100;
      iVar3 = FUN_00402e32();
      if (iVar3 < (int)unaff_EBX) {
        iStack_1c = 0x7604ae;
        FUN_00878dfb();
      }
      iStack_1c = unaff_EBP + -100;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_007d4a9a(unaff_EBP + -0x44,1);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_00449749();
      FUN_00449713();
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffffc;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_005afea1();
      FUN_005af3ee();
      FUN_004115d9();
      FUN_00448e3a();
      param_2 = *(VARIANTARG **)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (param_2 != (VARIANTARG *)unaff_EBX) {
        param_1 = (int *)0x76052f;
        (**(code **)(*(int *)param_2 + 8))();
      }
      param_2 = (VARIANTARG *)(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      param_1 = (int *)0x76053c;
      param_2 = (VARIANTARG *)FUN_00402bc3();
      if ((int)param_2 < (int)unaff_EBX) {
        param_1 = (int *)0x760547;
        FUN_00878dfb();
      }
      param_2 = (VARIANTARG *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      param_1 = (int *)0x760554;
      param_2 = (VARIANTARG *)FUN_00402bc3();
      if ((int)param_2 < (int)unaff_EBX) {
        param_1 = (int *)0x76055f;
        FUN_00878dfb();
      }
      param_2 = *(VARIANTARG **)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (param_2 != (VARIANTARG *)unaff_EBX) {
        param_1 = (int *)0x760570;
        (**(code **)(*(int *)param_2 + 8))();
      }
      iVar3 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x70) + 0x38);
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0xc;
      if (iVar3 + 3 <= *(int *)(unaff_EBP + 8)) break;
      unaff_EDI = &DAT_00980690;
      uVar4 = *(uint *)(unaff_EBP + 8);
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  param_2 = (VARIANTARG *)0x760598;
  FUN_00414ebb();
  param_2 = *(VARIANTARG **)(unaff_EBP + -0x28);
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  if (param_2 != (VARIANTARG *)unaff_EBX) {
    param_1 = (int *)0x7605a8;
    (**(code **)(*(int *)param_2 + 8))();
  }
  param_2 = *(VARIANTARG **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (param_2 != (VARIANTARG *)unaff_EBX) {
    param_1 = (int *)0x7605b9;
    (**(code **)(*(int *)param_2 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


