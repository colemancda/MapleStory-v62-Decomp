/* FUN_50c11651 - 0x50c11651 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 FUN_50c11651(void)

{
  int iVar1;
  int *piVar2;
  short *psVar3;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x18) = (undefined4 *)(iVar1 + 0x1c);
  FUN_50c026fc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50c07810(iVar1 + 0x24);
  FUN_50c04098(iVar1 + 0x3c);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined ***)(unaff_EBP + -0x2c) = &PTR_FUN_50c1483c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piVar2 = (int *)FUN_50c1175f((void *)(unaff_EBP + -0x2c));
  *piVar2 = iVar1;
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + 0xc);
  psVar3 = FUN_50c10f3a((int *)(unaff_EBP + 8));
  while (psVar3 != (short *)0x0) {
    FUN_50c10fc6(psVar3,(undefined4 *)(unaff_EBP + -0x14),(undefined4 *)(unaff_EBP + -0x10));
    if (psVar3 != (short *)0x0) {
      (*DAT_50c211e8)(psVar3 + -2);
    }
    FUN_50c11373();
    psVar3 = FUN_50c10f3a((int *)(unaff_EBP + 8));
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined ***)(unaff_EBP + -0x2c) = &PTR_FUN_50c1483c;
  FUN_50c118b4(unaff_EBP + -0x2c);
  piVar2 = (int *)(iVar1 + 0x20);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


