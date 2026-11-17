/* FUN_005ced37 - 0x005ced37 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005ced37(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = 0;
  if (((((*(int *)(extraout_ECX + 0x274) == 0) && (*(int *)(extraout_ECX + 0x22c) == 0)) &&
       (*(int *)(extraout_ECX + 0x204) == 0)) &&
      ((*(int *)(extraout_ECX + 0x210) == 0 && (*(int *)(extraout_ECX + 0x280) == 0)))) &&
     (*(int *)(extraout_ECX + 0x118) != 0)) {
    for (uVar4 = 0;
        (iVar2 = *(int *)(*(int *)(extraout_ECX + 0x15c) + 0x248), iVar2 != 0 &&
        (uVar4 < *(uint *)(iVar2 + -4))); uVar4 = uVar4 + 1) {
      if (*(int *)(extraout_ECX + 0x118) == *(int *)(iVar3 + 0xc + iVar2)) {
        iVar3 = uVar4 * 0x1c + *(int *)(*(int *)(extraout_ECX + 0x15c) + 0x248);
        goto LAB_005cedc2;
      }
      iVar3 = iVar3 + 0x1c;
    }
    iVar3 = 0;
LAB_005cedc2:
    if (iVar3 != 0) {
      **(int **)(unaff_EBP + 8) = *(int *)(iVar3 + 0x14) + 0x15;
      uVar1 = FUN_005c5474();
      **(undefined4 **)(unaff_EBP + 0xc) = uVar1;
      **(undefined2 **)(unaff_EBP + 0x10) =
           CONCAT11(*(undefined1 *)(extraout_ECX + 0x11c),*(undefined1 *)(extraout_ECX + 0x118));
      FUN_00651eaf(*(undefined4 *)(iVar3 + 0xc));
      FUN_005ccfc1(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((*(int **)(unaff_EBP + 8) == (int *)0x0) ||
         (iVar2 = **(int **)(unaff_EBP + 8), iVar2 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar2 + -4) >> 1;
      }
      uVar1 = 1;
      if (uVar4 != 0) {
        FUN_00402f41(unaff_EBP + 8);
        *(undefined4 *)(extraout_ECX + 0x7c) = **(undefined4 **)(unaff_EBP + 0xc);
        iVar2 = FUN_007d1e08();
        iVar2 = iVar2 + *(int *)(iVar3 + 0x18);
        *(int *)(extraout_ECX + 0x78) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)(extraout_ECX + 0x78) = 1;
        }
      }
      iVar3 = *(int *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x118) = 0;
      if (iVar3 != 0) {
        FUN_004030b1();
      }
      goto LAB_005cee83;
    }
  }
  uVar1 = 0;
LAB_005cee83:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


