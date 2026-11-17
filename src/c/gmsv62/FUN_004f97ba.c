/* FUN_004f97ba - 0x004f97ba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f97ba(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar3 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x10) = iVar3;
  if (iVar3 <= *(int *)(unaff_EBP + 0x10)) {
    piVar1 = *(int **)(unaff_EBP + 8);
    iVar3 = iVar3 * 0xc;
    do {
      iVar4 = *(int *)(unaff_EBP + -0x10);
      FUN_004f98a9(*piVar1 + iVar3);
      if (*(int *)(unaff_EBP + 0xc) < iVar4) {
        *(int *)(unaff_EBP + 8) = iVar3;
        do {
          iVar2 = *(int *)(unaff_EBP + 8) + *piVar1;
          if (*(int *)(unaff_EBP + -0x18) <= *(int *)(iVar2 + -8)) break;
          FUN_004f98a9(iVar2 + -0xc);
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + -0xc;
          iVar4 = iVar4 + -1;
        } while (*(int *)(unaff_EBP + 0xc) < iVar4);
      }
      FUN_004f98a9(unaff_EBP + -0x1c);
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      iVar3 = iVar3 + 0xc;
    } while (*(int *)(unaff_EBP + -0x10) <= *(int *)(unaff_EBP + 0x10));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004f38b7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


