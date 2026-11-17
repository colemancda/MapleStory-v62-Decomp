/* ptr_00430de8 - 0x00430de8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall ptr_00430de8(undefined4 param_1,VARIANTARG *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  while( true ) {
    iStack_4 = 0xc00614a4;
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_8;
    iStack_c = 0;
    iStack_10 = 0x430dfa;
    uStack_8 = param_1;
    FUN_00424e0a();
    iStack_c = unaff_EBX[1] - *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_14 = 0x430e0b;
    iStack_10 = unaff_EDI;
    iStack_c = FUN_0042517f();
    iStack_10 = *unaff_EBX - *(int *)(unaff_EBP + -0x14);
    uStack_18 = 0x430e1a;
    iStack_14 = unaff_ESI;
    uVar1 = FUN_0042517f();
    iStack_14 = iStack_10;
    *(int **)(unaff_EBP + -0x28) = &iStack_14;
    uStack_18 = 0;
    uStack_1c = 0x430e2b;
    iStack_10 = uVar1;
    FUN_00424dd7();
    uStack_18 = 0;
    uStack_1c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uVar1 = FUN_00434401();
    uStack_1c = FUN_0042517f(uVar1);
    uVar1 = FUN_00437287();
    *(undefined4 **)(unaff_EBP + -0x28) = &uStack_1c;
    FUN_00424dbc(uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0042e5bf(unaff_EBP + 8);
    param_2 = (VARIANTARG *)(unaff_EBP + -0x48);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    VariantInit(param_2);
    param_2 = (VARIANTARG *)&DAT_00980690;
    iStack_4 = 0x430e89;
    param_2 = (VARIANTARG *)FUN_00402e32();
    if ((int)param_2 < 0) {
      FUN_00878dfb();
    }
    param_2 = (VARIANTARG *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    VariantInit(param_2);
    param_2 = (VARIANTARG *)&DAT_00980690;
    iStack_4 = 0x430ea9;
    param_2 = (VARIANTARG *)FUN_00402e32();
    if ((int)param_2 < 0) {
      FUN_00878dfb();
    }
    piVar2 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (piVar2 == (int *)0x0) {
      param_2 = (VARIANTARG *)0x80004003;
      FUN_00878dfb();
      piVar2 = *(int **)(unaff_EBP + 8);
    }
    uStack_8 = *(undefined4 *)(unaff_EBP + -0x48);
    iStack_4 = *(int *)(unaff_EBP + -0x44);
    iVar3 = *piVar2;
    param_2 = *(VARIANTARG **)(unaff_EBP + -0x3c);
    uStack_18 = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_14 = *(int *)(unaff_EBP + -0x34);
    iStack_10 = *(undefined4 *)(unaff_EBP + -0x30);
    uStack_1c = 0;
    *(int **)(unaff_EBP + -0x24) = piVar2;
    iStack_c = *(undefined4 *)(unaff_EBP + -0x2c);
    iVar3 = (**(code **)(iVar3 + 0x110))(piVar2);
    if (iVar3 < 0) {
      param_2 = (VARIANTARG *)&DAT_00963df8;
      uStack_8 = 0x430f05;
      iStack_4 = iVar3;
      FUN_00878e09();
    }
    param_2 = (VARIANTARG *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    param_2 = (VARIANTARG *)FUN_00402bc3();
    if ((int)param_2 < 0) {
      FUN_00878dfb();
    }
    param_2 = (VARIANTARG *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    param_2 = (VARIANTARG *)FUN_00402bc3();
    if ((int)param_2 < 0) {
      FUN_00878dfb();
    }
    param_2 = *(VARIANTARG **)(unaff_EBP + 8);
    *(undefined1 **)(unaff_EBP + -0x28) = &stack0x00000004;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      iStack_4 = 0x430f4d;
      (**(code **)(**(int **)(unaff_EBP + 8) + 4))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00424e82();
    FUN_00427af9();
    param_2 = *(VARIANTARG **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    param_1 = extraout_ECX;
    if (param_2 != (VARIANTARG *)0x0) {
      (**(code **)(*(int *)param_2 + 8))();
      param_1 = extraout_ECX_00;
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    if (unaff_EBX[7] <= *(int *)(unaff_EBP + -0x18)) break;
    unaff_ESI = *(int *)(unaff_EBP + -0x1c);
    unaff_EDI = *(undefined4 *)(unaff_EBP + -0x20);
    param_2 = (VARIANTARG *)0x0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


