/* FUN_5080ab41 - 0x5080ab41 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080ab41(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  short *psVar3;
  size_t *psVar4;
  short *psVar5;
  int unaff_EBP;
  
  FUN_5080e090();
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_5080aba5();
    return;
  }
  puVar2 = *(undefined4 **)(*(int *)(unaff_EBP + 8) + 0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar2 == (undefined4 *)0x0) {
    psVar5 = (short *)0x0;
  }
  else {
    psVar5 = (short *)*puVar2;
  }
  puVar2 = *(undefined4 **)(*(int *)(unaff_EBP + 8) + 0x38);
  if (puVar2 == (undefined4 *)0x0) {
    psVar3 = (short *)0x0;
  }
  else {
    psVar3 = (short *)*puVar2;
  }
  psVar4 = FUN_5080aa4e(psVar3,psVar5);
  *puVar1 = psVar4;
  FUN_5080aba5();
  return;
}


