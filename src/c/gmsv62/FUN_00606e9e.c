/* FUN_00606e9e - 0x00606e9e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00606e9e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  int unaff_EBP;
  undefined1 auStack_8c [4];
  undefined4 uStack_88;
  int *piStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  int iStack_70;
  int iStack_6c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7();
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(extraout_ECX + 0x508);
  piVar4 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar4 == (int *)0x0) {
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piVar4;
  *(int **)(unaff_EBP + -0x18) = piVar4;
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    iStack_6c = *(int *)(unaff_EBP + -0x18);
    puStack_74 = (undefined1 *)0x606f17;
    iStack_70 = iVar1;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_6c = 0x606f23;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_6c = 0x606f2e;
    FUN_00878dfb();
  }
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if ((*(char **)(iVar1 + 0x518) != (char *)0x0) && (**(char **)(iVar1 + 0x518) != '\0')) {
    iStack_6c = 0x606f55;
    FUN_00403191();
    iStack_6c = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_70 = 0x606f68;
    FUN_004031b7();
    iStack_6c = unaff_EBP + -0x44;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_70 = 0x606f7f;
    iStack_70 = FUN_00449749();
    puStack_74 = (undefined1 *)0x606f8b;
    uStack_78 = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_74;
    uStack_7c = 0x606f97;
    puStack_74 = extraout_ECX_00;
    FUN_00448a17();
    uStack_78 = 0xea;
    uStack_7c = 0x8d;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_80 = 0x606fad;
    FUN_004115d9();
    iStack_80 = 0x606fb4;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_6c = 0x606fc1;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_6c = 0x606fcc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_6c = 0x606fd8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_6c = 0x606fe3;
      FUN_00878dfb();
    }
  }
  if (*(int *)(iVar1 + 4) != 0) {
    uStack_88 = FUN_0045e2eb();
    iStack_6c = 0;
    iStack_70 = 0;
    puStack_74 = (undefined1 *)0x0;
    uStack_78 = 0;
    uStack_7c = 0;
    iStack_80 = 0x11d;
    piStack_84 = (int *)0x7a;
    *(undefined4 *)(unaff_EBP + -0x1c) = uStack_88;
    *(undefined1 **)(unaff_EBP + -0x20) = auStack_8c;
    FUN_0046fc23(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0048b97b();
    FUN_005558b0();
    iVar2 = FUN_0045e2eb();
    iStack_6c = 0x607036;
    iVar3 = FUN_00537942();
    iStack_6c = iVar2;
    if (iVar3 == 0) {
      iStack_70 = iVar1 + 0x514;
      *(int **)(unaff_EBP + -0x20) = &iStack_6c;
      puStack_74 = (undefined1 *)0x60704e;
      FUN_00424dbc();
      iStack_70 = *(undefined4 *)(iVar1 + 0x10);
      iStack_80 = unaff_EBP + 8;
      puStack_74 = (undefined1 *)0x111;
      uStack_78 = 0x7a;
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_7c;
      piStack_84 = (int *)0x607067;
      uStack_7c = extraout_ECX_01;
      FUN_0046fc23();
      iStack_80 = 0x60706c;
      FUN_007d3201();
    }
    iStack_6c = unaff_EBP + -0x18;
    iStack_70 = 0x607081;
    FUN_0045a1d8();
    puStack_74 = (undefined1 *)&iStack_6c;
    *(int **)(unaff_EBP + -0x20) = &iStack_6c;
    iStack_70 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_78 = 0x607095;
    FUN_007d4a9a();
    iStack_70 = unaff_EBP + -0x18;
    puStack_74 = (undefined1 *)0x6070a0;
    FUN_007d3a22();
    iStack_6c = 0x6070ac;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_6c = 0x6070b9;
    FUN_00403191();
    iStack_6c = unaff_EBP + -0x44;
    puStack_74 = (undefined1 *)(unaff_EBP + -0x20);
    iStack_70 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_78 = 0x6070d0;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_70 = 0x6070dd;
    iStack_70 = FUN_00449749();
    puStack_74 = (undefined1 *)0x6070e6;
    uStack_78 = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_74;
    uStack_7c = 0x6070f2;
    puStack_74 = extraout_ECX_02;
    FUN_00448a17();
    uStack_78 = 0xfe;
    uStack_7c = 0xa4;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_80 = 0x607108;
    FUN_004115d9();
    iStack_80 = 0x60710f;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
      iStack_6c = 0x607120;
      (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_6c = 0x60712d;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_6c = 0x607138;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_6c = 0x607145;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_6c = 0x607150;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_6c = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_70 = 0x607162;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_6c = 0x607176;
    iVar2 = FUN_00554db7();
    *(int *)(unaff_EBP + -0x20) = iVar2;
    if (iVar2 == 0) {
      iStack_6c = unaff_EBP + -0x20;
      iStack_70 = 0x6071c7;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_6c = 0x6071d4;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00414ebb();
      iStack_6c = unaff_EBP + -0x20;
      iStack_70 = 0x6071eb;
      puVar5 = (undefined4 *)FUN_007d4a9a();
      iStack_6c = 0x6071f7;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
                 (IBinding *)*puVar5);
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        iStack_6c = 0x607204;
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
    }
    else {
      iStack_6c = unaff_EBP + -0x1c;
      iStack_70 = 0x607190;
      piVar4 = (int *)FUN_00679d22();
      iStack_6c = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_70 = unaff_EBP + -0x10;
      puStack_74 = (undefined1 *)0x6071a3;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00414ebb();
    }
    iStack_6c = 0x60720e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iStack_6c = unaff_EBP + -0x44;
    iStack_70 = 0x607218;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_6c = 0x607224;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_6c = 0x607232;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iStack_6c = unaff_EBP + -0x34;
    iStack_70 = 0x60723c;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_6c = 0x607248;
      FUN_00878dfb();
    }
    iStack_6c = unaff_EBP + -0x34;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_70 = 0x60725c;
    iStack_70 = FUN_00449749();
    puStack_74 = (undefined1 *)0x607265;
    uStack_78 = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_74;
    uStack_7c = 0x607271;
    puStack_74 = extraout_ECX_03;
    FUN_00448a17();
    uStack_78 = 0x111;
    uStack_7c = 0xa5;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_80 = 0x607287;
    FUN_004115d9();
    iStack_80 = 0x60728e;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_6c = 0x60729b;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_6c = 0x6072a6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_6c = 0x6072b3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_6c = 0x6072be;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_6c = 0x6072cf;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  if (*(int *)(iVar1 + 0x18) != 0) {
    iStack_6c = 0xff;
    iStack_70 = 0x6072fa;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar1 + 0x50c);
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (piVar4 == (int *)0x0) {
      iStack_6c = 0x607318;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar4;
    uStack_78 = *(undefined4 *)(unaff_EBP + -0x20);
    puStack_74 = *(undefined1 **)(unaff_EBP + -0x44);
    iStack_70 = *(int *)(unaff_EBP + -0x40);
    uStack_7c = 0x15d;
    iStack_6c = *(int *)(unaff_EBP + -0x3c);
    iStack_80 = 0;
    *(int **)(unaff_EBP + -0x1c) = piVar4;
    uStack_88 = 0x60733c;
    piStack_84 = piVar4;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      iStack_6c = *(int *)(unaff_EBP + -0x1c);
      puStack_74 = (undefined1 *)0x60734e;
      iStack_70 = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_6c = 0x60735a;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_6c = 0x607365;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_6c = 0x607376;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


