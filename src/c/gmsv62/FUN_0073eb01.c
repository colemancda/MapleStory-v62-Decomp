/* FUN_0073eb01 - 0x0073eb01 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0073eb01(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0xc6c);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar3 = DAT_0097be44;
  if (0 < iVar1) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0xfffffff3;
    do {
      if (iVar3 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar3 + -4);
      }
      iVar2 = *(int *)(extraout_ECX + 0xaa0);
      if (*(int *)(iVar2 + 0x3c) == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x38) - *(int *)(iVar2 + 0x3c);
      }
      uVar4 = (iVar1 - *(int *)(unaff_EBP + -0x10)) + iVar2;
      if (((-1 < (int)uVar4) && (iVar3 != 0)) && (uVar4 < *(uint *)(iVar3 + -4))) {
        iVar1 = *(int *)(iVar3 + uVar4 * 8 + 4);
        *(int *)(unaff_EBP + -0x18) = iVar1;
        iVar3 = 0;
        if (iVar1 != 0) {
          InterlockedIncrement((LONG *)(iVar1 + 4));
          iVar3 = *(int *)(unaff_EBP + -0x18);
        }
        uVar5 = *(undefined4 *)(iVar3 + 0x18);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iVar3 = FUN_00413367(iVar3 + 0x10,uVar5);
        iVar1 = *(int *)(unaff_EBP + -0x18);
        if (((iVar3 == 0xf) && (*(int *)(iVar1 + 0x30) != 0)) &&
           ((iVar3 = (*(int *)(extraout_ECX + 0xc74) -
                     (-(uint)(*(int *)(extraout_ECX + 0xc68) != 3) & 5)) +
                     *(int *)(extraout_ECX + 0xc64) + *(int *)(unaff_EBP + -0x14),
            iVar3 <= *(int *)(unaff_EBP + 0xc) &&
            ((*(int *)(unaff_EBP + 0xc) <= iVar3 + 0xc && (*(int *)(unaff_EBP + 8) < 0x244)))))) {
          uVar5 = *(undefined4 *)(iVar1 + 0x30);
          uVar8 = 0;
          uVar7 = 0;
          uVar6 = 0;
          iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))(uVar5,0,0,0);
          iVar1 = iVar1 + 0x14 + *(int *)(unaff_EBP + 0xc);
          iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar1);
          FUN_00759767(iVar3 + *(int *)(unaff_EBP + 8),iVar1,uVar5,uVar6,uVar7,uVar8);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            FUN_00748869(0);
          }
          break;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = DAT_0097be44;
        if (iVar1 != 0) {
          FUN_00748869(0);
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          iVar3 = DAT_0097be44;
        }
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + -0xd;
    } while (*(int *)(unaff_EBP + -0x10) < *(int *)(extraout_ECX + 0xc6c));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


