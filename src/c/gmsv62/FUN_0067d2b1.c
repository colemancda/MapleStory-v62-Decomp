/* FUN_0067d2b1 - 0x0067d2b1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0067d2b1(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0xb0);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  iVar6 = DAT_00978368;
  if (iVar2 == 2) {
    iVar2 = FUN_00455c59(unaff_EBP + -0x24);
    iVar2 = *(int *)(iVar2 + 4);
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      FUN_0045e7c2(0);
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    iVar3 = FUN_00650dae(iVar2,0x142448,&DAT_0097bc94);
    *(int *)(unaff_EBP + -0x10) = iVar3;
    if (0 < iVar3) {
      uVar7 = *(undefined4 *)(iVar6 + 0x2104);
      *(int *)(unaff_EBP + -0x18) = iVar6 + 0x20fc;
      iVar3 = FUN_00413367(iVar6 + 0x20fc,uVar7);
      uVar7 = *(undefined4 *)(iVar2 + 0x65);
      *(int *)(unaff_EBP + -0x14) = iVar2 + 0x61;
      sVar1 = FUN_0045f084(iVar2 + 0x61,uVar7);
      if (sVar1 < iVar3) {
        iVar3 = FUN_006509a1(*(undefined4 *)(unaff_EBP + -0x10));
        iVar4 = FUN_00650dae(iVar2,0x142446,&DAT_0097bc98);
        *(int *)(unaff_EBP + -0x10) = iVar4;
        if ((0 < iVar4) && (*(int *)(iVar6 + 0x32c4) != 0)) {
          sVar1 = FUN_0045f084(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(iVar2 + 0x65));
          uVar5 = FUN_00413367(iVar3 + 4,*(undefined4 *)(iVar3 + 0xc));
          uVar7 = *(undefined4 *)(iVar6 + 0x2104);
          *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
          iVar2 = FUN_00413367(*(undefined4 *)(unaff_EBP + -0x18),uVar7);
          iVar6 = FUN_006509a1(*(undefined4 *)(unaff_EBP + -0x10));
          iVar6 = FUN_00413367(iVar6 + 0x13c,*(undefined4 *)(iVar6 + 0x144));
          if ((iVar6 * iVar2) / 100 < (int)sVar1 + *(int *)(unaff_EBP + -0x14)) goto LAB_0067d487;
        }
        FUN_0060142b(0x97,0,0);
        iVar2 = *(int *)(unaff_EBP + -0x1c);
        uVar7 = *(undefined4 *)(iVar2 + 0x98);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_00457d37(uVar7);
        FUN_00457d37(0x142448);
        uVar7 = FUN_0067b311();
        FUN_00457cda(CONCAT31((int3)((uint)uVar7 >> 8),(char)uVar7 << 7) | 6);
        FUN_004751b2(unaff_EBP + -0x34);
        iVar6 = FUN_00413367(iVar3 + 0x13c,*(undefined4 *)(iVar3 + 0x144));
        *(int *)(iVar2 + 0x100) = iVar6 * 1000 + *(int *)(unaff_EBP + 8);
        FUN_0067d821(6);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uVar7 = 1;
        *(undefined4 *)(iVar2 + 0x130) = 1;
        FUN_0045ebca();
        goto LAB_0067d489;
      }
    }
  }
LAB_0067d487:
  uVar7 = 0;
LAB_0067d489:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar7;
}


