/* FUN_00591a58 - 0x00591a58 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00591a58(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar4;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  
  FUN_00879bb8();
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0xcc) = *puVar3;
  *(undefined4 *)(extraout_ECX + 0xd0) = puVar3[2];
  iStack_58 = puVar3[2];
  iStack_5c = puVar3[1];
  iStack_60 = 0x591a8e;
  FUN_00592a9b();
  iStack_58 = 0x591a9c;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_58 = 0x591aa8;
  FUN_00403191();
  iStack_58 = 0;
  iStack_5c = unaff_EBP + -0x40;
  iStack_60 = unaff_EBP + -0x30;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_64;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&uStack_64,0x54c);
  iVar2 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_5c = 0x591af2;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  iStack_58 = 0x591b04;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_58 = 0x591b15;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_58 = 0x591b22;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_58 = 0x591b2d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_58 = 0x591b39;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_58 = 0x591b44;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_58 = 0x591b51;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_58 = 0x591b5c;
    FUN_00878dfb();
  }
  iStack_58 = 0x591b66;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_58 = unaff_EBP + -0x30;
  iStack_5c = 0x591b70;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_58 = 0x591b7c;
    FUN_00878dfb();
  }
  iStack_58 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_5c = 0x591b8e;
  FUN_004031b7();
  bVar4 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (bVar4) {
    iStack_58 = 0x591ba4;
    FUN_00878dfb();
  }
  iStack_58 = unaff_EBP + -0x40;
  iStack_5c = 0xc0007d02;
  iStack_60 = 0;
  uStack_64 = 0;
  puVar3 = (undefined4 *)FUN_0042a39f(unaff_EBP + 8,0,0);
  iStack_58 = 0x591bd1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xe8),
             (IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_58 = 0x591bde;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_58 = 0x591beb;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_58 = 0x591bf6;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_58 = 0x591c03;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_58 = 0x591c0e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iStack_58 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  iStack_5c = 0x591c38;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_58 = 0x591c45;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iStack_58 = 0x591c60;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_58 = 0x591c86;
  FUN_00450382();
  iStack_58 = 0;
  iStack_5c = 0xd9;
  iStack_60 = 0x140;
  uStack_64 = 1000;
  (**(code **)(**(int **)(extraout_ECX + 0xfc) + 0x20))(extraout_ECX);
  *(undefined4 *)(extraout_ECX + 0xd4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


