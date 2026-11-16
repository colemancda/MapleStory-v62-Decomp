/* FUN_50c03762 - 0x50c03762 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c03762(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)(unaff_EBP + 8);
  puVar2 = *(undefined4 **)(iVar1 + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_50c040d2((int *)(unaff_EBP + -0x10));
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar2;
    *puVar2 = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined ***)(unaff_EBP + -0x24) = &PTR_FUN_50c13334;
  iVar1 = *(int *)(iVar1 + 0x20);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_50c03ed7((void *)(unaff_EBP + -0x24),iVar1,0,0,0);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined ***)(unaff_EBP + -0x24) = &PTR_FUN_50c13334;
  FUN_50c04098(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_50c040d2((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


