/* FUN_51809d68 - 0x51809d68 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_51809d68(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar1 = (undefined4 *)(extraout_ECX + 0x3c);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  FUN_518017b5();
  iVar3 = *(int *)(extraout_ECX + 0x48);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piVar2 = (int *)(extraout_ECX + 0x40);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    FUN_51804038();
    iVar4 = *(int *)(unaff_EBP + 8);
  }
  else {
    iVar4 = *(int *)(unaff_EBP + 8);
    *(int *)(iVar4 + 4) = iVar3;
    FUN_51810353(iVar4);
    piVar2 = (int *)(extraout_ECX + 0x40);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


