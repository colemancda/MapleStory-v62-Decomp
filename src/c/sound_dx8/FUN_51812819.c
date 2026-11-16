/* FUN_51812819 - 0x51812819 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51812819(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(uint *)(extraout_ECX + 0x24) = (uint)(*(int *)(unaff_EBP + 8) != 0);
  FUN_51804af0((int *)(extraout_ECX + 0x18),piVar1);
  iVar2 = FUN_5181287a();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5181022b((void *)(extraout_ECX + 0x1c),iVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_51813012(unaff_EBP + -0x14);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


