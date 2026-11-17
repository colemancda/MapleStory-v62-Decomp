/* FUN_004f99fd - 0x004f99fd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f99fd(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 0x14);
  iVar3 = *(int *)(unaff_EBP + 0xc);
  FUN_004f985f(**(int **)(unaff_EBP + 8) + -0xc + (iVar3 + iVar1) * 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = *(int *)(unaff_EBP + 0x10) / 2;
  *(int *)(unaff_EBP + 0xc) = iVar2;
  if (iVar3 <= iVar2) {
    do {
      iVar3 = iVar3 * 2;
      if ((iVar3 < *(int *)(unaff_EBP + 0x10)) &&
         (iVar2 = **(int **)(unaff_EBP + 8) + (iVar3 + iVar1) * 0xc,
         *(int *)(iVar2 + 4) < *(int *)(iVar2 + -8))) {
        iVar3 = iVar3 + 1;
      }
    } while ((*(int *)(**(int **)(unaff_EBP + 8) + -8 + (iVar3 + iVar1) * 0xc) <
              *(int *)(unaff_EBP + -0x14)) &&
            (FUN_004f98a9(**(int **)(unaff_EBP + 8) + (iVar3 + iVar1) * 0xc + -0xc),
            iVar3 <= *(int *)(unaff_EBP + 0xc)));
  }
  FUN_004f98a9(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004f38b7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


