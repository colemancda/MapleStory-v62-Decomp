/* FUN_51803083 - 0x51803083 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51803083(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar1 + 0x40);
  FUN_518017b5();
  piVar2 = *(int **)(iVar1 + 0x4c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    if (*(int *)(iVar1 + 0x4c) != 0) {
      FUN_51803161(iVar1 + 0x48);
      *(undefined4 *)(iVar1 + 0x4c) = 0;
    }
  }
  piVar2 = (int *)(iVar1 + 0x44);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x40) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


