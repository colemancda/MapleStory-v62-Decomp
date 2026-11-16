/* FUN_50006dcc - 0x50006dcc in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50006dcc(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 0x34);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    (*DAT_50081dc8)(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50006cd3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_50006b6d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


