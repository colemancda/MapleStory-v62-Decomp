/* FUN_004ae754 - 0x004ae754 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ae754(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int iVar4;
  int unaff_EBP;
  int *piVar5;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x34) != 0) && (*(int *)(unaff_EBP + 8) == 0x202)) {
    *(undefined4 *)(extraout_ECX + 0x44) = 0xffffffff;
    uVar1 = *(undefined4 *)(unaff_EBP + 0x10);
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
LAB_004ae78b:
    iVar2 = *(int *)(extraout_ECX + 0x58);
    if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) <= *(uint *)(unaff_EBP + 8))) goto LAB_004ae7fe;
    piVar5 = (int *)(iVar2 + *(int *)(unaff_EBP + 0x10));
    if (*piVar5 != -3) {
      (*DAT_0097b504)(unaff_EBP + -0x1c,piVar5[2],piVar5[3],piVar5[4] + piVar5[2],
                      piVar5[5] + piVar5[3]);
      (*DAT_0097b588)(unaff_EBP + -0x1c,((-1 < *piVar5) - 1 & 0xfffffffd) + 4,1);
      iVar2 = (*DAT_0097b57c)(unaff_EBP + -0x1c,uVar1,*(undefined4 *)(unaff_EBP + 0x14));
      if (iVar2 != 0) {
        *(undefined4 *)(extraout_ECX + 0x44) = *(undefined4 *)(unaff_EBP + 8);
LAB_004ae7fe:
        if ((*(int *)(extraout_ECX + 0x44) != -1) &&
           (iVar2 = *(int *)(*(int *)(extraout_ECX + 0x58) + *(int *)(extraout_ECX + 0x44) * 0x18),
           iVar2 != *(int *)(extraout_ECX + 0x30))) {
          if (iVar2 == -2) {
            iVar2 = *(int *)(extraout_ECX + 0x40) + -1;
            if (iVar2 < 1) {
              iVar2 = 0;
            }
            FUN_004ae16e((iVar2 + 1) * *(int *)(extraout_ECX + 0x38) + -1);
            (**(code **)(**(int **)(extraout_ECX + 0x20) + 0x1c))
                      (*(undefined4 *)(extraout_ECX + 0x10),800,*(undefined4 *)(extraout_ECX + 0x30)
                      );
            puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x5a7);
            uVar1 = *puVar3;
            *(undefined4 *)(unaff_EBP + -4) = 0;
            FUN_007d3cdd(uVar1);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          }
          else if (iVar2 == -1) {
            iVar2 = *(int *)(extraout_ECX + 0x3c) + -1;
            iVar4 = *(int *)(extraout_ECX + 0x40) + 1;
            if (iVar4 < iVar2) {
              iVar2 = iVar4;
            }
            FUN_004ae16e(*(int *)(extraout_ECX + 0x38) * iVar2);
            (**(code **)(**(int **)(extraout_ECX + 0x20) + 0x1c))
                      (*(undefined4 *)(extraout_ECX + 0x10),800,*(undefined4 *)(extraout_ECX + 0x30)
                      );
            puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x5a7);
            uVar1 = *puVar3;
            *(undefined4 *)(unaff_EBP + -4) = 1;
            FUN_007d3cdd(uVar1);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          }
          else {
            FUN_004ae16e(iVar2);
            (**(code **)(**(int **)(extraout_ECX + 0x20) + 0x1c))
                      (*(undefined4 *)(extraout_ECX + 0x10),800,*(undefined4 *)(extraout_ECX + 0x30)
                      );
            puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 0x10,0x5a7);
            uVar1 = *puVar3;
            *(undefined4 *)(unaff_EBP + -4) = 2;
            FUN_007d3cdd(uVar1);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          }
          FUN_00402676();
        }
        FUN_004b3daf();
        goto LAB_004ae93a;
      }
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 0x18;
    goto LAB_004ae78b;
  }
LAB_004ae93a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


