/* FUN_50c0f292 - 0x50c0f292 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0f292(void)

{
  int *piVar1;
  void *this;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this = *(void **)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)((int)this + 0x18);
  FUN_50c026fc();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_50c0f7f7(this,*(wchar_t **)(unaff_EBP + 0xc),&DAT_50c21434);
  piVar1 = (int *)((int)this + 0x1c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  FUN_50c0f2ec();
  return;
}


