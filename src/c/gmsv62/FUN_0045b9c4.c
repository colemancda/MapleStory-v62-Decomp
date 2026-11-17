/* FUN_0045b9c4 - 0x0045b9c4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045b9c4(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  undefined4 *puVar5;
  
  FUN_00879bb8();
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x7c) = 1;
  *(undefined4 *)(unaff_EBP + -0x88) = 1;
  *(undefined4 *)(unaff_EBP + -0x84) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x68) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x80) = 1;
  *(undefined4 *)(unaff_EBP + -0x70) = 0xff000000;
  FUN_00679e4e();
  FUN_00402f41();
  FUN_00402fa6();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 != 0) {
    FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e196();
  *(undefined4 *)(unaff_EBP + -0x5c) = 0x20;
  FUN_00414edd();
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 8))();
  FUN_0045621e();
  *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0xb4;
  *(undefined4 *)(unaff_EBP + -0x98) = 0xe;
  *(undefined4 *)(unaff_EBP + -0x94) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x88) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x88) + 4) + 0x1c))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x90) + 0x20))();
  iStack_110 = 0x45bbed;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_110 = unaff_EBP + -0x44;
  iStack_114 = 0x45bbfb;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_110 = 0x45bc07;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_110 = 0x45bc11;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_110 = unaff_EBP + -0x30;
  puStack_11c = &DAT_00980690;
  iStack_114 = 0x45bc1f;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_110 = 0x45bc2b;
    FUN_00878dfb();
    puStack_11c = extraout_ECX_00;
  }
  iStack_110 = 0;
  iStack_114 = unaff_EBP + -0x44;
  iStack_118 = unaff_EBP + -0x30;
  *(undefined4 ***)(unaff_EBP + -0x34) = &puStack_11c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00679e4e(&puStack_11c,0xab3);
  iVar2 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_114 = 0x45bc74;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
  iStack_110 = 0x45bc86;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_110 = 0x45bc97;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_110 = 0x45bca4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_110 = 0x45bcaf;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_110 = 0x45bcbc;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_110 = 0x45bcc7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_110 = 0x45bcd4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_110 = 0x45bcdf;
    FUN_00878dfb();
  }
  iStack_110 = 0x45bce5;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_110 = unaff_EBP + -0x30;
  iStack_114 = 0x45bcf3;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_110 = 0x45bcff;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_110 = 0x45bd09;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_110 = unaff_EBP + -0x44;
  puVar5 = &DAT_00980690;
  iStack_114 = 0x45bd17;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_110 = 0x45bd23;
    FUN_00878dfb();
    puVar5 = extraout_ECX_01;
  }
  iStack_110 = 0;
  iStack_114 = unaff_EBP + -0x30;
  iStack_118 = unaff_EBP + -0x44;
  *(undefined4 ***)(unaff_EBP + -0x34) = &puStack_11c;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_11c = puVar5;
  FUN_00679e4e(&puStack_11c,0xab4);
  iVar2 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_114 = 0x45bd6c;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
  iStack_110 = 0x45bd7e;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_110 = 0x45bd8f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_110 = 0x45bd9c;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_110 = 0x45bda7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_110 = 0x45bdb4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_110 = 0x45bdbf;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_110 = 0x45bdcc;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_110 = 0x45bdd7;
    FUN_00878dfb();
  }
  iStack_110 = unaff_EBP + -0x10;
  iStack_114 = 0x45bde2;
  puVar5 = (undefined4 *)FUN_007d4a9a();
  iStack_110 = 0x45bdf1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xa4),
             (IBinding *)*puVar5);
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_110 = 0x45bdfe;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  iStack_110 = unaff_EBP + -0x10;
  iStack_114 = 0x45be09;
  piVar4 = (int *)FUN_007d4a9a();
  piVar4 = (int *)*piVar4;
  piVar1 = *(int **)(extraout_ECX + 0xa8);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (piVar1 != piVar4) {
    *(int **)(extraout_ECX + 0xa8) = piVar4;
    FUN_0045e787();
    if (piVar1 != (int *)0x0) {
      iStack_110 = 0x45be32;
      (**(code **)(*piVar1 + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_110 = 0x45be43;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  iStack_110 = 0x45be4d;
  FUN_008164fd();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00457a09();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


