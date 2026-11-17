/* FUN_004b57d7 - 0x004b57d7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004b57d7(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar2 = FUN_0042452b();
  FUN_004b58bf(unaff_EBP + -0x18,uVar2);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x14) == (int *)0x0) {
    iVar4 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar4 + 4) = 0;
  }
  else {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x40))(*(undefined4 *)(unaff_EBP + 0xc));
    iVar1 = *(int *)(unaff_EBP + -0x14);
    iVar4 = *(int *)(unaff_EBP + 8);
    *(int *)(iVar4 + 4) = iVar1;
    iVar3 = 0;
    if (iVar1 != 0) {
      InterlockedIncrement((LONG *)(iVar1 + 4));
      iVar3 = *(int *)(unaff_EBP + -0x14);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    if (iVar3 != 0) {
      FUN_00449913(0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


