/* FUN_0081de58 - 0x0081de58 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0081de58(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar8;
  undefined4 uVar9;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  FUN_0081622a();
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7();
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(extraout_ECX + 0x578);
  piVar8 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar8 == (int *)0x0) {
    FUN_00878dfb();
    piVar8 = *(int **)(unaff_EBP + 8);
  }
  iVar3 = *piVar8;
  *(int **)(unaff_EBP + -0x1c) = piVar8;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  FUN_004031b7();
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(extraout_ECX + 0x57c);
  piVar8 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar8 == (int *)0x0) {
    FUN_00878dfb();
    piVar8 = *(int **)(unaff_EBP + 8);
  }
  iVar3 = *piVar8;
  *(int **)(unaff_EBP + -0x1c) = piVar8;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x1c));
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 **)(unaff_EBP + -0x34) = &stack0xffffff68;
  FUN_00679e4e(&stack0xffffff68,0x3b2);
  iVar3 = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004115d9(iVar3);
  FUN_00404e7f(iVar3);
  iVar3 = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00412348(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00416f14();
  FUN_004027b3();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  FUN_004027eb();
  iVar3 = extraout_ECX;
  if (*(int *)(extraout_ECX + 0x570) != -1) {
    *(undefined4 *)(unaff_EBP + -0x1c) =
         *(undefined4 *)(*(int *)(extraout_ECX + 0x588) + *(int *)(extraout_ECX + 0x570) * 0xc + 8);
    FUN_004125f3();
    *(undefined1 **)(unaff_EBP + -0x34) = &stack0xffffff68;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00679e4e(&stack0xffffff68,0x3b2);
    iVar3 = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_004115d9(iVar3);
    FUN_00404e7f(iVar3);
    iVar3 = unaff_EBP + -0x54;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00412348(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_00416f14();
    FUN_004027b3();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_004027eb();
    FUN_004031b7(0xff);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb();
    }
    piVar8 = *(int **)(unaff_EBP + 8);
    *(int **)(unaff_EBP + -0x20) = piVar8;
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x1c);
    iVar4 = FUN_00404abb();
    iVar5 = FUN_00404abb();
    iVar6 = FUN_00404a94();
    iVar7 = FUN_00404a94();
    iVar3 = *piVar8;
    *(int *)(unaff_EBP + -0x30) = (0xd - iVar6) + iVar7;
    iVar3 = (**(code **)(iVar3 + 0x80))
                      (*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x30),
                       (0x23 - iVar4) + iVar5,*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x20));
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    FUN_004125d9();
    FUN_004125e6();
    iVar3 = *(int *)(unaff_EBP + -0x24);
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  while ((iVar4 = *(int *)(iVar3 + 0x584), iVar4 != 0 &&
         (*(uint *)(unaff_EBP + -0x1c) < *(uint *)(iVar4 + -4)))) {
    piVar8 = (int *)(*(int *)(unaff_EBP + -0x18) + iVar4);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
               *(IBinding **)(*(int *)(iVar3 + 0x580) + piVar8[2] * 4));
    FUN_004031b7(0xff);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x14);
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + 8);
    *(int **)(unaff_EBP + -0x20) = piVar1;
    *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x14);
    iVar4 = FUN_0040eed0();
    iVar3 = piVar8[1];
    iVar5 = FUN_0040eea9();
    iVar3 = (**(code **)(*piVar1 + 0x80))
                      (*(undefined4 *)(unaff_EBP + -0x20),(*piVar8 - iVar5) + 0xd,
                       (iVar3 - iVar4) + 0x23,*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x20));
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x44;
    iVar3 = *(int *)(unaff_EBP + -0x24);
  }
  if (*(int *)(iVar3 + 0x574) != -1) {
    *(undefined4 *)(unaff_EBP + -0x1c) =
         *(undefined4 *)(*(int *)(iVar3 + 0x574) * 0x44 + *(int *)(iVar3 + 0x584) + 0x28);
    FUN_004125f3();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    cVar2 = FUN_004115ef();
    if (cVar2 == '\0') {
      *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff68;
      FUN_00679e4e(&stack0xffffff68,0x3b2);
      iVar3 = unaff_EBP + -0x30;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_004115d9(iVar3);
      FUN_00404e7f(iVar3);
      iVar3 = unaff_EBP + -0x54;
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      FUN_0040263d(iVar3);
      FUN_004048a4(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      FUN_00412348(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      FUN_00416f14();
      FUN_004027b3();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      FUN_004027eb();
      FUN_004031b7(0xff);
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        FUN_00878dfb();
      }
      uVar9 = *(undefined4 *)(unaff_EBP + -0x1c);
      iVar3 = FUN_00404abb(uVar9);
      iVar4 = FUN_00404abb();
      iVar4 = (0x23 - iVar3) + iVar4;
      iVar3 = FUN_00404a94(iVar4);
      iVar5 = FUN_00404a94();
      iVar5 = (0xd - iVar3) + iVar5;
      FUN_004115d9(iVar5);
      FUN_00470739(iVar5,iVar4,uVar9);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      FUN_004125d9();
    }
    FUN_004125e6();
  }
  FUN_004125e6();
  FUN_004125d9();
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


