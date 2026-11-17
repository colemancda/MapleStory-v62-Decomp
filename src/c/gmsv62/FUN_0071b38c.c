/* FUN_0071b38c - 0x0071b38c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0071b38c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar5;
  
  FUN_00879bb8();
  FUN_0071bd73();
  uVar2 = FUN_0071bd20(*(int *)(extraout_ECX + 0x5dc) << 3);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    if (uVar2 == 0) break;
    iVar1 = *(int *)(uVar2 - 0xc);
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(uVar2 + 4);
    FUN_0071ba82();
    iVar4 = unaff_EBP + -0x28;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0071bdaf(0xffffffff);
    FUN_0071b935(iVar4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_0071bbfc(0);
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  } while (*(int *)(unaff_EBP + -0x10) < 8);
  iVar4 = *(int *)(extraout_ECX + 0x5dc);
  *(undefined4 *)(unaff_EBP + -0x20) = DAT_00978368;
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xc4) + 4) + 0x1c))(0 < iVar4);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xcc) + 4) + 0x1c))
            (*(int *)(extraout_ECX + 0x5dc) < *(int *)(extraout_ECX + 0x5e0) + -1);
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 1;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar3 = FUN_00679d86(unaff_EBP + -0x1c,0xdf3);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -0x18) = 0xffffff7c;
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) - extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xaf;
  piVar5 = (int *)(extraout_ECX + 0x84);
  do {
    if (((*(int *)(extraout_ECX + 0xe4) == 0) ||
        (*(uint *)(*(int *)(extraout_ECX + 0xe4) + -4) <= *(uint *)(unaff_EBP + -0x10))) ||
       ((int)*(char *)(*(int *)((int)piVar5 +
                               *(int *)(extraout_ECX + 0xe4) + *(int *)(unaff_EBP + -0x18) + 4) +
                      0x20) != *(int *)(*(int *)(unaff_EBP + -0x20) + 0x204c))) {
      if ((int *)*piVar5 != (int *)0x0) {
        (**(code **)(*(int *)*piVar5 + 0xc))();
        FUN_00450463();
      }
    }
    else if (*piVar5 == 0) {
      iVar4 = FUN_004029b9(0x578);
      *(int *)(unaff_EBP + -0x24) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar4 = FUN_00450382(uVar3);
      (**(code **)(**(int **)(iVar4 + 4) + 0x20))
                (extraout_ECX,*(int *)(unaff_EBP + -0x10) + 3000,0x170,
                 *(undefined4 *)(unaff_EBP + -0x14),1,unaff_EBP + -0x38);
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x16;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    piVar5 = piVar5 + 2;
  } while (*(int *)(unaff_EBP + -0x14) < 0x15f);
  FUN_008161f1(0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


