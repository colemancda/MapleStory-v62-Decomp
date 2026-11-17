/* FUN_006971d8 - 0x006971d8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006971d8(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  undefined4 uStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined1 *puStack_c0;
  undefined4 *puStack_bc;
  
  FUN_00879bb8();
  puStack_bc = &DAT_00980690;
  puStack_c0 = (undefined1 *)0x6971fb;
  FUN_00403191();
  puStack_bc = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_c0 = (undefined1 *)0x697209;
  FUN_00403191();
  puStack_bc = (undefined4 *)0x0;
  puStack_c0 = (undefined1 *)0x0;
  iStack_c4 = unaff_EBP + -0x24;
  iStack_c8 = unaff_EBP + -0x34;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_cc;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_c4 = 0x697255;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  puStack_bc = (undefined4 *)(unaff_EBP + -0x10);
  puStack_c0 = (undefined1 *)0x697264;
  puStack_bc = (undefined4 *)FUN_0041a581();
  if (((int)puStack_bc < 0) && (puStack_bc != (undefined4 *)0x80004002)) {
    puStack_c0 = (undefined1 *)0x697275;
    FUN_00878dfb();
  }
  puStack_bc = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_c0 = (undefined1 *)0x697282;
  puStack_bc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    puStack_c0 = (undefined1 *)0x69728d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_bc = (undefined4 *)(unaff_EBP + -0x34);
  puStack_c0 = (undefined1 *)0x69729a;
  puStack_bc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    puStack_c0 = (undefined1 *)0x6972a5;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_bc = (undefined4 *)(unaff_EBP + -0x24);
  puStack_c0 = (undefined1 *)0x6972b2;
  puStack_bc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    puStack_c0 = (undefined1 *)0x6972bd;
    FUN_00878dfb();
  }
  puStack_bc = &DAT_00980690;
  puStack_c0 = (undefined1 *)0x6972c6;
  FUN_00403191();
  puStack_bc = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  puStack_c0 = (undefined1 *)0x6972d6;
  FUN_00403191();
  puStack_bc = (undefined4 *)0x0;
  puStack_c0 = (undefined1 *)0x0;
  iStack_c4 = unaff_EBP + -0x24;
  iStack_c8 = unaff_EBP + -0x34;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_cc;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_c4 = 0x69731f;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  puStack_bc = (undefined4 *)(unaff_EBP + -0x10);
  puStack_c0 = (undefined1 *)0x69732e;
  puStack_bc = (undefined4 *)FUN_0041a581();
  if (((int)puStack_bc < 0) && (puStack_bc != (undefined4 *)0x80004002)) {
    puStack_c0 = (undefined1 *)0x69733f;
    FUN_00878dfb();
  }
  puStack_bc = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_c0 = (undefined1 *)0x69734c;
  puStack_bc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    puStack_c0 = (undefined1 *)0x697357;
    FUN_00878dfb();
  }
  puStack_bc = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_c0 = (undefined1 *)0x697364;
  puStack_bc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    puStack_c0 = (undefined1 *)0x69736f;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_bc = (undefined4 *)(unaff_EBP + -0x24);
  puStack_c0 = (undefined1 *)0x69737c;
  puStack_bc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    puStack_c0 = (undefined1 *)0x697387;
    FUN_00878dfb();
  }
  puStack_bc = (undefined4 *)0x697392;
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x68) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x88) = 1;
  puStack_bc = (undefined4 *)0xa;
  puStack_c0 = (undefined1 *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x84) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  *(undefined4 *)(unaff_EBP + -0x80) = 1;
  *(undefined4 *)(unaff_EBP + -0x7c) = 1;
  *(undefined4 *)(unaff_EBP + -0x70) = 0xff000000;
  iStack_c4 = 0x6973cd;
  puVar3 = (undefined4 *)FUN_00679e4e();
  puStack_bc = (undefined4 *)0x6973d6;
  FUN_00408b49();
  puStack_bc = (undefined4 *)0x6973de;
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x78) = *puVar3;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_bc = (undefined4 *)0x6973f1;
    FUN_004030b1();
  }
  puStack_bc = (undefined4 *)0x6973fc;
  FUN_0045621e();
  *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0xb4;
  *(undefined4 *)(unaff_EBP + -0x98) = 0xf;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 1;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  puStack_bc = (undefined4 *)0xb8;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_c0 = (undefined1 *)0x69743b;
  iVar4 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar4 == 0) {
    puStack_bc = (undefined4 *)0x0;
  }
  else {
    puStack_bc = (undefined4 *)0x69744d;
    puStack_bc = (undefined4 *)FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_c0 = (undefined1 *)0x697461;
  FUN_0045e196();
  puStack_bc = (undefined4 *)0xffffffff;
  puStack_c0 = &DAT_00978474;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0x1e;
  iStack_c4 = 0x69747a;
  FUN_00414edd();
  puStack_bc = (undefined4 *)(unaff_EBP + -0x8c);
  puStack_c0 = (undefined1 *)0xf;
  iStack_c4 = 0xdb;
  iStack_c8 = 0x32;
  uStack_cc = 0x19;
  (**(code **)(**(int **)(extraout_ECX + 0x98) + 8))();
  iVar4 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar4 != 0) {
    FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0045e196();
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xc;
  FUN_00434e21();
  (**(code **)(**(int **)(extraout_ECX + 0xa0) + 8))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xa0) + 4) + 0x1c))();
  iVar4 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar4 != 0) {
    FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0045e1ff();
  (**(code **)(**(int **)(extraout_ECX + 0x90) + 0x20))();
  FUN_00499fb8();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00402676();
  iVar4 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar4 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xa8) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xa8) + 4) + 0x1c))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00402676();
  iVar4 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (iVar4 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xb0) + 0x20))();
  iStack_144 = 0x697682;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_144 = unaff_EBP + -0x34;
  iStack_148 = 0x697690;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_144 = 0x69769c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_144 = 0x6976a6;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_144 = unaff_EBP + -0x24;
  puStack_150 = &DAT_00980690;
  iStack_148 = 0x6976b4;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_144 = 0x6976c0;
    FUN_00878dfb();
    puStack_150 = extraout_ECX_00;
  }
  iStack_144 = 0;
  iStack_148 = unaff_EBP + -0x34;
  iStack_14c = unaff_EBP + -0x24;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_150;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00679e4e(&puStack_150,0xab5);
  iVar4 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_148 = 0x697709;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_144 = 0x697718;
  iVar4 = FUN_0041a581();
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    iStack_144 = 0x697729;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_144 = 0x697736;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_144 = 0x697741;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_144 = 0x69774e;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_144 = 0x697759;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_144 = 0x697766;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_144 = 0x697771;
    FUN_00878dfb();
  }
  iStack_144 = 0x697777;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_144 = unaff_EBP + -0x24;
  iStack_148 = 0x697785;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_144 = 0x697791;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_144 = 0x69779b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_144 = unaff_EBP + -0x34;
  puVar3 = &DAT_00980690;
  iStack_148 = 0x6977a9;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_144 = 0x6977b5;
    FUN_00878dfb();
    puVar3 = extraout_ECX_01;
  }
  iStack_144 = 0;
  iStack_148 = unaff_EBP + -0x24;
  iStack_14c = unaff_EBP + -0x34;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_150;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_150 = puVar3;
  FUN_00679e4e(&puStack_150,0xab6);
  iVar4 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_148 = 0x6977fe;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_144 = 0x697810;
  iVar4 = FUN_0041a581();
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    iStack_144 = 0x697821;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_144 = 0x69782e;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_144 = 0x697839;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_144 = 0x697846;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_144 = 0x697851;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_144 = 0x69785e;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_144 = 0x697869;
    FUN_00878dfb();
  }
  iStack_144 = unaff_EBP + -0x10;
  iStack_148 = 0x697874;
  piVar5 = (int *)FUN_007d4a9a();
  piVar5 = (int *)*piVar5;
  piVar1 = *(int **)(extraout_ECX + 0x84);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (piVar1 != piVar5) {
    *(int **)(extraout_ECX + 0x84) = piVar5;
    FUN_0045e787();
    if (piVar1 != (int *)0x0) {
      iStack_144 = 0x69789d;
      (**(code **)(*piVar1 + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_144 = 0x6978ae;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  iStack_144 = unaff_EBP + -0x14;
  iStack_148 = 0x6978b9;
  puVar3 = (undefined4 *)FUN_007d4a9a();
  iStack_144 = 0x6978c8;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x88),
             (IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_144 = 0x6978d5;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  iStack_144 = 0x6978e2;
  FUN_008164fd();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00457a09();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


