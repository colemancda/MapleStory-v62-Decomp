/* FUN_50c0ccff - 0x50c0ccff in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int FUN_50c0ccff(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_50c10270();
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iVar2 = FUN_50c0e04f();
    if (-1 < iVar2) {
      iVar2 = *(int *)(unaff_EBP + 8);
      *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar2 + 0x1c);
      FUN_50c026fc();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_50c0dbcd(*(void **)(unaff_EBP + -0x10),iVar2 + 0x3c);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piVar1 = (int *)(iVar2 + 0x20);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(iVar2 + 0x1c) = 0;
      }
      piVar1 = *(int **)(unaff_EBP + -0x10);
      **(undefined4 **)(unaff_EBP + 0xc) = piVar1;
      (**(code **)(*piVar1 + 4))(piVar1);
      iVar2 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


