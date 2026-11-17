/* FUN_0067d49a - 0x0067d49a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0067d49a(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int extraout_ECX;
  uint uVar9;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0xb0);
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  iVar4 = DAT_00978368;
  if (iVar2 != 2) goto LAB_0067d811;
  iVar2 = FUN_00455c59(unaff_EBP + -0x30);
  uVar8 = *(undefined4 *)(iVar2 + 4);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar8;
  FUN_0045e4a2();
  *(int *)(unaff_EBP + -0x1c) = iVar4 + 0x2114;
  iVar2 = FUN_00650dae(uVar8,0x142449,&DAT_0097bc9c);
  if (iVar2 < 1) goto LAB_0067d811;
  iVar2 = FUN_006509a1(iVar2);
  uVar3 = FUN_00413367(iVar2 + 0x1c,*(undefined4 *)(iVar2 + 0x24));
  uVar8 = *(undefined4 *)(iVar2 + 0x60);
  *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
  uVar3 = FUN_00413367(iVar2 + 0x58,uVar8);
  uVar8 = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
  uVar3 = FUN_00413367(iVar2 + 0x4c,uVar8);
  uVar8 = *(undefined4 *)(iVar2 + 0x48);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
  uVar3 = FUN_00413367(iVar2 + 0x40,uVar8);
  uVar8 = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iVar4 = FUN_00413367(iVar2 + 0x28,uVar8);
  uVar8 = *(undefined4 *)(iVar2 + 0x24);
  *(uint *)(unaff_EBP + -0x18) =
       (uint)(iVar4 != 0) + (uint)(*(int *)(unaff_EBP + -0x18) != 0) +
       (uint)(*(int *)(unaff_EBP + -0x10) != 0) + (uint)(*(int *)(unaff_EBP + -0x20) != 0) +
       (uint)(*(int *)(unaff_EBP + -0x24) != 0);
  iVar4 = FUN_00413367(iVar2 + 0x1c,uVar8);
  iVar5 = FUN_00413367(iVar2 + 0x58,*(undefined4 *)(iVar2 + 0x60));
  uVar3 = FUN_00413367(iVar2 + 0x4c,*(undefined4 *)(iVar2 + 0x54));
  uVar8 = *(undefined4 *)(iVar2 + 0x48);
  *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
  uVar3 = FUN_00413367(iVar2 + 0x40,uVar8);
  uVar8 = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
  iVar6 = FUN_00413367(iVar2 + 0x28,uVar8);
  uVar9 = (uint)(iVar6 != 0) + (-(uint)(*(int *)(unaff_EBP + -0x24) != 0) & 2) +
          (-(uint)(*(int *)(unaff_EBP + -0x20) != 0) & 3) + (-(uint)(iVar5 != 0) & 4) +
          (-(uint)(iVar4 != 0) & 5);
  if (uVar9 == 0) {
    iVar4 = FUN_004133f0();
  }
  else {
    uVar7 = FUN_004133f0();
    iVar4 = uVar7 % uVar9 + 1;
  }
  iVar5 = 0;
  iVar6 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (0 < *(int *)(unaff_EBP + -0x18)) {
    do {
      iVar5 = iVar5 + 1 + iVar6;
      if (iVar4 <= iVar5) break;
      iVar6 = iVar6 + 1;
      *(int *)(unaff_EBP + -0x10) = iVar6;
    } while (iVar6 < *(int *)(unaff_EBP + -0x18));
  }
  iVar4 = FUN_00413367(iVar2 + 0x1c,*(undefined4 *)(iVar2 + 0x24));
  if (iVar4 == 0) {
    iVar4 = *(int *)(unaff_EBP + -0x1c);
LAB_0067d67a:
    iVar5 = FUN_00413367(iVar2 + 0x58,*(undefined4 *)(iVar2 + 0x60));
    if (iVar5 != 0) {
      iVar5 = FUN_00413367(iVar2 + 0x58,*(undefined4 *)(iVar2 + 0x60));
      iVar6 = FUN_00662a40(*(undefined4 *)(unaff_EBP + -0x14));
      if (iVar6 < iVar5) {
        iVar5 = 3;
        if (2 < *(int *)(unaff_EBP + -0x10)) goto LAB_0067d762;
      }
    }
    iVar5 = FUN_00413367(iVar2 + 0x4c,*(undefined4 *)(iVar2 + 0x54));
    if (iVar5 != 0) {
      iVar5 = FUN_00413367(iVar2 + 0x4c,*(undefined4 *)(iVar2 + 0x54));
      iVar6 = FUN_006629cf(*(undefined4 *)(unaff_EBP + -0x14));
      if (iVar6 < iVar5) {
        iVar5 = 2;
        if (1 < *(int *)(unaff_EBP + -0x10)) goto LAB_0067d762;
      }
    }
    iVar5 = FUN_00413367(iVar2 + 0x40,*(undefined4 *)(iVar2 + 0x48));
    if (iVar5 != 0) {
      uVar3 = FUN_00413367(iVar4 + 0x9c,*(undefined4 *)(iVar4 + 0xa4));
      uVar8 = *(undefined4 *)(iVar2 + 0x48);
      *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
      iVar5 = FUN_00413367(iVar2 + 0x40,uVar8);
      if (*(int *)(unaff_EBP + -0x24) < iVar5) {
        iVar5 = 1;
        if (0 < *(int *)(unaff_EBP + -0x10)) goto LAB_0067d762;
      }
    }
    iVar5 = FUN_00413367(iVar2 + 0x28,*(undefined4 *)(iVar2 + 0x30));
    if (iVar5 != 0) {
      iVar4 = FUN_00413367(iVar4 + 0x3c,*(undefined4 *)(iVar4 + 0x44));
      iVar5 = FUN_00413367(iVar2 + 0x28,*(undefined4 *)(iVar2 + 0x30));
      if ((iVar4 < iVar5) && (iVar5 = 0, -1 < *(int *)(unaff_EBP + -0x10))) goto LAB_0067d762;
    }
    iVar5 = *(int *)(unaff_EBP + -0x10);
  }
  else {
    uVar8 = FUN_00413367(iVar2 + 0x1c,*(undefined4 *)(iVar2 + 0x24));
    iVar4 = *(int *)(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -0x24) = uVar8;
    iVar5 = FUN_00662964(*(undefined4 *)(unaff_EBP + -0x14));
    if ((*(int *)(unaff_EBP + -0x24) <= iVar5) || (iVar6 < 4)) goto LAB_0067d67a;
    iVar5 = 4;
  }
LAB_0067d762:
  *(int *)(unaff_EBP + -0x1c) = iVar5 + 7;
  FUN_0060142b(0x97,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar4 = *(int *)(unaff_EBP + -0x28);
  FUN_00457d37(*(undefined4 *)(iVar4 + 0x98));
  FUN_00457d37(0x142449);
  cVar1 = FUN_0067b311();
  FUN_00457cda(cVar1 << 7 | *(byte *)(unaff_EBP + -0x1c) & 0x7f);
  FUN_00457cda(iVar5);
  FUN_004751b2(unaff_EBP + -0x40);
  iVar2 = FUN_00413367(iVar2 + 0x13c,*(undefined4 *)(iVar2 + 0x144));
  uVar8 = *(undefined4 *)(unaff_EBP + -0x1c);
  *(int *)(iVar4 + 0x104) = iVar2 * 1000 + *(int *)(unaff_EBP + 8);
  FUN_0067d821(uVar8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x130) = 1;
  FUN_0045ebca();
LAB_0067d811:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


