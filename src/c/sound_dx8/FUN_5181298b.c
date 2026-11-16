/* FUN_5181298b - 0x5181298b in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_5181298b(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_5180ea30();
  if (*(undefined4 **)(unaff_EBP + 0x14) == (undefined4 *)0x0) {
    iVar4 = -0x7fffbffd;
    goto LAB_51812a98;
  }
  **(undefined4 **)(unaff_EBP + 0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_51812f44((void *)(unaff_EBP + -0x10),(undefined4 *)0x0);
    iVar4 = (*DAT_5181fc94)(&DAT_51819df0,0,1,&DAT_51819d40,unaff_EBP + -0x10);
    if (-1 < iVar4) goto LAB_518129ef;
LAB_51812a38:
    piVar2 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  else {
    FUN_51804af0((int *)(unaff_EBP + -0x10),*(int **)(unaff_EBP + 0xc));
LAB_518129ef:
    puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x20) = *puVar1;
      *(undefined4 *)(unaff_EBP + -0x1c) = puVar1[1];
      *(undefined4 *)(unaff_EBP + -0x18) = puVar1[2];
      *(undefined4 *)(unaff_EBP + -0x14) = puVar1[3];
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        *(undefined4 *)(unaff_EBP + -0x20) = 1;
      }
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0x10000;
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        *(undefined4 *)(unaff_EBP + -0x18) = 1;
      }
      iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0xc))
                        (*(int **)(unaff_EBP + -0x10),unaff_EBP + -0x20,unaff_EBP + -0x30);
      if (iVar4 < 0) goto LAB_51812a38;
    }
    iVar3 = *(int *)(unaff_EBP + 8);
    *(undefined4 **)(unaff_EBP + 0xc) = (undefined4 *)(iVar3 + 0x18);
    FUN_518017b5();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_51804af0((int *)(iVar3 + 0x40),*(int **)(unaff_EBP + -0x10));
    piVar2 = (int *)(iVar3 + 0x1c);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (iVar4 == 0) {
      *(undefined4 *)(iVar3 + 0x18) = 0;
    }
    piVar2 = *(int **)(unaff_EBP + -0x10);
    **(undefined4 **)(unaff_EBP + 0x14) = piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
    piVar2 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    iVar4 = 0;
  }
LAB_51812a98:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


