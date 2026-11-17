/* FUN_005eaf3e - 0x005eaf3e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005eaf3e(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  cVar3 = FUN_00433bfa(0);
  if (cVar3 == '\0') {
    if (*(int *)(extraout_ECX + 0xe0) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar4 = FUN_00432a57();
    if (iVar4 == 0) {
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xe0),
                 (IBinding *)0x0);
    }
  }
  if (*(int *)(extraout_ECX + 0x124) == 0) goto LAB_005eb2a5;
  if (*(int *)(*(int *)(extraout_ECX + 0x98) + 0x9c) != 0) {
    if (*(int *)(extraout_ECX + 0x7c) == 0) goto LAB_005eb2a5;
    FUN_0043fd71();
  }
  iVar4 = *(int *)(extraout_ECX + 0x80);
  iVar1 = *(int *)(extraout_ECX + 0x84);
  uVar5 = FUN_007f1573();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
  FUN_005ea7a3(*(undefined4 *)((-(uint)(iVar4 != 0) & iVar4 - 0xcU) + 0x140),0);
  if (*(int *)((-(uint)(iVar1 != 0) & iVar1 - 0xcU) + 0x18) != 0) {
    if (0 < *(int *)(extraout_ECX + 0xd0)) {
      *(int *)(extraout_ECX + 0xd0) = *(int *)(extraout_ECX + 0xd0) + -0x1e;
    }
    if (*(int *)(extraout_ECX + 0x88) == 0) {
      iVar4 = *(int *)(*(int *)(extraout_ECX + 0x98) + 0xc);
      if (iVar4 == 0) {
LAB_005eb034:
        iVar4 = FUN_005eb2b4(unaff_EBP + -0x14,unaff_EBP + -0x10);
        if (iVar4 == 0) goto LAB_005eb054;
      }
      else {
        if (*(int *)(unaff_EBP + -0x14) != -1) {
          if (iVar4 != 0) goto LAB_005eb054;
          goto LAB_005eb034;
        }
        FUN_005eb2b4(unaff_EBP + -0x14,unaff_EBP + -0x10);
      }
      FUN_005eb840(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10));
    }
  }
LAB_005eb054:
  FUN_005ea2dd();
  FUN_0046f87c(0);
  if (*(int *)(extraout_ECX + 0xd8) != 0) {
    if ((*(int *)(extraout_ECX + 0xdc) == 0) && (*(int *)(extraout_ECX + 0x18) == 0)) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x14) = 0xffffff;
    }
    if (*(int *)(extraout_ECX + 0xd8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = *(int **)(extraout_ECX + 0xd8);
    iVar4 = (**(code **)(*piVar2 + 0xe0))(piVar2,*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar2,&DAT_00963df8);
    }
  }
  if (*(int *)(*(int *)(extraout_ECX + 0x98) + 0x48) != 0) {
    FUN_005ec979();
  }
  if ((*(int *)(extraout_ECX + 0x98) == 0) || (*(int *)(*(int *)(extraout_ECX + 0x98) + 0x9c) == 0))
  {
    iVar4 = FUN_005eac7f(0);
    *(int *)(extraout_ECX + 0xa8) = *(int *)(extraout_ECX + 0xa8) + -0x1e;
    if (*(int *)(extraout_ECX + 0xa8) < 1) {
      iVar1 = *(int *)(extraout_ECX + 0xac);
      iVar6 = *(int *)((-(uint)(*(int *)(extraout_ECX + 0xa4) != 0) &
                       *(int *)(extraout_ECX + 0xa4) - 0x10U) + 4);
      *(uint *)(extraout_ECX + 0xa4) = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
      iVar6 = FUN_005ea7e8();
      if (iVar6 == 0) {
        if (*(int *)(extraout_ECX + 0xa4) == 0) {
          *(undefined4 *)(extraout_ECX + 0xa4) = *(undefined4 *)(iVar1 + iVar4 * 0x14 + 0xc);
        }
      }
      else if (*(int *)(extraout_ECX + 0xa4) == 0) {
        *(undefined4 *)(extraout_ECX + 0xa0) = 0xffffffff;
        *(undefined4 *)(extraout_ECX + 0xb0) = 0;
        FUN_005ea930();
        goto LAB_005eb1f0;
      }
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(extraout_ECX + 0xa4) + 4);
      FUN_004031b7(1,3);
      iVar4 = *(int *)(extraout_ECX + 0xd4);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)(extraout_ECX + 0xd4);
      iVar4 = *piVar2;
      *(int **)(unaff_EBP + -0x14) = piVar2;
      iVar4 = (**(code **)(iVar4 + 0x10c))
                        (piVar2,*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(extraout_ECX + 0xa8) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x10);
    }
  }
LAB_005eb1f0:
  uVar5 = *(undefined4 *)(extraout_ECX + 0x130);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0x130;
  *(undefined4 *)(extraout_ECX + 0x138) = uVar5;
  *(undefined4 *)(extraout_ECX + 0x13c) = *(undefined4 *)(extraout_ECX + 0x134);
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iVar4 = FUN_00402e32(unaff_EBP + -0x24,&DAT_00980690);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  iVar4 = *(int *)(extraout_ECX + 0x80);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(extraout_ECX + 0x80);
  iVar4 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar4 = (**(code **)(iVar4 + 0x8c))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x14),extraout_ECX + 0x134,0,0,0,0,0,0,
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
LAB_005eb2a5:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


