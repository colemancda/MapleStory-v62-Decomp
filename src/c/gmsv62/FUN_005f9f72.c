/* FUN_005f9f72 - 0x005f9f72 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f9f72(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar3;
  
  FUN_00879bb8();
  if (((*(int *)(unaff_EBP + 8) == 0x202) && (*(int *)(extraout_ECX + 0xa98) != 0)) &&
     (*(int *)(extraout_ECX + 0xa9c) == 1)) {
    FUN_005fe227(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0x10),
                 *(undefined4 *)(unaff_EBP + 0x14));
    if ((-1 < *(int *)(unaff_EBP + -0x14)) && (-1 < *(int *)(unaff_EBP + -0x10))) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
      uVar3 = *(uint *)(extraout_ECX + 0x200);
      while (uVar3 != 0) {
        iVar1 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
        FUN_005f96ff(uVar3);
        if ((*(int *)(unaff_EBP + -0x24) == *(int *)(unaff_EBP + -0x14)) &&
           (*(int *)(unaff_EBP + -0x20) == *(int *)(unaff_EBP + -0x10))) {
          piVar2 = *(int **)(unaff_EBP + -0x18);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          break;
        }
        piVar2 = *(int **)(unaff_EBP + -0x18);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
        uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      }
      if ((*(uint *)(extraout_ECX + 0x1fc) == 0) ||
         (*(uint *)(extraout_ECX + 0x1fc) <= *(uint *)(unaff_EBP + 8))) {
        FUN_005fdca6(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10));
        FUN_008161f1(0);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


