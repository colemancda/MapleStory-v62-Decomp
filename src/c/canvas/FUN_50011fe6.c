/* FUN_50011fe6 - 0x50011fe6 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 FUN_50011fe6(void)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  Ordinal_8(unaff_EBP + -0x20);
  piVar1 = *(int **)(unaff_EBP + 0xc);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  iVar2 = (**(code **)(*extraout_ECX + 0x14))(extraout_ECX,iVar2,unaff_EBP + -0x20);
  if (iVar2 < 0) {
    FUN_50012ca5(iVar2,extraout_ECX,&DAT_50019518);
  }
  FUN_5000d431(*(void **)(unaff_EBP + 8),(undefined2 *)(unaff_EBP + -0x20),'\0');
  if (piVar1 != (int *)0x0) {
    FUN_500028a0(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


