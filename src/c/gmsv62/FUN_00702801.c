/* FUN_00702801 - 0x00702801 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00702801(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  int *piVar4;
  undefined4 *puStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x57c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 2;
  }
  else {
    FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  FUN_00419192();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_00402676();
  }
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffffa0;
  FUN_00419192();
  FUN_0078a024();
  puVar1 = (undefined4 *)FUN_007d4a9a();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x580),
             (IBinding *)*puVar1);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  puVar1 = (undefined4 *)FUN_007d4a9a();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x584),
             (IBinding *)*puVar1);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  puVar1 = (undefined4 *)FUN_007d4a9a();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x588),
             (IBinding *)*puVar1);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  puVar1 = (undefined4 *)FUN_007d4a9a();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x58c),
             (IBinding *)*puVar1);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  puVar1 = (undefined4 *)FUN_007d4a9a();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x590),
             (IBinding *)*puVar1);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  puVar1 = (undefined4 *)FUN_007d4a9a();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x594),
             (IBinding *)*puVar1);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  puVar1 = (undefined4 *)FUN_007d4a9a();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x598),
             (IBinding *)*puVar1);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 1;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x20))();
  if (*(int *)(extraout_ECX + 0x57c) == 0) {
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00402676();
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar2 != 0) {
      FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00450382();
    iVar2 = **(int **)(extraout_ECX + 0x5a8);
  }
  else {
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00402676();
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (iVar2 != 0) {
      FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00450382();
    iVar2 = **(int **)(extraout_ECX + 0x5a0);
  }
  (**(code **)(iVar2 + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  puVar1 = (undefined4 *)FUN_004029b9();
  *(undefined4 **)(unaff_EBP + 8) = puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0044f3fa();
    *puVar1 = &PTR_FUN_008f0754;
    puVar1[1] = &PTR_ptr_00498cc8_008f0708;
    puVar1[2] = &PTR_FUN_008f0704;
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x5d8) + 0x20))();
  uVar3 = FUN_00702e5c();
  *(undefined4 *)(extraout_ECX + 0x61c) = uVar3;
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5d8) + 4) + 0x1c))();
  iStack_b0 = 0x702c06;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_b0 = unaff_EBP + -0x4c;
  iStack_b4 = 0x702c14;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_b0 = 0x702c20;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_b0 = 0x702c2a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_b0 = unaff_EBP + -0x3c;
  puStack_bc = &DAT_00980690;
  iStack_b4 = 0x702c38;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_b0 = 0x702c44;
    FUN_00878dfb();
    puStack_bc = extraout_ECX_00;
  }
  iStack_b0 = 0;
  iStack_b4 = unaff_EBP + -0x4c;
  iStack_b8 = unaff_EBP + -0x3c;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_bc;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00679e4e(&puStack_bc,0xdd6);
  iVar2 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_b4 = 0x702c8d;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  iStack_b0 = 0x702c9f;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_b0 = 0x702cb0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_b0 = 0x702cbd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b0 = 0x702cc8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_b0 = 0x702cd5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b0 = 0x702ce0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_b0 = 0x702ced;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b0 = 0x702cf8;
    FUN_00878dfb();
  }
  iStack_b0 = 0x702cfe;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_b0 = unaff_EBP + -0x3c;
  iStack_b4 = 0x702d0c;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_b0 = 0x702d18;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_b0 = 0x702d22;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_b0 = unaff_EBP + -0x4c;
  puVar1 = &DAT_00980690;
  iStack_b4 = 0x702d30;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_b0 = 0x702d3c;
    FUN_00878dfb();
    puVar1 = extraout_ECX_01;
  }
  iStack_b0 = 0;
  iStack_b4 = unaff_EBP + -0x3c;
  iStack_b8 = unaff_EBP + -0x4c;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_bc;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_bc = puVar1;
  FUN_00679e4e(&puStack_bc,0xdd7);
  iVar2 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_b4 = 0x702d85;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  iStack_b0 = 0x702d97;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_b0 = 0x702da8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_b0 = 0x702db5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b0 = 0x702dc0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_b0 = 0x702dcd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b0 = 0x702dd8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_b0 = 0x702de5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b0 = 0x702df0;
    FUN_00878dfb();
  }
  piVar4 = (int *)(extraout_ECX + 0x5b0);
  iVar2 = 5;
  do {
    if ((int *)*piVar4 != (int *)0x0) {
      (**(code **)(*(int *)*piVar4 + 0xc))();
      FUN_00450463();
    }
    piVar4 = piVar4 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0070628c();
  FUN_0045f10c();
  FUN_004f1a88();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


