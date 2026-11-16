/* FUN_50c09456 - 0x50c09456 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c09456(void)

{
  uint uVar1;
  int *piVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = extraout_ECX[2];
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  if ((uVar1 & 0x14) == 0) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) != 0) {
        piVar2 = (int *)FUN_50c092ea((int)extraout_ECX);
        (**(code **)(*piVar2 + 0x10))(1);
        extraout_ECX[2] = extraout_ECX[2] & 0xfffffffd;
      }
    }
    else {
      (**(code **)(*extraout_ECX + 0x10))(1);
      extraout_ECX[2] = extraout_ECX[2] & 0xfffffffc;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


