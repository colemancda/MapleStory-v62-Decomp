/* FUN_006e62e5 - 0x006e62e5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e62e5(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int iVar3;
  int unaff_EBP;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  int iStack_40;
  
  FUN_00879bb8();
  piVar1 = (int *)(extraout_ECX + 0x584);
  iVar3 = 8;
  iStack_40 = 8;
  uStack_44 = 0x6e630a;
  FUN_00450550();
  do {
    iStack_40 = unaff_EBP + -0x14;
    uStack_44 = 0x6e631f;
    puVar2 = (undefined4 *)FUN_00679d86();
    uStack_44 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_40 = iVar3 + *piVar1;
    puStack_48 = (undefined4 *)0x6e6332;
    FUN_004506a3();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x20);
  iStack_40 = unaff_EBP + -0x14;
  uStack_44 = 0x6e6356;
  puVar2 = (undefined4 *)FUN_007d4a9a();
  iStack_40 = 0x6e6361;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)*piVar1,(IBinding *)*puVar2);
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_40 = 0x6e636e;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  iStack_40 = unaff_EBP + -0x14;
  uStack_44 = 0x6e6379;
  puVar2 = (undefined4 *)FUN_007d4a9a();
  iStack_40 = 0x6e6387;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*piVar1 + 4),(IBinding *)*puVar2);
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_40 = 0x6e6394;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  iStack_40 = 0x6e639e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_40 = unaff_EBP + -0x28;
  puVar2 = &DAT_00980690;
  uStack_44 = 0x6e63ac;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_40 = 0x6e63b8;
    FUN_00878dfb();
    puVar2 = extraout_ECX_00;
  }
  iStack_40 = 0xffff0000;
  uStack_44 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_48;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puStack_48 = puVar2;
  FUN_00679e4e(&puStack_48,10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450708(2);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_40 = 0x6e63fd;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_40 = 0x6e6408;
    FUN_00878dfb();
  }
  iStack_40 = unaff_EBP + -0x14;
  uStack_44 = 0x6e6419;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 3;
  iStack_40 = 0x6e6429;
  FUN_0044f5f6();
  iStack_40 = 0xffff0000;
  uStack_44 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_48;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00679e4e(&puStack_48,10);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450708(3);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_40 = 0x6e6470;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_40 = 0x6e647b;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  iStack_40 = 0x6e6495;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_40 = unaff_EBP + -0x28;
  puStack_48 = &DAT_00980690;
  uStack_44 = 0x6e64a3;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_40 = 0x6e64af;
    FUN_00878dfb();
    puStack_48 = extraout_ECX_01;
  }
  iStack_40 = 0xff00ff00;
  uStack_44 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_48;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_00679e4e(&puStack_48,10);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450708(4);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_40 = 0x6e64f9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_40 = 0x6e6504;
    FUN_00878dfb();
  }
  iStack_40 = unaff_EBP + -0x14;
  uStack_44 = 0x6e6510;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 8;
  iStack_40 = 0x6e6520;
  FUN_0044f5f6();
  iStack_40 = 0xff00ff00;
  uStack_44 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_48;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00679e4e(&puStack_48,10);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00450708(5);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_40 = 0x6e6567;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_40 = 0x6e6572;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  iStack_40 = 0x6e658c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_40 = unaff_EBP + -0x28;
  puStack_48 = &DAT_00980690;
  uStack_44 = 0x6e659a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_40 = 0x6e65a6;
    FUN_00878dfb();
    puStack_48 = extraout_ECX_02;
  }
  iStack_40 = 0xff0000ff;
  uStack_44 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_48;
  *(undefined4 *)(unaff_EBP + -4) = 0xb;
  FUN_00679e4e(&puStack_48,10);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00450708(6);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_40 = 0x6e65f0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_40 = 0x6e65fb;
    FUN_00878dfb();
  }
  iStack_40 = unaff_EBP + -0x18;
  uStack_44 = 0x6e6607;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 0xd;
  iStack_40 = 0x6e6617;
  FUN_0044f5f6();
  iStack_40 = 0xff0000ff;
  uStack_44 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_48;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00679e4e(&puStack_48,10);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00450708(7);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_40 = 0x6e665e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_40 = 0x6e6669;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


