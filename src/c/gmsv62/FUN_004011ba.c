/* FUN_004011ba - 0x004011ba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004011ba(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_84;
  int *piStack_80;
  undefined1 *puStack_7c;
  int iStack_78;
  undefined4 *puVar4;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff90;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_78 = 0x4011ea;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_78 = 0x4011f7;
  FUN_00403191();
  iStack_78 = 0;
  puStack_7c = (undefined1 *)(unaff_EBP + -0x40);
  piStack_80 = (int *)(unaff_EBP + -0x60);
  *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_84;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_84 = extraout_ECX;
  FUN_004059fd(&DAT_00973a4c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00405a1d();
  FUN_00402660();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00404a02(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_7c = (undefined1 *)0x40123f;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  iStack_78 = 0x40124e;
  iVar2 = FUN_00404b30();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_78 = 0x40125f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_78 = 0x40126c;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_78 = 0x401277;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_78 = 0x401284;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_78 = 0x40128f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_78 = 0x40129c;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_78 = 0x4012a7;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    iStack_78 = 0x4012b6;
    FUN_00878dfb();
  }
  iStack_78 = 0x4012c2;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_78 = 0x4012cf;
  FUN_004035f5();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_78 = 0x4012e0;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  iVar2 = 0;
  iStack_78 = 0x4012ee;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  do {
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      iStack_78 = 0x401305;
      FUN_00878dfb();
    }
    piStack_80 = *(int **)(unaff_EBP + -0x18);
    iStack_78 = unaff_EBP + -0x50;
    puStack_7c = (undefined1 *)0x1;
    puStack_84 = (undefined4 *)0x401318;
    iVar3 = (**(code **)(*piStack_80 + 0xc))();
    if (iVar3 != 0) {
      iStack_78 = 0x40143d;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)&DAT_00973a64,
                 *(IBinding **)(unaff_EBP + -0x14));
      puStack_7c = &stack0xffffff8c;
      *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff8c;
      iStack_78 = 0x43b;
      piStack_80 = (int *)0x401455;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_78 = 0x401461;
      FUN_0040263d();
      iStack_78 = unaff_EBP + -0x70;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_7c = (undefined1 *)0x401470;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      DAT_00973a5c = FUN_00403213();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_78 = 0x40148d;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_78 = 0x401498;
        FUN_00878dfb();
      }
      puStack_7c = &stack0xffffff8c;
      *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff8c;
      iStack_78 = 0xe93;
      piStack_80 = (int *)0x4014ab;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_78 = 0x4014b7;
      FUN_0040263d();
      iStack_78 = unaff_EBP + -0x70;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_7c = (undefined1 *)0x4014c6;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      DAT_00973a58 = FUN_00403213();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_78 = 0x4014e3;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_78 = 0x4014ee;
        FUN_00878dfb();
      }
      puStack_7c = &stack0xffffff8c;
      *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff8c;
      iStack_78 = 0xe94;
      piStack_80 = (int *)0x401501;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_78 = 0x40150d;
      FUN_0040263d();
      iStack_78 = unaff_EBP + -0x70;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_7c = (undefined1 *)0x40151c;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      DAT_00973a54 = FUN_00403213();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_78 = 0x401539;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_78 = 0x401544;
        FUN_00878dfb();
      }
      iStack_78 = 0x40154a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
      iStack_78 = unaff_EBP + -0x60;
      puStack_7c = (undefined1 *)0x401554;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_78 = 0x401560;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_78 = 0x40156a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      iStack_78 = unaff_EBP + -0x40;
      puVar4 = &DAT_00980690;
      puStack_7c = (undefined1 *)0x401574;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_78 = 0x401580;
        FUN_00878dfb();
        puVar4 = extraout_ECX_01;
      }
      iStack_78 = 0;
      puStack_7c = (undefined1 *)(unaff_EBP + -0x60);
      piStack_80 = (int *)(unaff_EBP + -0x40);
      *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_84;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      puStack_84 = puVar4;
      FUN_004059fd(&DAT_00973a48);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_00405a1d();
      FUN_00402660();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_00404a02(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      puStack_7c = (undefined1 *)0x4015ca;
      uVar1 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x24) = uVar1;
      iStack_78 = 0x4015db;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        iStack_78 = 0x4015ec;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_78 = 0x4015f9;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_78 = 0x401604;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_78 = 0x401611;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_78 = 0x40161c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_78 = 0x401629;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_78 = 0x401634;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_78 = 0x401641;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_78 = 0x40164c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        iStack_78 = 0x40165d;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
        iStack_78 = 0x40166e;
        (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        iStack_78 = 0x40167f;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff8c;
    iStack_78 = *(undefined4 *)(unaff_EBP + -0x48);
    puStack_7c = (undefined1 *)0x40132e;
    FUN_00402e8e();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_78 = 0x40133a;
    FUN_0040263d();
    iStack_78 = unaff_EBP + -0x40;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_7c = (undefined1 *)0x401349;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if ((*(short *)(unaff_EBP + -0x40) == 0) ||
       ((*(short *)(unaff_EBP + -0x40) == 8 && (**(short **)(unaff_EBP + -0x38) == 0)))) {
LAB_00401381:
      iStack_78 = 0x40138a;
      FUN_00403191();
      iVar2 = iVar2 + -1;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_7c = (undefined1 *)0x40139a;
      iStack_78 = iVar2;
      FUN_004031b7();
      iStack_78 = unaff_EBP + -0x60;
      *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_7c;
      piStack_80 = *(int **)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_84 = (undefined4 *)0x4013b4;
      puStack_7c = extraout_ECX_00;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_80 = (int *)0x4013c0;
      FUN_0040263d();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      piStack_80 = (int *)0x4013cb;
      FUN_00404992();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_78 = 0x4013d8;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_78 = 0x4013e3;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_78 = 0x4013f0;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_78 = 0x4013fb;
        FUN_00878dfb();
      }
    }
    else {
      iStack_78 = 0;
      puStack_7c = (undefined1 *)(unaff_EBP + -0x40);
      piStack_80 = (int *)(unaff_EBP + -0x40);
      puStack_84 = (undefined4 *)0x401375;
      iVar3 = FUN_00402bed();
      if (iVar3 < 0) goto LAB_00401381;
      iVar2 = *(int *)(unaff_EBP + -0x38);
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_78 = 0x401408;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_78 = 0x401413;
      FUN_00878dfb();
    }
    iStack_78 = 0x40141c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_78 = 0x40142b;
      FUN_00878dfb();
    }
  } while( true );
}


