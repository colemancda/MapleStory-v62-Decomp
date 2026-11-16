/* FUN_518136e0 - 0x518136e0 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_518136e0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(uint *)(iVar1 + 0x24) = (uint)(*(int *)(iVar1 + 0x18) != 0);
  iVar2 = FUN_5181287a();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5181022b((void *)(iVar1 + 0x1c),iVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_51813012(unaff_EBP + -0x14);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


