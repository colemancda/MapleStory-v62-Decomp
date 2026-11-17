/* FUN_00786b1e - 0x00786b1e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00786b1e(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  iVar4 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x10) = iVar4;
  if (iVar4 <= *(int *)(unaff_EBP + 0x10)) {
    iVar4 = iVar4 * 0x44;
    piVar1 = *(int **)(unaff_EBP + 8);
    *(int *)(unaff_EBP + -0x14) = iVar4;
    do {
      iVar3 = *(int *)(unaff_EBP + -0x10);
      FUN_00776a8e(*piVar1 + iVar4);
      if (*(int *)(unaff_EBP + 0xc) < iVar3) {
        do {
          iVar2 = FUN_00786bd4(unaff_EBP + -0x58,*piVar1 + -0x44 + iVar4);
          if (iVar2 == 0) break;
          FUN_00776a8e(*piVar1 + iVar4 + -0x44);
          iVar3 = iVar3 + -1;
          iVar4 = iVar4 + -0x44;
        } while (*(int *)(unaff_EBP + 0xc) < iVar3);
        iVar4 = *(int *)(unaff_EBP + -0x14);
      }
      FUN_00776a8e(unaff_EBP + -0x58);
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      iVar4 = iVar4 + 0x44;
      *(int *)(unaff_EBP + -0x14) = iVar4;
    } while (*(int *)(unaff_EBP + -0x10) <= *(int *)(unaff_EBP + 0x10));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00773f2e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


