/* FUN_00559f58 - 0x00559f58 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00559f58(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 4) == 0) {
    iVar3 = *(int *)(extraout_ECX + 8);
  }
  else {
    if (*(uint *)(extraout_ECX + 0xc) <= *(uint *)(extraout_ECX + 0x14)) goto LAB_00559f90;
    iVar3 = *(int *)(extraout_ECX + 8) * 2 + 1;
  }
  if (iVar3 != 0) {
    FUN_0055c62f(iVar3,0);
  }
LAB_00559f90:
  uVar2 = FUN_0087a024(**(undefined4 **)(unaff_EBP + 8),5);
  uVar2 = uVar2 % *(uint *)(extraout_ECX + 8);
  iVar3 = *(int *)(*(int *)(extraout_ECX + 4) + uVar2 * 4);
  piVar1 = (int *)(*(int *)(extraout_ECX + 4) + uVar2 * 4);
  if (iVar3 != 0) {
    do {
      if (*(int *)(iVar3 + 8) == **(int **)(unaff_EBP + 8)) {
        if (*(int *)(unaff_EBP + 0xc) != 0) {
          FUN_0055c489(*(undefined4 *)(unaff_EBP + 0xc));
        }
        goto LAB_0055a01b;
      }
      iVar3 = *(int *)(iVar3 + 4);
    } while (iVar3 != 0);
  }
  *(int *)(extraout_ECX + 0xc) = *(int *)(extraout_ECX + 0xc) + 1;
  iVar3 = FUN_0055cd67();
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0055bd85(*(undefined4 *)(unaff_EBP + 8),*piVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_0055c489(*(undefined4 *)(unaff_EBP + 0xc));
  }
  *piVar1 = iVar3;
LAB_0055a01b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


