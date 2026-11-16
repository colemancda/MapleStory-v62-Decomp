/* FUN_50c0bdbc - 0x50c0bdbc in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0bdbc(void)

{
  int iVar1;
  short *psVar2;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar1 = *(int *)(*(int *)(unaff_EBP + 0xc) + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  psVar2 = (short *)FUN_50c0ab6e(iVar1);
  FUN_50c09a25(*(short **)(unaff_EBP + 8),psVar2);
  FUN_50c0bdff();
  return;
}


