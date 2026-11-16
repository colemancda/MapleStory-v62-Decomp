/* FUN_51806d0d - 0x51806d0d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51806d0d(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  Ordinal_8(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0x20) == 0) {
    FUN_5180e990(0x80004003);
  }
  iVar1 = (**(code **)(**(int **)(extraout_ECX + 0x20) + 0x38))
                    (*(int **)(extraout_ECX + 0x20),unaff_EBP + -0x1c);
  if ((iVar1 < 0) || ((*(byte *)(unaff_EBP + -0x1b) & 0x40) == 0)) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_518047f3((short *)(unaff_EBP + -0x1c));
    if (iVar1 < 0) {
      FUN_5180e990(iVar1);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_518047f3((short *)(unaff_EBP + -0x1c));
    if (iVar1 < 0) {
      FUN_5180e990(iVar1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


