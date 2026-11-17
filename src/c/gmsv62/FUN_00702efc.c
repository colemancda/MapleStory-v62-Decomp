/* FUN_00702efc - 0x00702efc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00702efc(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  int extraout_ECX;
  uint uVar8;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if ((*(int *)(unaff_EBP + 0xc) != 0) && (*(int *)(extraout_ECX + 0x61c) == 0)) goto LAB_00703279;
  iVar2 = FUN_006fcb31(*(undefined4 *)(unaff_EBP + 8));
  if ((iVar2 == 0) ||
     ((((*(int *)(iVar2 + 0x50) == 0 || (*(int *)(*(int *)(iVar2 + 0x50) + -4) == 0)) &&
       ((*(int *)(iVar2 + 0x54) == 0 || (*(int *)(*(int *)(iVar2 + 0x54) + -4) == 0)))) &&
      (*(int *)(iVar2 + 0x2c) == 0)))) goto LAB_00703279;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    if (*(int *)(extraout_ECX + 0x5fc) == 0) {
      FUN_00815de9();
      FUN_00705381();
      goto LAB_00702f7b;
    }
  }
  else {
LAB_00702f7b:
    if (*(int *)(extraout_ECX + 0x5fc) == 0) goto LAB_00703279;
  }
  for (uVar8 = 0;
      (iVar3 = *(int *)(extraout_ECX + 0x578), iVar3 != 0 && (uVar8 < *(uint *)(iVar3 + -4)));
      uVar8 = uVar8 + 1) {
    if (*(uint *)(iVar3 + uVar8 * 4) == (uint)*(ushort *)(unaff_EBP + 8)) goto LAB_00703279;
  }
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    for (uVar8 = 0;
        (iVar3 = *(int *)(extraout_ECX + 0x618), iVar3 != 0 && (uVar8 < *(uint *)(iVar3 + -4)));
        uVar8 = uVar8 + 1) {
      if (*(uint *)(iVar3 + uVar8 * 4) == (uint)*(ushort *)(unaff_EBP + 8)) goto LAB_00703279;
    }
  }
  if ((*(int *)(extraout_ECX + 0x578) != 0) && (4 < *(uint *)(*(int *)(extraout_ECX + 0x578) + -4)))
  goto LAB_00703279;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    for (uVar8 = 0;
        (iVar2 = *(int *)(extraout_ECX + 0x578), iVar2 != 0 && (uVar8 < *(uint *)(iVar2 + -4)));
        uVar8 = uVar8 + 1) {
      iVar2 = FUN_006defab(iVar2 + uVar8 * 4,0);
      if (iVar2 != 0) break;
    }
    if (4 < (int)uVar8) {
      uVar8 = 4;
    }
    uVar1 = *(ushort *)(unaff_EBP + 8);
    FUN_0047c629((uint)uVar1,uVar8);
    puVar7 = (uint *)FUN_0045f1e3(uVar8);
    *puVar7 = (uint)uVar1;
LAB_0070322d:
    iVar3 = *(int *)(unaff_EBP + -0x10);
  }
  else {
    iVar3 = extraout_ECX;
    if ((*(int *)(iVar2 + 0x50) != 0) && (*(int *)(*(int *)(iVar2 + 0x50) + -4) != 0)) {
      for (uVar8 = 0;
          (iVar3 = *(int *)(iVar2 + 0x50), iVar3 != 0 && (uVar8 < *(uint *)(iVar3 + -4)));
          uVar8 = uVar8 + 1) {
        FUN_0045a1d8(unaff_EBP + 0xc,*(undefined4 *)(iVar3 + uVar8 * 8));
        uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x50) + uVar8 * 8);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iVar3 = FUN_0084c94e(uVar6);
        if (iVar3 != 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          goto LAB_00703052;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
      }
      iVar3 = *(int *)(unaff_EBP + -0x10);
    }
    if ((*(int *)(iVar2 + 0x54) != 0) && (*(int *)(*(int *)(iVar2 + 0x54) + -4) != 0)) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iVar3 = 3;
LAB_0070307b:
      if ((*(int *)(iVar2 + 0x54) != 0) &&
         (*(uint *)(unaff_EBP + -0x14) < *(uint *)(*(int *)(iVar2 + 0x54) + -4))) {
        FUN_00455c59(unaff_EBP + -0x24);
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          FUN_0045e7c2(0);
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
        }
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -4) = 1;
        iVar4 = FUN_004b95d3(unaff_EBP + -0x18,unaff_EBP + 0xc);
        if (iVar4 != 0) {
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(*(int *)(unaff_EBP + 0xc) + -4);
          }
          if (iVar4 < iVar3) goto LAB_00703119;
          puVar5 = (undefined4 *)FUN_0045e053(unaff_EBP + -0x1c,iVar3 + -3,iVar3);
          iVar4 = FUN_0087b6ab(*puVar5);
          FUN_00414ebb();
          if (iVar4 == 0) goto LAB_00703119;
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_00703052:
          FUN_00414ebb();
          goto LAB_0070319b;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
        goto LAB_00703279;
      }
      iVar3 = *(int *)(unaff_EBP + -0x10);
    }
    if (*(int *)(iVar2 + 0x2c) != 0) {
      iVar2 = FUN_00455c59(unaff_EBP + -0x24);
      iVar2 = *(int *)(iVar2 + 4);
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        FUN_0045e7c2(0);
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
      }
      iVar2 = FUN_00413367(iVar2 + 0xa5,*(undefined4 *)(iVar2 + 0xad));
      if (iVar2 != 0) {
LAB_0070319b:
        uVar8 = (uint)*(ushort *)(unaff_EBP + 8);
        *(uint *)(unaff_EBP + 8) = uVar8;
        iVar2 = FUN_006deffb(unaff_EBP + 8,0);
        uVar6 = (*DAT_0097b704)();
        *(undefined4 *)(iVar2 + 0xc) = uVar6;
        FUN_0047c629(uVar8,0xffffffff);
        puVar7 = (uint *)FUN_0045f1e3(0xffffffff);
        *puVar7 = uVar8;
      }
      goto LAB_0070322d;
    }
  }
  if (DAT_0097bdc0 != 0) {
    FUN_00700788(0);
  }
  if (DAT_009796d4 != 0) {
    iVar2 = (**(code **)(*(int *)(DAT_009796d4 + 4) + 0x48))(&DAT_00978498);
    if (iVar2 != 0) goto LAB_00703279;
  }
  FUN_00815de9();
  FUN_00705381();
  if (*(int *)(iVar3 + 0x57c) == 0) {
    FUN_007053e6();
  }
LAB_00703279:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
LAB_00703119:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  iVar3 = iVar3 + 3;
  goto LAB_0070307b;
}


