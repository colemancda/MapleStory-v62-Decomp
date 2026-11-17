/* FUN_006e960c - 0x006e960c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e960c(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + 0xc) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)(unaff_EBP + 0xc);
  }
  iVar1 = FUN_007b3de5();
  if (iVar2 != iVar1) {
    FUN_0060142b(0x35,0,0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00457d37(iVar2);
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0045ebca();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_005e064d(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


