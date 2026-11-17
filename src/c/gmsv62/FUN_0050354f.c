/* FUN_0050354f - 0x0050354f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0050354f(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  FUN_00879bb8();
  iVar1 = *(int *)(DAT_00978140 + 8);
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  *(int *)(unaff_EBP + -0x30) = iVar1;
  if (iVar1 != 0) {
    FUN_004031b7(0,3);
    iVar1 = *(int *)(extraout_ECX + 0x728);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00425067(unaff_EBP + -0x18,unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x4c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    puVar10 = *(undefined4 **)(extraout_ECX + 0x744);
    iVar1 = extraout_ECX;
    if (puVar10 != (undefined4 *)0x0) {
      while( true ) {
        iVar3 = *(int *)((-(uint)(puVar10 != (undefined4 *)0x0) & (uint)(puVar10 + -4)) + 4);
        *(undefined4 *)(unaff_EBP + -0x3c) = *puVar10;
        uVar5 = puVar10[1];
        *(uint *)(unaff_EBP + -0x1c) = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
        *(undefined4 *)(unaff_EBP + -0x38) = uVar5;
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar1 + 0x730);
        piVar2 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (piVar2 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar2 = *(int **)(unaff_EBP + -0x18);
        }
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x3c) + 0xed;
        iVar1 = *piVar2;
        *(int **)(unaff_EBP + -0x2c) = piVar2;
        iVar1 = (**(code **)(iVar1 + 0x80))
                          (piVar2,*(undefined4 *)(unaff_EBP + -0x28),
                           *(int *)(unaff_EBP + -0x38) + 0x6e,*(undefined4 *)(unaff_EBP + -0x24),
                           *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50));
        if (iVar1 < 0) {
          FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iVar1 = FUN_00402bc3(unaff_EBP + -0x5c);
        if (iVar1 < 0) {
          FUN_00878dfb(iVar1);
        }
        if (*(int *)(unaff_EBP + -0x1c) == 0) break;
        puVar10 = *(undefined4 **)(unaff_EBP + -0x1c);
        iVar1 = *(int *)(unaff_EBP + -0x20);
      }
      iVar1 = *(int *)(unaff_EBP + -0x20);
    }
    *(int *)(unaff_EBP + -0x24) = iVar1 + 0x738;
    FUN_004cdc72();
    FUN_00486ada(unaff_EBP + -0x10);
    bVar12 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (bVar12) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00429328(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar3 = FUN_00404a94();
    iVar4 = FUN_00404a94();
    *(int *)(unaff_EBP + -0x3c) = iVar4 - iVar3;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar3 = FUN_00404abb();
    iVar4 = FUN_00404abb();
    *(int *)(unaff_EBP + -0x38) = iVar4 - iVar3;
    FUN_00403191(&DAT_00980690);
    iVar3 = *(int *)(iVar1 + 0x734);
    piVar2 = (int *)(iVar1 + 0x734);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = *piVar2;
    *(int *)(unaff_EBP + -0x30) = iVar1;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = *piVar2;
    *(int *)(unaff_EBP + -0x2c) = iVar1;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = *piVar2;
    *(int *)(unaff_EBP + -0x28) = iVar1;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = *piVar2;
    *(int *)(unaff_EBP + -0x1c) = iVar1;
    *(int *)(unaff_EBP + -0x34) = iVar1;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = unaff_EBP + -0x5c;
    uVar5 = FUN_0040e53d(iVar1);
    uVar6 = FUN_0040e48b(uVar5);
    uVar14 = 0;
    uVar13 = 0;
    uVar7 = FUN_0040e53d(0,0,uVar6);
    uVar8 = FUN_0040e48b(uVar7);
    FUN_00503995(*(int *)(unaff_EBP + -0x3c) + 0xed,*(int *)(unaff_EBP + -0x38) + 0x6e,
                 *(undefined4 *)(unaff_EBP + -0x34),0xfffffffe,uVar8,uVar7,uVar13,uVar14,uVar6,uVar5
                 ,iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x5c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    FUN_00503a24(unaff_EBP + -0x3c);
    if (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x74c) != 0) {
      uVar9 = *(uint *)(DAT_00978140 + 0x30);
      while (uVar9 != 0) {
        iVar1 = *(int *)(*(int *)(uVar9 + 4) + 0x10);
        iVar3 = *(int *)((-(uint)(uVar9 != 0) & uVar9 - 0x10) + 4);
        uVar9 = iVar3 + 0x10U & -(uint)(iVar3 != 0);
        *(uint *)(unaff_EBP + -0x1c) = uVar9;
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x524) == 0)) {
          puVar10 = (undefined4 *)FUN_00486ada(unaff_EBP + -0x34);
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                     (IBinding *)*puVar10);
          FUN_004125d9();
          FUN_00424df4();
          iVar1 = FUN_00404a94();
          FUN_00424df4();
          iVar3 = FUN_00404a94();
          *(int *)(unaff_EBP + -0x3c) = iVar3 - iVar1;
          FUN_00424df4();
          iVar1 = FUN_00404abb();
          FUN_00424df4();
          iVar3 = FUN_00404abb();
          *(int *)(unaff_EBP + -0x38) = iVar3 - iVar1;
          FUN_00424aee(&DAT_00980690);
          iVar3 = *piVar2;
          iVar1 = unaff_EBP + -0x5c;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_004115d9(iVar1);
          uVar5 = FUN_0040e53d();
          FUN_004115d9(uVar5);
          uVar6 = FUN_0040e48b();
          uVar15 = 0;
          uVar14 = 0;
          FUN_004115d9(0,0,uVar6);
          uVar7 = FUN_0040e53d();
          FUN_004115d9(uVar7);
          uVar8 = FUN_0040e48b();
          uVar13 = 0xfffffffe;
          iVar4 = *(int *)(unaff_EBP + -0x38) + 0x6e;
          iVar11 = *(int *)(unaff_EBP + -0x3c) + 0xed;
          FUN_004115d9(iVar11,iVar4,iVar3,0xfffffffe,uVar8);
          FUN_00503995(iVar11,iVar4,iVar3,uVar13,uVar8,uVar7,uVar14,uVar15,uVar6,uVar5,iVar1);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x5c);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          FUN_00503a24(unaff_EBP + -0x3c);
          uVar9 = *(uint *)(unaff_EBP + -0x1c);
        }
      }
    }
    FUN_004125d9();
    FUN_004125d9();
    FUN_004125e6();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


