/* FUN_5180f496 - 0x5180f496 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int * FUN_5180f496(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  int *piVar4;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piVar4 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  do {
    iVar2 = (**(code **)(*piVar4 + 0xc))(piVar4,1,unaff_EBP + -0x10,unaff_EBP + -0x14);
    if (iVar2 != 0) {
      piVar4 = *(int **)(unaff_EBP + 8);
      piVar3 = *(int **)(unaff_EBP + -0x10);
      *piVar4 = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_5180f51c:
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return piVar4;
    }
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x24))
                      (*(int **)(unaff_EBP + -0x10),unaff_EBP + 0xc);
    if ((iVar2 == 0) && (*(int *)(unaff_EBP + 0xc) == *(int *)(unaff_EBP + 0x10))) {
      piVar1 = *(int **)(unaff_EBP + -0x10);
      piVar4 = *(int **)(unaff_EBP + 8);
      *piVar4 = (int)piVar1;
      piVar3 = (int *)0x0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1);
        piVar3 = *(int **)(unaff_EBP + -0x10);
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_5180f51c;
    }
    FUN_51812f17((void *)(unaff_EBP + -0x10),(undefined4 *)0x0);
  } while( true );
}


