/* FUN_0060fb07 - 0x0060fb07 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060fb07(void)

{
  bool bVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  int unaff_EBP;
  int *piVar4;
  int iStack_24;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xc0) == 0) {
    piVar4 = (int *)(extraout_ECX + 0x1b0);
    iVar3 = 1;
    do {
      if (0 < *piVar4) {
        iStack_24 = 0x60fb3b;
        iVar2 = (*DAT_0097b704)();
        if (3600000 < (uint)(iVar2 - *piVar4)) {
          iStack_24 = 0;
          *piVar4 = 0;
          FUN_0060142b(0x6f,0);
          *(undefined4 *)(unaff_EBP + -4) = 0;
          iStack_24 = 0x1b;
          FUN_00457cda();
          iStack_24 = iVar3;
          FUN_00457cda();
          *(int **)(unaff_EBP + -0x10) = &iStack_24;
          FUN_005b1a45(&iStack_24,iVar3);
          FUN_00459cb5();
          iStack_24 = unaff_EBP + -0x20;
          FUN_004751b2();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iStack_24 = 0x60fb9d;
          FUN_0045ebca();
        }
      }
      piVar4 = piVar4 + 1;
      bVar1 = iVar3 < 3;
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


