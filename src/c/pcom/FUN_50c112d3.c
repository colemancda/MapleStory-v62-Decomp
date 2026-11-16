/* FUN_50c112d3 - 0x50c112d3 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c112d3(void)

{
  undefined4 *puVar1;
  short *psVar2;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined ***)(unaff_EBP + -0x28) = &PTR_FUN_50c1483c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = (undefined4 *)FUN_50c1175f((void *)(unaff_EBP + -0x28));
  *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  psVar2 = FUN_50c10dc6();
  while (psVar2 != (short *)0x0) {
    FUN_50c10fc6(psVar2,(undefined4 *)(unaff_EBP + -0x14),(undefined4 *)(unaff_EBP + -0x10));
    if (psVar2 != (short *)0x0) {
      (*DAT_50c211e8)(psVar2 + -2);
    }
    FUN_50c11373();
    psVar2 = FUN_50c10dc6();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x28) = &PTR_FUN_50c1483c;
  FUN_50c118b4(unaff_EBP + -0x28);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


