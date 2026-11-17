/* FUN_006e4df0 - 0x006e4df0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006e4df0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *extraout_ECX;
  uint uVar6;
  int unaff_EBP;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX[0x29e] + 0x34) == 2) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    piVar7 = extraout_ECX + 0x317;
    do {
      (*DAT_0097b504)(unaff_EBP + -0x24,piVar7[-2] + 0xf0,piVar7[-1] + 0x14,*piVar7 + 0xf0,
                      piVar7[1] + 0x14);
      iVar2 = (*DAT_0097b57c)(unaff_EBP + -0x24,*(undefined4 *)(unaff_EBP + 8),
                              *(undefined4 *)(unaff_EBP + 0xc));
      if (iVar2 != 0) {
        uVar1 = extraout_ECX[0x15e];
        if (-1 < (int)uVar1) {
          if (extraout_ECX[0x374] == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(uint *)(extraout_ECX[0x374] + -4);
          }
          if (((uVar1 < uVar6) && (iVar2 = *(int *)(extraout_ECX[0x374] + uVar1 * 4), iVar2 != 0))
             && (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar2 + -4))) {
            iVar2 = *(int *)(iVar2 + *(uint *)(unaff_EBP + -0x10) * 8 + 4);
            *(int *)(unaff_EBP + -0x10) = iVar2;
            if (iVar2 != 0) {
              InterlockedIncrement((LONG *)(iVar2 + 4));
            }
            *(undefined4 *)(unaff_EBP + -4) = 0;
            FUN_00489d8c();
            uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c);
            uVar9 = 0;
            uVar8 = 0;
            iVar2 = unaff_EBP + -0x50;
            iVar4 = *extraout_ECX;
            *(undefined1 *)(unaff_EBP + -4) = 1;
            iVar4 = (**(code **)(iVar4 + 0x30))(uVar3,iVar2,0,0);
            iVar4 = iVar4 + 0x14 + *(int *)(unaff_EBP + 0xc);
            iVar5 = (**(code **)(*extraout_ECX + 0x2c))(iVar4);
            FUN_00759767(iVar5 + *(int *)(unaff_EBP + 8),iVar4,uVar3,iVar2,uVar8,uVar9);
            *(undefined1 *)(unaff_EBP + -4) = 0;
            FUN_00489db7();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int *)(unaff_EBP + -0x10) != 0) {
              FUN_006eae3c(0);
            }
            uVar3 = 1;
            goto LAB_006e4e6d;
          }
        }
        break;
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      piVar7 = piVar7 + 4;
    } while (*(int *)(unaff_EBP + -0x10) < 0x14);
    FUN_0074d6fb();
  }
  uVar3 = 0;
LAB_006e4e6d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


