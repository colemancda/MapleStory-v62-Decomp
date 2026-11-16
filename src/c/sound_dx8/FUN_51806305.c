/* FUN_51806305 - 0x51806305 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_51806305(void)

{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  int unaff_EBP;
  uint uVar3;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = 0x10000;
  puVar1 = FUN_51806362((int *)(unaff_EBP + -0x10));
  iVar2 = FUN_51806429(this,*(int **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),puVar1,uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_51806355((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


