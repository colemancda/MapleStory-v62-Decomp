/* FUN_51801725 - 0x51801725 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_51801725(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  iVar2 = (*DAT_5181fc9c)(0);
  if (iVar2 < 0) {
    iVar2 = FUN_51801dd5(*(int *)(unaff_EBP + 0xc));
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(extraout_ECX + 0x14) = 0;
    FUN_51801e04(*(int *)(unaff_EBP + 0xc));
    do {
      while( true ) {
        FUN_51801417();
        iVar2 = FUN_51801530();
        if (iVar2 != 1) break;
        FUN_518017b5();
        if (*(int *)(extraout_ECX + 0x14) == 1) {
          *(undefined4 *)(extraout_ECX + 0x14) = 0;
        }
        piVar1 = (int *)(extraout_ECX + 0x10);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined4 *)(extraout_ECX + 0xc) = 0;
        }
      }
    } while (iVar2 != 2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_518017af();
    iVar2 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


